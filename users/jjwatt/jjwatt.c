#include "jjwatt.h"

#ifdef LEADER_ENABLE
LEADER_EXTERNS();
#endif

void matrix_scan_user(void) {
  #ifdef LEADER_ENABLE
  LEADER_DICTIONARY() {
    leading = false;
    leader_end();

    SEQ_ONE_KEY(KC_C) {
      // Normal Copy
      SEND_STRING(SS_LCTRL("c"));
    }
    SEQ_ONE_KEY(KC_V) {
      // Normal Paste
      SEND_STRING(SS_LCTRL("v"));
    }
  }
  #endif
}

#endif
