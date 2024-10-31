// SPDX-License-Identifier: MIT
// Copyright 2022 NXP

#ifndef _LVGL_IMAGES_INTERNAL_H_
#define _LVGL_IMAGES_INTERNAL_H_

//
// Only include this file in the custom.c for running on device
//

lv_img_dsc_t _audio_player_background_1280x720 = {
    .header.always_zero = 0,
    .header.w           = 1280,
    .header.h           = 720,
    .data_size          = 921600 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _audio_player_hand_holder_180x200 = {
    .header.always_zero = 0,
    .header.w           = 180,
    .header.h           = 200,
    .data_size          = 36000 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR_CHROMA_KEYED,
};

lv_img_dsc_t _audio_player_mic_off_70x112 = {
    .header.always_zero = 0,
    .header.w           = 70,
    .header.h           = 112,
    .data_size          = 7840 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _audio_player_next_140x214 = {
    .header.always_zero = 0,
    .header.w           = 140,
    .header.h           = 214,
    .data_size          = 29960 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _audio_player_pause_170x190 = {
    .header.always_zero = 0,
    .header.w           = 170,
    .header.h           = 190,
    .data_size          = 32300 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _audio_player_play_170x190 = {
    .header.always_zero = 0,
    .header.w           = 170,
    .header.h           = 190,
    .data_size          = 32300 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _audio_player_previous_140x214 = {
    .header.always_zero = 0,
    .header.w           = 140,
    .header.h           = 214,
    .data_size          = 29960 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _audio_player_volume_down_144x130 = {
    .header.always_zero = 0,
    .header.w           = 144,
    .header.h           = 130,
    .data_size          = 18720 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _audio_player_volume_up_144x130 = {
    .header.always_zero = 0,
    .header.w           = 144,
    .header.h           = 130,
    .data_size          = 18720 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _auido_player_mic_on_70x112 = {
    .header.always_zero = 0,
    .header.w           = 70,
    .header.h           = 112,
    .data_size          = 7840 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _back_85x70 = {
    .header.always_zero = 0,
    .header.w           = 85,
    .header.h           = 70,
    .data_size          = 5950 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _button_green_alpha_210x110 = {
    .header.always_zero = 0,
    .header.w           = 210,
    .header.h           = 110,
    .data_size          = 23100 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR_ALPHA,
};

lv_img_dsc_t _button_red_alpha_210x110 = {
    .header.always_zero = 0,
    .header.w           = 210,
    .header.h           = 110,
    .data_size          = 23100 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR_ALPHA,
};

lv_img_dsc_t _face_blue_96x93 = {
    .header.always_zero = 0,
    .header.w           = 96,
    .header.h           = 93,
    .data_size          = 8928 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _face_green_96x93 = {
    .header.always_zero = 0,
    .header.w           = 96,
    .header.h           = 93,
    .data_size          = 8928 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _face_red_96x93 = {
    .header.always_zero = 0,
    .header.w           = 96,
    .header.h           = 93,
    .data_size          = 8928 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _help_100x100 = {
    .header.always_zero = 0,
    .header.w           = 100,
    .header.h           = 100,
    .data_size          = 10000 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _home_85x70 = {
    .header.always_zero = 0,
    .header.w           = 85,
    .header.h           = 70,
    .data_size          = 5950 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _main_audio_player_160x160 = {
    .header.always_zero = 0,
    .header.w           = 160,
    .header.h           = 160,
    .data_size          = 25600 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _main_background_1280x630 = {
    .header.always_zero = 0,
    .header.w           = 1280,
    .header.h           = 630,
    .data_size          = 806400 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _main_background_bottom_1280x90 = {
    .header.always_zero = 0,
    .header.w           = 1280,
    .header.h           = 90,
    .data_size          = 115200 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _main_mic_off_70x112 = {
    .header.always_zero = 0,
    .header.w           = 70,
    .header.h           = 112,
    .data_size          = 7840 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _main_mic_on_70x112 = {
    .header.always_zero = 0,
    .header.w           = 70,
    .header.h           = 112,
    .data_size          = 7840 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _main_security_160x160 = {
    .header.always_zero = 0,
    .header.w           = 160,
    .header.h           = 160,
    .data_size          = 25600 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _main_temp_humidity_34x128 = {
    .header.always_zero = 0,
    .header.w           = 34,
    .header.h           = 128,
    .data_size          = 4352 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _main_thermostat_160x160 = {
    .header.always_zero = 0,
    .header.w           = 160,
    .header.h           = 160,
    .data_size          = 25600 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _other_background_bottom_1280x90 = {
    .header.always_zero = 0,
    .header.w           = 1280,
    .header.h           = 90,
    .data_size          = 115200 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _security_armed_324x278 = {
    .header.always_zero = 0,
    .header.w           = 324,
    .header.h           = 278,
    .data_size          = 90072 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _security_arm_270x260 = {
    .header.always_zero = 0,
    .header.w           = 270,
    .header.h           = 260,
    .data_size          = 70200 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _security_back_door_locked_212x112 = {
    .header.always_zero = 0,
    .header.w           = 212,
    .header.h           = 112,
    .data_size          = 23744 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _security_back_door_unlocked_212x112 = {
    .header.always_zero = 0,
    .header.w           = 212,
    .header.h           = 112,
    .data_size          = 23744 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _security_background_bottom_1280x90 = {
    .header.always_zero = 0,
    .header.w           = 1280,
    .header.h           = 90,
    .data_size          = 115200 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _security_disarmed_324x278 = {
    .header.always_zero = 0,
    .header.w           = 324,
    .header.h           = 278,
    .data_size          = 90072 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _security_facereg_keypad_frame_575x490 = {
    .header.always_zero = 0,
    .header.w           = 575,
    .header.h           = 490,
    .data_size          = 281750 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _security_front_door_locked_212x112 = {
    .header.always_zero = 0,
    .header.w           = 212,
    .header.h           = 112,
    .data_size          = 23744 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _security_front_door_unlocked_212x112 = {
    .header.always_zero = 0,
    .header.w           = 212,
    .header.h           = 112,
    .data_size          = 23744 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _security_garage_door_locked_212x112 = {
    .header.always_zero = 0,
    .header.w           = 212,
    .header.h           = 112,
    .data_size          = 23744 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _security_garage_door_unlocked_212x112 = {
    .header.always_zero = 0,
    .header.w           = 212,
    .header.h           = 112,
    .data_size          = 23744 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};


lv_img_dsc_t _security_keypad_button_alpha_118x75 = {
    .header.always_zero = 0,
    .header.w           = 118,
    .header.h           = 75,
    .data_size          = 8850 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR_ALPHA,
};

lv_img_dsc_t _security_keypad_frame_601x536 = {
    .header.always_zero = 0,
    .header.w           = 601,
    .header.h           = 536,
    .data_size          = 322136 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _security_pin_121x121 = {
    .header.always_zero = 0,
    .header.w           = 121,
    .header.h           = 121,
    .data_size          = 14641 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _security_timer_green_301x302 = {
    .header.always_zero = 0,
    .header.w           = 301,
    .header.h           = 302,
    .data_size          = 90902 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _security_timer_red_301x302 = {
    .header.always_zero = 0,
    .header.w           = 301,
    .header.h           = 302,
    .data_size          = 90902 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _security_user_setting_128x128 = {
    .header.always_zero = 0,
    .header.w           = 128,
    .header.h           = 128,
    .data_size          = 16384 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _thermostat_add_121x121 = {
    .header.always_zero = 0,
    .header.w           = 121,
    .header.h           = 121,
    .data_size          = 14641 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _thermostat_background_bottom_1280x90 = {
    .header.always_zero = 0,
    .header.w           = 1280,
    .header.h           = 90,
    .data_size          = 115200 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _thermostat_delete_121x121 = {
    .header.always_zero = 0,
    .header.w           = 121,
    .header.h           = 121,
    .data_size          = 14641 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _thermostat_edit_121x121 = {
    .header.always_zero = 0,
    .header.w           = 121,
    .header.h           = 121,
    .data_size          = 14641 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _thermostat_fan_auto_off_102x92 = {
    .header.always_zero = 0,
    .header.w           = 102,
    .header.h           = 92,
    .data_size          = 9384 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _thermostat_fan_auto_on_102x92 = {
    .header.always_zero = 0,
    .header.w           = 102,
    .header.h           = 92,
    .data_size          = 9384 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _thermostat_fan_high_off_102x84 = {
    .header.always_zero = 0,
    .header.w           = 102,
    .header.h           = 84,
    .data_size          = 8568 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _thermostat_fan_high_on_102x84 = {
    .header.always_zero = 0,
    .header.w           = 102,
    .header.h           = 84,
    .data_size          = 8568 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _thermostat_fan_low_off_102x84 = {
    .header.always_zero = 0,
    .header.w           = 102,
    .header.h           = 84,
    .data_size          = 8568 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _thermostat_fan_low_on_102x84 = {
    .header.always_zero = 0,
    .header.w           = 102,
    .header.h           = 84,
    .data_size          = 8568 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _thermostat_fan_mid_off_102x84 = {
    .header.always_zero = 0,
    .header.w           = 102,
    .header.h           = 84,
    .data_size          = 8568 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _thermostat_fan_mid_on_102x84 = {
    .header.always_zero = 0,
    .header.w           = 102,
    .header.h           = 84,
    .data_size          = 8568 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _thermostat_fan_off_102x92 = {
    .header.always_zero = 0,
    .header.w           = 102,
    .header.h           = 92,
    .data_size          = 9384 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _thermostat_fan_on_102x92 = {
    .header.always_zero = 0,
    .header.w           = 102,
    .header.h           = 92,
    .data_size          = 9384 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _thermostat_frame_312x310 = {
    .header.always_zero = 0,
    .header.w           = 312,
    .header.h           = 310,
    .data_size          = 96720 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _thermostat_mic_off_50x80 = {
    .header.always_zero = 0,
    .header.w           = 50,
    .header.h           = 80,
    .data_size          = 4000 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _thermostat_mic_on_50x80 = {
    .header.always_zero = 0,
    .header.w           = 50,
    .header.h           = 80,
    .data_size          = 4000 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _thermostat_mode_auto_off_102x84 = {
    .header.always_zero = 0,
    .header.w           = 102,
    .header.h           = 84,
    .data_size          = 8568 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _thermostat_mode_auto_on_102x84 = {
    .header.always_zero = 0,
    .header.w           = 102,
    .header.h           = 84,
    .data_size          = 8568 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _thermostat_mode_cool_off_102x92 = {
    .header.always_zero = 0,
    .header.w           = 102,
    .header.h           = 92,
    .data_size          = 9384 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _thermostat_mode_cool_on_102x92 = {
    .header.always_zero = 0,
    .header.w           = 102,
    .header.h           = 92,
    .data_size          = 9384 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _thermostat_mode_heat_off_102x92 = {
    .header.always_zero = 0,
    .header.w           = 102,
    .header.h           = 92,
    .data_size          = 9384 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _thermostat_mode_heat_on_102x92 = {
    .header.always_zero = 0,
    .header.w           = 102,
    .header.h           = 92,
    .data_size          = 9384 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _thermostat_off_128x128 = {
    .header.always_zero = 0,
    .header.w           = 128,
    .header.h           = 128,
    .data_size          = 16384 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _thermostat_on_128x128 = {
    .header.always_zero = 0,
    .header.w           = 128,
    .header.h           = 128,
    .data_size          = 16384 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};

lv_img_dsc_t _user_setting_128x128 = {
    .header.always_zero = 0,
    .header.w           = 128,
    .header.h           = 128,
    .data_size          = 16384 * LV_COLOR_SIZE / 8,
    .header.cf          = LV_IMG_CF_TRUE_COLOR,
};
#endif /* _LVGL_IMAGES_INTERNAL_H_ */
