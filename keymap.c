/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H


// Dizave Keycodes
enum my_keycodes {
  DZ_PARA = QK_KB_0,   
  DZ_SEC,    // section symbol
  DZ_SCAP,   // cross platform screen cap
  WLEFT,     // navigate one word left 
  WRIGHT,    // navigate one word right
  WBSPC,     // backsepace one word
  WDEL,      // delete word to the right
  DZ_NMSC,   // -NMSC-
  DZ_NMCA,   // -NMCA-
  DZ_NM,     // N.M.
  DZ_NMSA,   // NMSA 1978, 
  DZ_NMRA,   // Rule NMRA 
  DZ_RP,     // [RP ]
  DZ_BIC,    // [BIC ]
  DZ_AB,     // [AB ]
  DZ_CLSE,   // close window
  DZ_F3D,    // F.3d
  DZ_F2D,    // F.2d
  DZ_P3D,    // P.3d
  DZ_P2D,    // P.2d
  DZ_USC,    // U.S.C. §
  DZ_CFR,    // C.F.R. §
  DZ_NM2,    // New Mexico
  DZ_F4,     // F.4th
  DZ_US,     // U.S. 
  DZ_SEE,    // See
  DZ_SID,    // See id. 
  DZ_SEEG,   // See, e.g.
  DZ_SALSO,  // See also
  DZ_ID,     // Id.
  DZ_ID2,    // id.
  SELWORD,   // select word function
  DZ_VDRT,   // switch virtual desktops - right
  DZ_VDLT,
  DZ_TEST    // have a keycode sitting around for development testing
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3_ex2(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T, KC_T,         KC_T,     KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G, KC_T,         KC_T,     KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, TL_LOWR,  KC_SPC,     KC_ENT, TL_UPPR, KC_RALT
                                      //`--------------------------'  `--------------------------'

  ),

  [1] = LAYOUT_split_3x6_3_ex2(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5, _______,_______,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,_______,_______,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x6_3_ex2(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,_______,_______,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,_______,_______,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,  KC_GRV,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT_split_3x6_3_ex2(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,_______,_______,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,_______,_______,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  )
};


#ifdef LEADER_ENABLE

void leader_start_user(void) {
    // Do something when the leader key is pressed
}

void leader_end_user(void) {
    if (leader_sequence_one_key(KC_A)) {
        SEND_STRING("Albuquerque");
    } else if (leader_sequence_two_keys(KC_C, KC_A)) {
        SEND_STRING("Court of Appeals");
    } else if (leader_sequence_two_keys(KC_C, KC_O)) {
        SEND_STRING("(citation omitted)");
    } else if (leader_sequence_two_keys(KC_C, KC_Y)) {
        SEND_STRING("County");
    } else if (leader_sequence_two_keys(KC_D, KC_C)) {
        SEND_STRING("district court");
    } else if (leader_sequence_two_keys(KC_E, KC_A)) {
        SEND_STRING("(emphasis added)");        
    } else if (leader_sequence_two_keys(KC_N, KC_M)) {
        SEND_STRING("New Mexico");
    } else if (leader_sequence_two_keys(KC_P, KC_O)) {
        SEND_STRING("P.O. Box");
    } else if (leader_sequence_two_keys(KC_P, KC_R)) {
        SEND_STRING("Personal Representative");
    } else if (leader_sequence_two_keys(KC_S, KC_A)) {
        SEND_STRING("Special Administrator");
    } else if (leader_sequence_two_keys(KC_S, KC_C)) {
        SEND_STRING("Supreme Court");
    } else if (leader_sequence_three_keys(KC_R, KC_O, KC_G)) {
        SEND_STRING("Interrogatory");
    } else if (leader_sequence_four_keys(KC_R, KC_O, KC_G, KC_S)) {
        SEND_STRING("Interrogatories");
    } else if (leader_sequence_four_keys(KC_B, KC_E, KC_R, KC_N)) {
        SEND_STRING("Bernalillo");
    } else if (leader_sequence_four_keys(KC_N, KC_M, KC_S, KC_C)) {
        SEND_STRING("New Mexico Supreme Court");
    } else if (leader_sequence_four_keys(KC_N, KC_M, KC_C, KC_A)) {
        SEND_STRING("New Mexico Court of Appeals");
    } else if (leader_sequence_five_keys(KC_N, KC_M, KC_P, KC_E, KC_L)) {
        SEND_STRING("New Mexico Probate & Estate Lawyers");
    }
  }

#endif

bool dizave_process_record_user(uint16_t keycode, keyrecord_t *record) 
{
  switch(keycode) {


    case DZ_VDRT:
      if (record->event.pressed) {
        if (true) {
          SEND_STRING(SS_LCTL(SS_TAP(X_RIGHT)));
        } else {
          SEND_STRING(SS_LGUI(SS_LCTL(SS_TAP(X_RIGHT))));
        }
      }
//      break;
      return false;

    case DZ_VDLT:
      if (record->event.pressed) {
        if (true) {
          SEND_STRING(SS_LCTL(SS_TAP(X_LEFT)));
        } else {
          SEND_STRING(SS_LGUI(SS_LCTL(SS_TAP(X_LEFT))));
        }
      }
//      break;
      return false;

    case DZ_CLSE:
      if (record->event.pressed) {
        if (true) {
          SEND_STRING(SS_LGUI("q"));
        } else {
          SEND_STRING(SS_LALT(SS_TAP(X_F4)));
        }
      }
      return false;

    // mac - command shift 4
    // win - gui shift S
    case DZ_SCAP:
      if (true) {
        SEND_STRING(SS_LGUI("$"));
      } else {
        SEND_STRING(SS_LGUI("S"));
      }
      return false;

    case DZ_NMSA:
      if (record->event.pressed) {
        SEND_STRING("NMSA 1978, ");
      }
      return false;

    case DZ_NMRA:
      if (record->event.pressed) {
        SEND_STRING("Rule NMRA "SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT));
      }
      return false;

    case DZ_USC:
      if (record->event.pressed) {
        SEND_STRING("U.S.C. ");
   //     send_unicode_string("§");
      }
      return false;

    case DZ_CFR:
      if (record->event.pressed) {
        SEND_STRING("C.F.R. ");
     //   send_unicode_string("§");
      }
      return false;

    case DZ_RP:
      if (record->event.pressed) {
        if (true) {
          SEND_STRING(SS_LGUI("B")"[RP ]"SS_LGUI("B")" "SS_TAP(X_LEFT)SS_TAP(X_LEFT));
        } else {
          SEND_STRING(SS_LCTL("B")"[RP ]"SS_LCTL("B")" "SS_TAP(X_LEFT)SS_TAP(X_LEFT));
        }
      }
      return false;

    case DZ_BIC:
      if (record->event.pressed) {
        if (true) {
          SEND_STRING(SS_LGUI("B")"[BIC ]"SS_LGUI("B")" "SS_TAP(X_LEFT)SS_TAP(X_LEFT));
        } else {
          SEND_STRING(SS_LCTL("B")"[BIC ]"SS_LCTL("B")" "SS_TAP(X_LEFT)SS_TAP(X_LEFT));
        }
       
      }
      return false;

    case DZ_AB:
      if (record->event.pressed) {
        if (true) {
          SEND_STRING(SS_LGUI("B")"[AB ]"SS_LGUI("B")" "SS_TAP(X_LEFT)SS_TAP(X_LEFT));
        } else {
          SEND_STRING(SS_LCTL("B")"[AB ]"SS_LCTL("B")" "SS_TAP(X_LEFT)SS_TAP(X_LEFT));
        }
      }
      return false;

    case DZ_NM:
      if (record->event.pressed) {
        SEND_STRING("N.M.");
      }
      return false;

    case DZ_NMSC:
      if (record->event.pressed) {
        SEND_STRING("-NMSC-");
      }
      return false;

    case DZ_NMCA:
      if (record->event.pressed) {
        SEND_STRING("-NMCA-");
      }
      return false;

    case DZ_F4:
      if (record->event.pressed) {
        SEND_STRING("F.4th");
      }
      return false;

    case DZ_F3D:
      if (record->event.pressed) {
        SEND_STRING("F.3d");
      }
      return false;

    case DZ_F2D:
      if (record->event.pressed) {
        SEND_STRING("F.2d");
      }
      return false;

    case DZ_US:
      if (record->event.pressed) {
        SEND_STRING("U.S.");
      }
      return false;

    case DZ_P3D:
      if (record->event.pressed) {
        SEND_STRING("P.3d");
      }
      return false;

    case DZ_P2D:
      if (record->event.pressed) {
        SEND_STRING("P.2d");
      }
      return false;

    case DZ_SEE:
      if (record->event.pressed) {
        if (true) {
          SEND_STRING(SS_LGUI("i")"see"SS_LGUI("i")" ");
        } else {
          SEND_STRING(SS_LCTL("i")"see"SS_LCTL("i")" ");
        }
      }
      return false;

    case DZ_SID:
      if (record->event.pressed) {
        if (true) {
          SEND_STRING(SS_LGUI("i")"See id."SS_LGUI("i")" ");
        } else {
          SEND_STRING(SS_LCTL("i")"See id."SS_LCTL("i")" ");
        }
      }
      return false;
    case DZ_SEEG:
      if (record->event.pressed) {
        if (true) {
          SEND_STRING(SS_LGUI("i")"See, e.g."SS_LGUI("i")", ");
        } else {
          SEND_STRING(SS_LCTL("i")"See, e.g."SS_LCTL("i")", ");
        }
      }
      return false;

    case DZ_SALSO:
      if (record->event.pressed) {
        if (true) {
          SEND_STRING(SS_LGUI("i")"See also"SS_LGUI("i")" ");
        } else {
          SEND_STRING(SS_LCTL("i")"See also"SS_LCTL("i")" ");
        }
      }
      return false;

    case DZ_ID:
      if (record->event.pressed) {
        if (true) {
          SEND_STRING(SS_LGUI("i")"Id."SS_LGUI("i")" ");
        } else {
          SEND_STRING(SS_LCTL("i")"Id."SS_LCTL("i")" ");
        }
      }
      return false;


    case DZ_ID2:
      if (record->event.pressed) {
        if (true) {
          SEND_STRING(SS_LGUI("i")"id."SS_LGUI("i")" ");
        } else {
          SEND_STRING(SS_LCTL("i")"id."SS_LCTL("i")" ");
        }
      }
      return false;


      case WLEFT:
      if (record->event.pressed) {
        if (true) {
          SEND_STRING(SS_LALT(SS_TAP(X_LEFT)));
        } else {
          SEND_STRING(SS_LCTL(SS_TAP(X_LEFT)));
        }
      }    
      return false;

      case WRIGHT:
      if (record->event.pressed) {
        if (true) {
          SEND_STRING(SS_LALT(SS_TAP(X_RIGHT)));
        } else {
          SEND_STRING(SS_LCTL(SS_TAP(X_RIGHT)));
        }
      }    
      return false;

      case WBSPC:
      if (record->event.pressed) {
        if (true) {
          SEND_STRING(SS_LALT(SS_TAP(X_BSPC)));
        } else {
          SEND_STRING(SS_LCTL(SS_TAP(X_BSPC)));
        }
      }    
      return false;

      case WDEL:
      if (record->event.pressed) {
        if (true) {
          SEND_STRING(SS_LGUI(SS_TAP(X_DEL)));
        } else {
          SEND_STRING(SS_LCTL(SS_TAP(X_DEL)));
        }
      }    
      return false;

      case DZ_PARA:
      if (record->event.pressed) {
          SEND_STRING(SS_LALT("00B6"));
       // register_unicode(0x00B6);
      }
      return false; 

      case DZ_SEC:
      if (record->event.pressed) {
         SEND_STRING(SS_LALT("00A7"));
//        register_unicode(0x00A7);
      }
      return false; 

  }  // switch


  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {

  switch(keycode) {

    default:
      return dizave_process_record_user(keycode, record);

  }  // switch

  return true;
}

