#ifndef TRANSLATIONS_H
#define TRANSLATIONS_H

// Language support
enum Language { LANG_EN = 0, LANG_ES = 1, LANG_DE = 2, LANG_FR = 3, LANG_TR = 4, LANG_SV = 5, LANG_IT = 6 };

struct LocalizedStrings {
  const char* temp_placeholder;
  const char* feels_like_temp;
  const char* seven_day_forecast;
  const char* hourly_forecast;
  const char* today;
  const char* now;
  const char* am;
  const char* pm;
  const char* noon;
  const char* invalid_hour;
  const char* brightness;
  const char* rotation;
  const char* location;
  const char* use_fahrenheit;
  const char* use_24hr;
  const char* save;
  const char* cancel;
  const char* close;
  const char* location_btn;
  const char* reset_wifi;
  const char* reset;
  const char* change_location;
  const char* aura_settings;
  const char* city;
  const char* search_results;
  const char* city_placeholder;
  const char* wifi_config;
  const char* reset_confirmation;
  const char* language_label;
  const char* weekdays[7];
  const char* use_night_mode;
};

#define DEFAULT_CAPTIVE_SSID "Aura"

static const LocalizedStrings strings_en = {
  "--°C", "Feels Like", "SEVEN DAY FORECAST", "HOURLY FORECAST",
  "Today", "Now", "am", "pm", "Noon", "Invalid hour",
  "Brightness:", "Rotation:", "Location:", "Use °F:", "24hr:",
  "Save", "Cancel", "Close", "Location", "Reset Wi-Fi",
  "Reset", "Change Location", "Aura Settings",
  "City:", "Search Results", "e.g. London",
  "Wi-Fi Configuration:\n\n Please connect your phone or laptop to the temporary Wi-Fi access point " DEFAULT_CAPTIVE_SSID " to configure.\n\n If you don't see a configuration screen after connecting, visit\nhttp://192.168.4.1\nin your web browser.",
  "Are you sure you want to reset Wi-Fi credentials?\n\nYou'll need to reconnect to the Wifi SSID " DEFAULT_CAPTIVE_SSID " with your phone or browser to reconfigure Wi-Fi credentials.",
  "Language:",
  {"Sun", "Mon", "Tues", "Wed", "Thurs", "Fri", "Sat"},
  "Dim screen at night"
};

static const LocalizedStrings strings_es = {
  "--°C", "Sensación", "PRONÓSTICO 7 DÍAS", "PRONÓSTICO POR HORAS",
  "Hoy", "Ahora", "am", "pm", "Mediodía", "Hora inválida",
  "Brillo:", "Rotación:", "Ubicación:", "Usar °F:", "24h:",
  "Guardar", "Cancelar", "Cerrar", "Ubicación", "Wi-Fi",
  "Restablecer", "Cambiar Ubicación", "Configuración Aura",
  "Ciudad:", "Resultados de Búsqueda", "ej. Madrid",
  "Configuración Wi-Fi:\n Conecte su teléfono o portátil al punto de acceso Wi-Fi temporal\n"
  DEFAULT_CAPTIVE_SSID
  " para configurar.\n Si no ve una pantalla de configuración después de conectarse, visite\nhttp://192.168.4.1\nen su navegador.",
  "¿Está seguro de que desea restablecer las credenciales Wi-Fi?\n Deberá reconectarse al SSID " DEFAULT_CAPTIVE_SSID
  " con su teléfono o navegador para reconfigurar las credenciales Wi-Fi.",
  "Idioma:",
  {"Dom", "Lun", "Mar", "Mié", "Jue", "Vie", "Sáb"},
  "Pantalla noche"
};

static const LocalizedStrings strings_de = {
  "--°C", "Gefühlt", "7-TAGE VORHERSAGE", "STÜNDLICHE VORHERSAGE",
  "Heute", "Jetzt", "", "", "Mittag", "Ungültige Stunde",
  "Helligkeit:", "Rotation:", "Standort:", "°F:", "24h:",
  "Speichern", "Abbrechen", "Schließen", "Standort", "Wi-Fi",
  "Zurücksetzen", "Standort ändern", "Aura Einstellungen",
  "Stadt:", "Suchergebnisse", "z.B. Berlin",
  "Wi-Fi Konfiguration:\n Verbinden Sie Ihr Telefon oder Laptop mit dem temporären Wi-Fi Zugangspunkt "
  DEFAULT_CAPTIVE_SSID
  " zum Konfigurieren.\n Wenn Sie keinen Konfigurationsbildschirm sehen, besuchen Sie\nhttp://192.168.4.1\nin Ihrem Browser.",
  "Sind Sie sicher, dass Sie die Wi-Fi Zugangsdaten zurücksetzen möchten?\n Sie müssen sich erneut mit der SSID " DEFAULT_CAPTIVE_SSID
  " verbinden, um die Wi-Fi Zugangsdaten neu zu konfigurieren.",
  "Sprache:",
  {"So", "Mo", "Di", "Mi", "Do", "Fr", "Sa"},
  "Nacht-Dimmen"
};

static const LocalizedStrings strings_fr = {
  "--°C", "Ressenti", "PRÉVISIONS 7 JOURS", "PRÉVISIONS HORAIRES",
  "Aujourd'hui", "Maintenant", "", "", "Midi", "Heure invalide",
  "Luminosité:", "Rotation:",   "Lieu:", "Utiliser °F:", "24h:",
  "Sauvegarder", "Annuler", "Fermer", "Lieu", "Wi-Fi",
  "Réinitialiser", "Changer de lieu", "Paramètres Aura",
  "Ville:", "Résultats de recherche", "ex. Paris",
  "Wi-Fi Configuration: Connectez votre téléphone ou ordinateur portable au point d'accès Wi-Fi temporaire " DEFAULT_CAPTIVE_SSID " pour configurer. Si vous ne voyez pas d'écran de configuration après connexion, visitez\nhttp://192.168.4.1\ndans votre navigateur.",
  "Êtes-vous sûr de vouloir réinitialiser les identifiants Wi-Fi?\n Vous devrez vous reconnecter au SSID " DEFAULT_CAPTIVE_SSID
  " avec votre téléphone ou navigateur pour reconfigurer les identifiants Wi-Fi.",
  "Langue:",
  {"Dim", "Lun", "Mar", "Mer", "Jeu", "Ven", "Sam"},
  "Mode nuit:"
};

static const LocalizedStrings strings_tr = {
  "--°C", "Hissedilen", "YEDI GÜNLÜK TAHMIN", "SAATLIK TAHMIN",
  "Bugün", "Simdi", "öö", "ös", "Öğle", "Geçersiz saat",
  "Parlaklik:", "Rotasyon:", "Konum:", "°F Kullan:", "24 Saat:",
  "Kaydet", "İptal", "Kapat", "Konum", "Wi-Fi Sifirla",
  "Sifirla", "Konumu Değiştir", "Aura Ayarlari",
  "Şehir:", "Arama Sonuçları", "örn. Londra",
  "Wi-Fi Yapilandirmasi:\n Lütfen telefonunuzu veya bilgisayarinizi geçici Wi-Fi erişim noktasina bağlayin "
  DEFAULT_CAPTIVE_SSID
  " yapilandirmak için.\n Bağlandiktan sonra bir yapilandirma ekrani görmezseniz, web tarayicinizda\nhttp://192.168.4.1\nadresine gidin.",
  "Wi-Fi kimlik bilgilerini sifirlamak istediğinizden emin misiniz?\n Wi-Fi kimlik bilgilerini yeniden yapilandirmak için telefonunuz veya tarayiciniz ile " DEFAULT_CAPTIVE_SSID
  " SSID'sine tekrar bağlanmaniz gerekecek.",
  "Dil:",
  {"Paz", "Pzt", "Sal", "Çar", "Per", "Cum", "Cmt"},
  "Gece kısık"
};

static const LocalizedStrings strings_sv = {
  "--°C", "Känns som", "7-DAGARS PROGNOS", "TIMPROGNOS",
  "Idag", "Nu", "", "", "Middag", "Ogiltig timme",
  "Ljusstyrka:", "Rotation:", "Plats:", "Använd °F:", "24h:",
  "Spara", "Avbryt", "Stäng", "Plats", "Aterställ Wi-Fi",
  "Aterställ", "Andra plats", "Aura-inställningar",
  "Stad:", "Sökresultat", "t.ex. Stockholm",
  "Wi-Fi-konfiguration:\n Anslut din telefon eller laptop till den tillfälliga Wi-Fi- atkomstpunkten "
  DEFAULT_CAPTIVE_SSID
  " för att konfigurera.\n Om du inte ser en konfigurationsskärm efter anslutning, besök\nhttp://192.168.4.1\ni din webbläsare.",
  "Ar du säker pa att du vill aterställa Wi-Fi- autentiseringsuppgifter?\n Du maste ateransluta till SSID " DEFAULT_CAPTIVE_SSID
  " med din telefon eller webbläsare för att omkonfigurera Wi-Fi- autentiseringsuppgifter.",
  "Sprak:",
  {"Sön", "Man", "Tis", "Ons", "Tor", "Fre", "Lör"},
  "Nattdämpning"
};

static const LocalizedStrings strings_it = {
  "--°C", "Percepita", "PREVISIONI A 7 GIORNI", "PREVISIONI ORARIE",
  "Oggi", "Ora", "am", "pm", "Mezzog.", "Ora non valida",
  "Luminosità:", "Rotazione:", "Posizione:", "Utilizzo °F:", "24hr:",
  "Salva", "Cancellare", "Close", "Posizione", "Resetta Wi-Fi",
  "Reset", "Cambia posizione", "Impostazioni aura",
  "Città:", "Risultati di ricerca", "e.s. Londra",
  "Configurazione Wi-Fi:\n Per favore collega il tuo smartphone o laptop al Wi-Fi temporaneo\n "
  DEFAULT_CAPTIVE_SSID
  " per configurare la rete.\n Se non vedi la  Schermata di configurazione  dopo il collegamento, visita\nhttp://192.168.4.1\nsul tuo web browser.",
  "Sei sicuro di voler ripristinare "
  "le credenzili Wi-Fi ?\n Dovrai riconnetterti al WiFi con SSID " DEFAULT_CAPTIVE_SSID
  "con il tuo telefono o browser a "
  "riconfigurare le credenziali Wi-Fi.",
  "Lingua:",
  {"Dom", "Lun", "Mar", "Mer", "Gio", "Ven", "Sab"},
  "Schermo notte"
};

static const LocalizedStrings* get_strings(Language current_language) {
  switch (current_language) {
    case LANG_ES: return &strings_es;
    case LANG_DE: return &strings_de;
    case LANG_FR: return &strings_fr;
    case LANG_TR: return &strings_tr;
    case LANG_SV: return &strings_sv;
    case LANG_IT: return &strings_it;
    default: return &strings_en;
  }
}

#endif // TRANSLATIONS_H