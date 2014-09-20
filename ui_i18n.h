#ifdef STR
  #error "STR is already defined"
#endif
#ifdef msgid
  #error "msgid is already defined"
#endif
#ifdef msgstr
  #error "msgstr is already defined"
#endif

#define STR(x) { .str = (uint8_t*)x, .length = sizeof(x) - 1 }
#define msgid(x) [_LANG_ID][STR_##x]=
#define msgstr(x) STR(x),

STRING strings[][STRS_MAX+1] = {

//"BULGARIAN" "Български"
#define _LANG_ID LANG_BG
#include "langs/bg.h"
#undef _LANG_ID

//"GERMAN" "Deutsch"
#define _LANG_ID LANG_DE
#include "langs/de.h"
#undef _LANG_ID

//"ENGLISH" "English"
#define _LANG_ID LANG_EN
#include "langs/en.h"
#undef _LANG_ID

//"SPANISH" "Spanish"
#define _LANG_ID LANG_ES
#include "langs/es.h"
#undef _LANG_ID

//"FRENCH" "French"
#define _LANG_ID LANG_FR
#include "langs/fr.h"
#undef _LANG_ID

//"HINDI" "Hindi"
#define _LANG_ID LANG_HI
#include "langs/hi.h"
#undef _LANG_ID

//"JAPANESE" "日本語"
#define _LANG_ID LANG_JA
#include "langs/ja.h"
#undef _LANG_ID

//"ITALIAN" "Italiano"
#define _LANG_ID LANG_IT
#include "langs/it.h"
#undef _LANG_ID

//"LATVIAN" "Latviešu"
#define _LANG_ID LANG_LV
#include "langs/lv.h"
#undef _LANG_ID

//"DUTCH" "Nederlands"
#define _LANG_ID LANG_NL
#include "langs/nl.h"
#undef _LANG_ID

//"NORWEGIAN" "Norsk"
#define _LANG_ID LANG_NO
#include "langs/no.h"
#undef _LANG_ID

//"POLISH" "Polski"
#define _LANG_ID LANG_PL
#include "langs/pl.h"
#undef _LANG_ID

//"ROMANIAN" "Română"
#define _LANG_ID LANG_RO
#include "langs/ro.h"
#undef _LANG_ID

//"RUSSIAN" "Русский"
#define _LANG_ID LANG_RU
#include "langs/ru.h"
#undef _LANG_ID

//"TURKISH" "Türk"
#define _LANG_ID LANG_TR
#include "langs/tr.h"
#undef _LANG_ID

//"UKRAINIAN" "Українська"
#define _LANG_ID LANG_UA
#include "langs/ua.h"
#undef _LANG_ID

//"SIMPLIFIED CHINESE" "简体中文"
#define _LANG_ID LANG_CN
#include "langs/cn.h"
#undef _LANG_ID

//"TRADITIONAL CHINESE" "繁體中文"
#define _LANG_ID LANG_TW
#include "langs/tw.h"
#undef _LANG_ID

};

#undef msgstr
#undef msgid
#undef STR
