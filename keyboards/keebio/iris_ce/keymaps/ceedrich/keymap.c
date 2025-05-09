// Copyright 2023 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_layers {
     _BASE,
     _LAYER1,
     _SYMBOL,
     _MEDIA,
     _GAMING,
     _FUNCTION
};

enum custom_keycodes {
    FR_EGRV = SAFE_RANGE,
    FR_AGRV,
};

// const uint16_t PROGMEM enter_combo[] = {KC_I, KC_O, COMBO_END}
// const uint16_t PROGMEM backspace_combo[] = {KC_U, KC_I, COMBO_END}

// Home Row Mods (HRM)
// layer0
#define HRM_A LGUI_T(KC_A)  // A acts as GUI (Cmd/Win) when held
#define HRM_S LALT_T(KC_S)  // S acts as Alt when held
#define HRM_D LSFT_T(KC_D)  // D acts as Shift when held
#define HRM_F LCTL_T(KC_F)  // F acts as Ctrl when held
                            //
#define HRM_J RCTL_T(KC_J)  // J acts as Ctrl when held
#define HRM_K RSFT_T(KC_K)  // K acts as Shift when held
#define HRM_L RALT_T(KC_L)  // L acts as Alt when held
#define HRM_SCLN RGUI_T(KC_SCLN)  // ; acts as GUI (Cmd/Win) when held
// layer1
#define HRM_4 LALT_T(KC_4)  // S acts as Alt when held
#define HRM_5 LSFT_T(KC_5)  // D acts as Shift when held
#define HRM_6 LCTL_T(KC_6)  // F acts as Ctrl when held

#define HRM_DOWN RCTL_T(KC_DOWN)  // J acts as Ctrl when held
#define HRM_UP RSFT_T(KC_UP)  // K acts as Shift when held
#define HRM_RGHT RALT_T(KC_RGHT)  // L acts as Alt when held

// symbol layer
#define HRM_LBRC RCTL_T(KC_LBRC)
#define HRM_RBRC RSFT_T(KC_RBRC)
#define HRM_LCBR RALT_T(KC_LCBR)
#define HRM_RCBR RGUI_T(KC_RCBR)

// Layer Switches:
#define LSW_SPC LT(_LAYER1, KC_SPC)

// other language codes
#define DEAD_UML ALGR(S(KC_QUOT))
#define DEAD_GRV ALGR(KC_GRV)
#define DEAD_EGU ALGR(KC_QUOT)

#define FR_CEDI ALGR(KC_COMM)
#define FR_EEGU ALGR(KC_E)

#define DE_AUML ALGR(KC_Q)
#define DE_UUML ALGR(KC_Y)
#define DE_OUML ALGR(KC_P)



  // [_SYMBOL] = LAYOUT(
  // //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
  //    _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  // //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
  //    _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  // //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
  //    _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  // //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
  //    _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  // //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
  //                                   _______, _______, _______,                   _______, _______, _______
  //                               // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  // ),




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Z,    KC_U,    KC_I,    KC_O,    KC_P,    KC_EQL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_ESC,  HRM_A,   HRM_S,   HRM_D,   HRM_F,   KC_G,                               KC_H,    HRM_J,   HRM_K,   HRM_L,   HRM_SCLN,KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX, KC_Y,    KC_X,    KC_C,    KC_V,    KC_B,    DF(_GAMING),      XXXXXXX, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    CW_TOGG,MO(_MEDIA),MO(_SYMBOL),              LSW_SPC, XXXXXXX, XXXXXXX
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_LAYER1] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, KC_F1,   KC_F2,   KC_F4,   KC_F5,   KC_F6,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_7,    KC_8   , KC_9   , _______,                            _______, KC_BSPC, KC_ENT,  KC_DEL,  _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, HRM_4,   HRM_5,   HRM_6,   _______,                            KC_LEFT, HRM_DOWN,HRM_UP,  HRM_RGHT,_______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_1   , KC_2   , KC_3   , _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_0,    _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_SYMBOL] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     DEAD_GRV,FR_CEDI, FR_AGRV, FR_EGRV, FR_EEGU, _______,                            _______, KC_LPRN, KC_RPRN, KC_LT,   KC_GT,   _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     DEAD_EGU,DEAD_UML,DE_AUML, DE_UUML, DE_OUML, _______,                            KC_UNDS,HRM_LBRC,HRM_RBRC,HRM_LCBR,HRM_RCBR, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),


  [_MEDIA] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, MS_BTN2, _______, MS_BTN1, _______,                            MS_LEFT, MS_DOWN, MS_UP,   MS_RGHT, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, MS_WHLD, MS_WHLU, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_GAMING] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Z,    KC_U,    KC_I,    KC_O,    KC_P,    KC_EQL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_Y,    KC_X,    KC_C,    KC_V,    KC_B,    DF(_BASE),        XXXXXXX, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                             MO(_FUNCTION),  KC_SPC,  XXXXXXX,                    KC_SPC,  XXXXXXX, XXXXXXX
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_FUNCTION] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case FR_EGRV:
                tap_code16(ALGR(KC_GRV));
                tap_code(KC_E);
                return false;
            case FR_AGRV:
                tap_code16(ALGR(KC_GRV));
                tap_code(KC_A);
                return false;
        }
    }

    return true;
};
