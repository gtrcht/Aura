import os
import re

# Get the build environment
try:
    from SCons.Script import Import
    Import("env")
except ImportError:
    pass

# # --- [FIX 1] LVGL 9 ARM-Optimization Remover ---
# print("--- [FIX] Running LVGL 9 ARM-Optimization Remover ---")

# def skip_arm_files(env, node):
#     bad_files = ["lv_blend_helium.S", "lv_blend_neon.S", "lv_blend_arm2d.S"]
#     if any(bad in node.name for bad in bad_files):
#         print(f"--- [FIX] Successfully blocked: {node.name}")
#         return None
#     return node

# env.AddBuildMiddleware(skip_arm_files)


# --- [FIX 2] TFT_eSPI Gamma Patch ---
def apply_gamma_patch():
    # Dynamic path to the library file
    lib_path = os.path.join(env.subst("$PROJECT_LIBDEPS_DIR"), env.subst("$PIOENV"), "TFT_eSPI", "TFT_Drivers", "ILI9341_Init.h")
    
    if not os.path.exists(lib_path):
        return

    with open(lib_path, "r") as f:
        content = f.read()

    # 1. Isolate the ILI9341_2_DRIVER block
    # Matches from '#elif defined (ILI9341_2_DRIVER)' until the next '#elif' or '#endif'
    pattern = r"(#elif defined\s*\(ILI9341_2_DRIVER\).*?)(?=#elif|#endif)"

    def replace_gamma(match):
        block = match.group(1)
        
        # 2. Comment out 0xE0 and 0xE1 (handles 0xE, 0xe, and X/x)
        # Regex breakdown: 
        # (?<!// )    -> Ensure it isn't already commented out
        # writecommand\(0[xX][eE][01]\); -> Matches writecommand(0xE0); or writecommand(0XE1);
        # .* -> Matches anything else on that line (like //Set Gamma)
        new_block = re.sub(r"(?<!// )writecommand\(0[xX][eE][01]\);.*", 
                           lambda m: f"// {m.group(0)}", 
                           block)
        
        return new_block

    # re.DOTALL allows the search to span multiple lines across the file
    new_content = re.sub(pattern, replace_gamma, content, flags=re.DOTALL)

    if new_content != content:
        with open(lib_path, "w") as f:
            f.write(new_content)
        print(f"--- [FIX] Gamma Patch: Successfully commented 0XE0 and 0XE1 in {lib_path}")
    else:
        # If this prints, it means the pattern didn't find the text or it's already commented
        print("--- [FIX] Gamma Patch: No changes made. Check if block name or hex format is correct.")

# Run the patch once during script execution
apply_gamma_patch()