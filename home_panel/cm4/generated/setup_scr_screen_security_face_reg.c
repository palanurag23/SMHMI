/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_screen_security_face_reg(lv_ui *ui){

	//Write codes screen_security_face_reg
	ui->screen_security_face_reg = lv_obj_create(NULL);
	lv_obj_set_scrollbar_mode(ui->screen_security_face_reg, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_security_face_reg_main_main_default
	static lv_style_t style_screen_security_face_reg_main_main_default;
	if (style_screen_security_face_reg_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_security_face_reg_main_main_default);
	else
		lv_style_init(&style_screen_security_face_reg_main_main_default);
	lv_style_set_bg_color(&style_screen_security_face_reg_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_opa(&style_screen_security_face_reg_main_main_default, 0);
	lv_obj_add_style(ui->screen_security_face_reg, &style_screen_security_face_reg_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_security_face_reg_cont_background
	ui->screen_security_face_reg_cont_background = lv_obj_create(ui->screen_security_face_reg);
	lv_obj_set_pos(ui->screen_security_face_reg_cont_background, 0, 0);
	lv_obj_set_size(ui->screen_security_face_reg_cont_background, 1280, 720);
	lv_obj_set_scrollbar_mode(ui->screen_security_face_reg_cont_background, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_security_face_reg_cont_background_main_main_default
	static lv_style_t style_screen_security_face_reg_cont_background_main_main_default;
	if (style_screen_security_face_reg_cont_background_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_security_face_reg_cont_background_main_main_default);
	else
		lv_style_init(&style_screen_security_face_reg_cont_background_main_main_default);
	lv_style_set_radius(&style_screen_security_face_reg_cont_background_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_security_face_reg_cont_background_main_main_default, lv_color_make(0xfc, 0xfc, 0xfc));
	lv_style_set_bg_grad_color(&style_screen_security_face_reg_cont_background_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_security_face_reg_cont_background_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_security_face_reg_cont_background_main_main_default, 255);
	lv_style_set_shadow_width(&style_screen_security_face_reg_cont_background_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_security_face_reg_cont_background_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_security_face_reg_cont_background_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_security_face_reg_cont_background_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_security_face_reg_cont_background_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_security_face_reg_cont_background_main_main_default, 0);
	lv_style_set_border_color(&style_screen_security_face_reg_cont_background_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_screen_security_face_reg_cont_background_main_main_default, 0);
	lv_style_set_border_opa(&style_screen_security_face_reg_cont_background_main_main_default, 255);
	lv_style_set_pad_left(&style_screen_security_face_reg_cont_background_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_security_face_reg_cont_background_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_security_face_reg_cont_background_main_main_default, 0);
	lv_style_set_pad_bottom(&style_screen_security_face_reg_cont_background_main_main_default, 0);
	lv_obj_add_style(ui->screen_security_face_reg_cont_background, &style_screen_security_face_reg_cont_background_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_security_face_reg_img_background
	ui->screen_security_face_reg_img_background = lv_img_create(ui->screen_security_face_reg_cont_background);
	lv_obj_set_pos(ui->screen_security_face_reg_img_background, 0, 0);
	lv_obj_set_size(ui->screen_security_face_reg_img_background, 1280, 630);
	lv_obj_set_scrollbar_mode(ui->screen_security_face_reg_img_background, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_security_face_reg_img_background_main_main_default
	static lv_style_t style_screen_security_face_reg_img_background_main_main_default;
	if (style_screen_security_face_reg_img_background_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_security_face_reg_img_background_main_main_default);
	else
		lv_style_init(&style_screen_security_face_reg_img_background_main_main_default);
	lv_style_set_img_recolor(&style_screen_security_face_reg_img_background_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_security_face_reg_img_background_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_security_face_reg_img_background_main_main_default, 255);
	lv_obj_add_style(ui->screen_security_face_reg_img_background, &style_screen_security_face_reg_img_background_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_security_face_reg_img_background, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_security_face_reg_img_background,&_main_background_1280x630);
	lv_img_set_pivot(ui->screen_security_face_reg_img_background, 0,0);
	lv_img_set_angle(ui->screen_security_face_reg_img_background, 0);

	//Write codes screen_security_face_reg_img_background_bottom
	ui->screen_security_face_reg_img_background_bottom = lv_img_create(ui->screen_security_face_reg_cont_background);
	lv_obj_set_pos(ui->screen_security_face_reg_img_background_bottom, 0, 630);
	lv_obj_set_size(ui->screen_security_face_reg_img_background_bottom, 1280, 90);
	lv_obj_set_scrollbar_mode(ui->screen_security_face_reg_img_background_bottom, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_security_face_reg_img_background_bottom_main_main_default
	static lv_style_t style_screen_security_face_reg_img_background_bottom_main_main_default;
	if (style_screen_security_face_reg_img_background_bottom_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_security_face_reg_img_background_bottom_main_main_default);
	else
		lv_style_init(&style_screen_security_face_reg_img_background_bottom_main_main_default);
	lv_style_set_img_recolor(&style_screen_security_face_reg_img_background_bottom_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_security_face_reg_img_background_bottom_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_security_face_reg_img_background_bottom_main_main_default, 255);
	lv_obj_add_style(ui->screen_security_face_reg_img_background_bottom, &style_screen_security_face_reg_img_background_bottom_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_security_face_reg_img_background_bottom, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_security_face_reg_img_background_bottom,&_other_background_bottom_1280x90);
	lv_img_set_pivot(ui->screen_security_face_reg_img_background_bottom, 50,50);
	lv_img_set_angle(ui->screen_security_face_reg_img_background_bottom, 0);

	//Write codes screen_security_face_reg_imgbtn_home
	ui->screen_security_face_reg_imgbtn_home = lv_imgbtn_create(ui->screen_security_face_reg_cont_background);
	lv_obj_set_pos(ui->screen_security_face_reg_imgbtn_home, 24, 26);
	lv_obj_set_size(ui->screen_security_face_reg_imgbtn_home, 85, 70);
	lv_obj_set_scrollbar_mode(ui->screen_security_face_reg_imgbtn_home, LV_SCROLLBAR_MODE_OFF);
	lv_imgbtn_set_src(ui->screen_security_face_reg_imgbtn_home, LV_IMGBTN_STATE_RELEASED, NULL, &_home_85x70, NULL);

	//Write codes screen_security_face_reg_imgbtn_back
	ui->screen_security_face_reg_imgbtn_back = lv_imgbtn_create(ui->screen_security_face_reg_cont_background);
	lv_obj_set_pos(ui->screen_security_face_reg_imgbtn_back, 120, 26);
	lv_obj_set_size(ui->screen_security_face_reg_imgbtn_back, 85, 70);
	lv_obj_set_scrollbar_mode(ui->screen_security_face_reg_imgbtn_back, LV_SCROLLBAR_MODE_OFF);
	lv_imgbtn_set_src(ui->screen_security_face_reg_imgbtn_back, LV_IMGBTN_STATE_RELEASED, NULL, &_back_85x70, NULL);

	//Write codes screen_security_face_reg_img_keypad_frame
	ui->screen_security_face_reg_img_keypad_frame = lv_img_create(ui->screen_security_face_reg_cont_background);
	lv_obj_set_pos(ui->screen_security_face_reg_img_keypad_frame, 689, 105);
	lv_obj_set_size(ui->screen_security_face_reg_img_keypad_frame, 575, 490);
	lv_obj_set_scrollbar_mode(ui->screen_security_face_reg_img_keypad_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_security_face_reg_img_keypad_frame_main_main_default
	static lv_style_t style_screen_security_face_reg_img_keypad_frame_main_main_default;
	if (style_screen_security_face_reg_img_keypad_frame_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_security_face_reg_img_keypad_frame_main_main_default);
	else
		lv_style_init(&style_screen_security_face_reg_img_keypad_frame_main_main_default);
	lv_style_set_img_recolor(&style_screen_security_face_reg_img_keypad_frame_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_security_face_reg_img_keypad_frame_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_security_face_reg_img_keypad_frame_main_main_default, 255);
	lv_obj_add_style(ui->screen_security_face_reg_img_keypad_frame, &style_screen_security_face_reg_img_keypad_frame_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_security_face_reg_img_keypad_frame, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_security_face_reg_img_keypad_frame,&_security_facereg_keypad_frame_575x490);
	lv_img_set_pivot(ui->screen_security_face_reg_img_keypad_frame, 50,50);
	lv_img_set_angle(ui->screen_security_face_reg_img_keypad_frame, 0);

	//Write codes screen_security_face_reg_imgbtn_key_1
	ui->screen_security_face_reg_imgbtn_key_1 = lv_imgbtn_create(ui->screen_security_face_reg_cont_background);
	lv_obj_set_pos(ui->screen_security_face_reg_imgbtn_key_1, 743, 160);
	lv_obj_set_size(ui->screen_security_face_reg_imgbtn_key_1, 118, 75);
	lv_obj_set_scrollbar_mode(ui->screen_security_face_reg_imgbtn_key_1, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_security_face_reg_imgbtn_key_1_main_main_default
	static lv_style_t style_screen_security_face_reg_imgbtn_key_1_main_main_default;
	if (style_screen_security_face_reg_imgbtn_key_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_security_face_reg_imgbtn_key_1_main_main_default);
	else
		lv_style_init(&style_screen_security_face_reg_imgbtn_key_1_main_main_default);
	lv_style_set_shadow_width(&style_screen_security_face_reg_imgbtn_key_1_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_security_face_reg_imgbtn_key_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_security_face_reg_imgbtn_key_1_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_security_face_reg_imgbtn_key_1_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_security_face_reg_imgbtn_key_1_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_security_face_reg_imgbtn_key_1_main_main_default, 0);
	lv_style_set_text_color(&style_screen_security_face_reg_imgbtn_key_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_security_face_reg_imgbtn_key_1_main_main_default, &lv_font_montserratMedium_50);
	lv_style_set_text_align(&style_screen_security_face_reg_imgbtn_key_1_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_security_face_reg_imgbtn_key_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_security_face_reg_imgbtn_key_1_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_security_face_reg_imgbtn_key_1_main_main_default, 255);
	lv_obj_add_style(ui->screen_security_face_reg_imgbtn_key_1, &style_screen_security_face_reg_imgbtn_key_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_imgbtn_set_src(ui->screen_security_face_reg_imgbtn_key_1, LV_IMGBTN_STATE_RELEASED, NULL, &_security_keypad_button_alpha_118x75, NULL);
	ui->screen_security_face_reg_imgbtn_key_1_label = lv_label_create(ui->screen_security_face_reg_imgbtn_key_1);
	lv_label_set_text(ui->screen_security_face_reg_imgbtn_key_1_label, "1");
	lv_obj_set_style_pad_all(ui->screen_security_face_reg_imgbtn_key_1, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_security_face_reg_imgbtn_key_1_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_security_face_reg_imgbtn_key_2
	ui->screen_security_face_reg_imgbtn_key_2 = lv_imgbtn_create(ui->screen_security_face_reg_cont_background);
	lv_obj_set_pos(ui->screen_security_face_reg_imgbtn_key_2, 916, 160);
	lv_obj_set_size(ui->screen_security_face_reg_imgbtn_key_2, 118, 75);
	lv_obj_set_scrollbar_mode(ui->screen_security_face_reg_imgbtn_key_2, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_security_face_reg_imgbtn_key_2_main_main_default
	static lv_style_t style_screen_security_face_reg_imgbtn_key_2_main_main_default;
	if (style_screen_security_face_reg_imgbtn_key_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_security_face_reg_imgbtn_key_2_main_main_default);
	else
		lv_style_init(&style_screen_security_face_reg_imgbtn_key_2_main_main_default);
	lv_style_set_shadow_width(&style_screen_security_face_reg_imgbtn_key_2_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_security_face_reg_imgbtn_key_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_security_face_reg_imgbtn_key_2_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_security_face_reg_imgbtn_key_2_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_security_face_reg_imgbtn_key_2_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_security_face_reg_imgbtn_key_2_main_main_default, 0);
	lv_style_set_text_color(&style_screen_security_face_reg_imgbtn_key_2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_security_face_reg_imgbtn_key_2_main_main_default, &lv_font_montserratMedium_50);
	lv_style_set_text_align(&style_screen_security_face_reg_imgbtn_key_2_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_security_face_reg_imgbtn_key_2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_security_face_reg_imgbtn_key_2_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_security_face_reg_imgbtn_key_2_main_main_default, 255);
	lv_obj_add_style(ui->screen_security_face_reg_imgbtn_key_2, &style_screen_security_face_reg_imgbtn_key_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_imgbtn_set_src(ui->screen_security_face_reg_imgbtn_key_2, LV_IMGBTN_STATE_RELEASED, NULL, &_security_keypad_button_alpha_118x75, NULL);
	ui->screen_security_face_reg_imgbtn_key_2_label = lv_label_create(ui->screen_security_face_reg_imgbtn_key_2);
	lv_label_set_text(ui->screen_security_face_reg_imgbtn_key_2_label, "2");
	lv_obj_set_style_pad_all(ui->screen_security_face_reg_imgbtn_key_2, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_security_face_reg_imgbtn_key_2_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_security_face_reg_imgbtn_key_3
	ui->screen_security_face_reg_imgbtn_key_3 = lv_imgbtn_create(ui->screen_security_face_reg_cont_background);
	lv_obj_set_pos(ui->screen_security_face_reg_imgbtn_key_3, 1089, 160);
	lv_obj_set_size(ui->screen_security_face_reg_imgbtn_key_3, 118, 75);
	lv_obj_set_scrollbar_mode(ui->screen_security_face_reg_imgbtn_key_3, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_security_face_reg_imgbtn_key_3_main_main_default
	static lv_style_t style_screen_security_face_reg_imgbtn_key_3_main_main_default;
	if (style_screen_security_face_reg_imgbtn_key_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_security_face_reg_imgbtn_key_3_main_main_default);
	else
		lv_style_init(&style_screen_security_face_reg_imgbtn_key_3_main_main_default);
	lv_style_set_shadow_width(&style_screen_security_face_reg_imgbtn_key_3_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_security_face_reg_imgbtn_key_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_security_face_reg_imgbtn_key_3_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_security_face_reg_imgbtn_key_3_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_security_face_reg_imgbtn_key_3_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_security_face_reg_imgbtn_key_3_main_main_default, 0);
	lv_style_set_text_color(&style_screen_security_face_reg_imgbtn_key_3_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_security_face_reg_imgbtn_key_3_main_main_default, &lv_font_montserratMedium_50);
	lv_style_set_text_align(&style_screen_security_face_reg_imgbtn_key_3_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_security_face_reg_imgbtn_key_3_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_security_face_reg_imgbtn_key_3_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_security_face_reg_imgbtn_key_3_main_main_default, 255);
	lv_obj_add_style(ui->screen_security_face_reg_imgbtn_key_3, &style_screen_security_face_reg_imgbtn_key_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_imgbtn_set_src(ui->screen_security_face_reg_imgbtn_key_3, LV_IMGBTN_STATE_RELEASED, NULL, &_security_keypad_button_alpha_118x75, NULL);
	ui->screen_security_face_reg_imgbtn_key_3_label = lv_label_create(ui->screen_security_face_reg_imgbtn_key_3);
	lv_label_set_text(ui->screen_security_face_reg_imgbtn_key_3_label, "3");
	lv_obj_set_style_pad_all(ui->screen_security_face_reg_imgbtn_key_3, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_security_face_reg_imgbtn_key_3_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_security_face_reg_imgbtn_key_4
	ui->screen_security_face_reg_imgbtn_key_4 = lv_imgbtn_create(ui->screen_security_face_reg_cont_background);
	lv_obj_set_pos(ui->screen_security_face_reg_imgbtn_key_4, 743, 266);
	lv_obj_set_size(ui->screen_security_face_reg_imgbtn_key_4, 118, 75);
	lv_obj_set_scrollbar_mode(ui->screen_security_face_reg_imgbtn_key_4, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_security_face_reg_imgbtn_key_4_main_main_default
	static lv_style_t style_screen_security_face_reg_imgbtn_key_4_main_main_default;
	if (style_screen_security_face_reg_imgbtn_key_4_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_security_face_reg_imgbtn_key_4_main_main_default);
	else
		lv_style_init(&style_screen_security_face_reg_imgbtn_key_4_main_main_default);
	lv_style_set_shadow_width(&style_screen_security_face_reg_imgbtn_key_4_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_security_face_reg_imgbtn_key_4_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_security_face_reg_imgbtn_key_4_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_security_face_reg_imgbtn_key_4_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_security_face_reg_imgbtn_key_4_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_security_face_reg_imgbtn_key_4_main_main_default, 0);
	lv_style_set_text_color(&style_screen_security_face_reg_imgbtn_key_4_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_security_face_reg_imgbtn_key_4_main_main_default, &lv_font_montserratMedium_50);
	lv_style_set_text_align(&style_screen_security_face_reg_imgbtn_key_4_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_security_face_reg_imgbtn_key_4_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_security_face_reg_imgbtn_key_4_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_security_face_reg_imgbtn_key_4_main_main_default, 255);
	lv_obj_add_style(ui->screen_security_face_reg_imgbtn_key_4, &style_screen_security_face_reg_imgbtn_key_4_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_imgbtn_set_src(ui->screen_security_face_reg_imgbtn_key_4, LV_IMGBTN_STATE_RELEASED, NULL, &_security_keypad_button_alpha_118x75, NULL);
	ui->screen_security_face_reg_imgbtn_key_4_label = lv_label_create(ui->screen_security_face_reg_imgbtn_key_4);
	lv_label_set_text(ui->screen_security_face_reg_imgbtn_key_4_label, "4");
	lv_obj_set_style_pad_all(ui->screen_security_face_reg_imgbtn_key_4, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_security_face_reg_imgbtn_key_4_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_security_face_reg_imgbtn_key_5
	ui->screen_security_face_reg_imgbtn_key_5 = lv_imgbtn_create(ui->screen_security_face_reg_cont_background);
	lv_obj_set_pos(ui->screen_security_face_reg_imgbtn_key_5, 916, 266);
	lv_obj_set_size(ui->screen_security_face_reg_imgbtn_key_5, 118, 75);
	lv_obj_set_scrollbar_mode(ui->screen_security_face_reg_imgbtn_key_5, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_security_face_reg_imgbtn_key_5_main_main_default
	static lv_style_t style_screen_security_face_reg_imgbtn_key_5_main_main_default;
	if (style_screen_security_face_reg_imgbtn_key_5_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_security_face_reg_imgbtn_key_5_main_main_default);
	else
		lv_style_init(&style_screen_security_face_reg_imgbtn_key_5_main_main_default);
	lv_style_set_shadow_width(&style_screen_security_face_reg_imgbtn_key_5_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_security_face_reg_imgbtn_key_5_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_security_face_reg_imgbtn_key_5_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_security_face_reg_imgbtn_key_5_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_security_face_reg_imgbtn_key_5_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_security_face_reg_imgbtn_key_5_main_main_default, 0);
	lv_style_set_text_color(&style_screen_security_face_reg_imgbtn_key_5_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_security_face_reg_imgbtn_key_5_main_main_default, &lv_font_montserratMedium_50);
	lv_style_set_text_align(&style_screen_security_face_reg_imgbtn_key_5_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_security_face_reg_imgbtn_key_5_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_security_face_reg_imgbtn_key_5_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_security_face_reg_imgbtn_key_5_main_main_default, 255);
	lv_obj_add_style(ui->screen_security_face_reg_imgbtn_key_5, &style_screen_security_face_reg_imgbtn_key_5_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_imgbtn_set_src(ui->screen_security_face_reg_imgbtn_key_5, LV_IMGBTN_STATE_RELEASED, NULL, &_security_keypad_button_alpha_118x75, NULL);
	ui->screen_security_face_reg_imgbtn_key_5_label = lv_label_create(ui->screen_security_face_reg_imgbtn_key_5);
	lv_label_set_text(ui->screen_security_face_reg_imgbtn_key_5_label, "5");
	lv_obj_set_style_pad_all(ui->screen_security_face_reg_imgbtn_key_5, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_security_face_reg_imgbtn_key_5_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_security_face_reg_imgbtn_key_6
	ui->screen_security_face_reg_imgbtn_key_6 = lv_imgbtn_create(ui->screen_security_face_reg_cont_background);
	lv_obj_set_pos(ui->screen_security_face_reg_imgbtn_key_6, 1089, 266);
	lv_obj_set_size(ui->screen_security_face_reg_imgbtn_key_6, 118, 75);
	lv_obj_set_scrollbar_mode(ui->screen_security_face_reg_imgbtn_key_6, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_security_face_reg_imgbtn_key_6_main_main_default
	static lv_style_t style_screen_security_face_reg_imgbtn_key_6_main_main_default;
	if (style_screen_security_face_reg_imgbtn_key_6_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_security_face_reg_imgbtn_key_6_main_main_default);
	else
		lv_style_init(&style_screen_security_face_reg_imgbtn_key_6_main_main_default);
	lv_style_set_shadow_width(&style_screen_security_face_reg_imgbtn_key_6_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_security_face_reg_imgbtn_key_6_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_security_face_reg_imgbtn_key_6_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_security_face_reg_imgbtn_key_6_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_security_face_reg_imgbtn_key_6_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_security_face_reg_imgbtn_key_6_main_main_default, 0);
	lv_style_set_text_color(&style_screen_security_face_reg_imgbtn_key_6_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_security_face_reg_imgbtn_key_6_main_main_default, &lv_font_montserratMedium_50);
	lv_style_set_text_align(&style_screen_security_face_reg_imgbtn_key_6_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_security_face_reg_imgbtn_key_6_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_security_face_reg_imgbtn_key_6_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_security_face_reg_imgbtn_key_6_main_main_default, 255);
	lv_obj_add_style(ui->screen_security_face_reg_imgbtn_key_6, &style_screen_security_face_reg_imgbtn_key_6_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_imgbtn_set_src(ui->screen_security_face_reg_imgbtn_key_6, LV_IMGBTN_STATE_RELEASED, NULL, &_security_keypad_button_alpha_118x75, NULL);
	ui->screen_security_face_reg_imgbtn_key_6_label = lv_label_create(ui->screen_security_face_reg_imgbtn_key_6);
	lv_label_set_text(ui->screen_security_face_reg_imgbtn_key_6_label, "6");
	lv_obj_set_style_pad_all(ui->screen_security_face_reg_imgbtn_key_6, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_security_face_reg_imgbtn_key_6_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_security_face_reg_imgbtn_key_7
	ui->screen_security_face_reg_imgbtn_key_7 = lv_imgbtn_create(ui->screen_security_face_reg_cont_background);
	lv_obj_set_pos(ui->screen_security_face_reg_imgbtn_key_7, 743, 372);
	lv_obj_set_size(ui->screen_security_face_reg_imgbtn_key_7, 118, 75);
	lv_obj_set_scrollbar_mode(ui->screen_security_face_reg_imgbtn_key_7, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_security_face_reg_imgbtn_key_7_main_main_default
	static lv_style_t style_screen_security_face_reg_imgbtn_key_7_main_main_default;
	if (style_screen_security_face_reg_imgbtn_key_7_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_security_face_reg_imgbtn_key_7_main_main_default);
	else
		lv_style_init(&style_screen_security_face_reg_imgbtn_key_7_main_main_default);
	lv_style_set_shadow_width(&style_screen_security_face_reg_imgbtn_key_7_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_security_face_reg_imgbtn_key_7_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_security_face_reg_imgbtn_key_7_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_security_face_reg_imgbtn_key_7_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_security_face_reg_imgbtn_key_7_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_security_face_reg_imgbtn_key_7_main_main_default, 0);
	lv_style_set_text_color(&style_screen_security_face_reg_imgbtn_key_7_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_security_face_reg_imgbtn_key_7_main_main_default, &lv_font_montserratMedium_50);
	lv_style_set_text_align(&style_screen_security_face_reg_imgbtn_key_7_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_security_face_reg_imgbtn_key_7_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_security_face_reg_imgbtn_key_7_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_security_face_reg_imgbtn_key_7_main_main_default, 255);
	lv_obj_add_style(ui->screen_security_face_reg_imgbtn_key_7, &style_screen_security_face_reg_imgbtn_key_7_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_imgbtn_set_src(ui->screen_security_face_reg_imgbtn_key_7, LV_IMGBTN_STATE_RELEASED, NULL, &_security_keypad_button_alpha_118x75, NULL);
	ui->screen_security_face_reg_imgbtn_key_7_label = lv_label_create(ui->screen_security_face_reg_imgbtn_key_7);
	lv_label_set_text(ui->screen_security_face_reg_imgbtn_key_7_label, "7");
	lv_obj_set_style_pad_all(ui->screen_security_face_reg_imgbtn_key_7, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_security_face_reg_imgbtn_key_7_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_security_face_reg_imgbtn_key_8
	ui->screen_security_face_reg_imgbtn_key_8 = lv_imgbtn_create(ui->screen_security_face_reg_cont_background);
	lv_obj_set_pos(ui->screen_security_face_reg_imgbtn_key_8, 916, 372);
	lv_obj_set_size(ui->screen_security_face_reg_imgbtn_key_8, 118, 75);
	lv_obj_set_scrollbar_mode(ui->screen_security_face_reg_imgbtn_key_8, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_security_face_reg_imgbtn_key_8_main_main_default
	static lv_style_t style_screen_security_face_reg_imgbtn_key_8_main_main_default;
	if (style_screen_security_face_reg_imgbtn_key_8_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_security_face_reg_imgbtn_key_8_main_main_default);
	else
		lv_style_init(&style_screen_security_face_reg_imgbtn_key_8_main_main_default);
	lv_style_set_shadow_width(&style_screen_security_face_reg_imgbtn_key_8_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_security_face_reg_imgbtn_key_8_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_security_face_reg_imgbtn_key_8_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_security_face_reg_imgbtn_key_8_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_security_face_reg_imgbtn_key_8_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_security_face_reg_imgbtn_key_8_main_main_default, 0);
	lv_style_set_text_color(&style_screen_security_face_reg_imgbtn_key_8_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_security_face_reg_imgbtn_key_8_main_main_default, &lv_font_montserratMedium_50);
	lv_style_set_text_align(&style_screen_security_face_reg_imgbtn_key_8_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_security_face_reg_imgbtn_key_8_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_security_face_reg_imgbtn_key_8_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_security_face_reg_imgbtn_key_8_main_main_default, 255);
	lv_obj_add_style(ui->screen_security_face_reg_imgbtn_key_8, &style_screen_security_face_reg_imgbtn_key_8_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_imgbtn_set_src(ui->screen_security_face_reg_imgbtn_key_8, LV_IMGBTN_STATE_RELEASED, NULL, &_security_keypad_button_alpha_118x75, NULL);
	ui->screen_security_face_reg_imgbtn_key_8_label = lv_label_create(ui->screen_security_face_reg_imgbtn_key_8);
	lv_label_set_text(ui->screen_security_face_reg_imgbtn_key_8_label, "8");
	lv_obj_set_style_pad_all(ui->screen_security_face_reg_imgbtn_key_8, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_security_face_reg_imgbtn_key_8_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_security_face_reg_imgbtn_key_9
	ui->screen_security_face_reg_imgbtn_key_9 = lv_imgbtn_create(ui->screen_security_face_reg_cont_background);
	lv_obj_set_pos(ui->screen_security_face_reg_imgbtn_key_9, 1089, 372);
	lv_obj_set_size(ui->screen_security_face_reg_imgbtn_key_9, 118, 75);
	lv_obj_set_scrollbar_mode(ui->screen_security_face_reg_imgbtn_key_9, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_security_face_reg_imgbtn_key_9_main_main_default
	static lv_style_t style_screen_security_face_reg_imgbtn_key_9_main_main_default;
	if (style_screen_security_face_reg_imgbtn_key_9_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_security_face_reg_imgbtn_key_9_main_main_default);
	else
		lv_style_init(&style_screen_security_face_reg_imgbtn_key_9_main_main_default);
	lv_style_set_shadow_width(&style_screen_security_face_reg_imgbtn_key_9_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_security_face_reg_imgbtn_key_9_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_security_face_reg_imgbtn_key_9_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_security_face_reg_imgbtn_key_9_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_security_face_reg_imgbtn_key_9_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_security_face_reg_imgbtn_key_9_main_main_default, 0);
	lv_style_set_text_color(&style_screen_security_face_reg_imgbtn_key_9_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_security_face_reg_imgbtn_key_9_main_main_default, &lv_font_montserratMedium_50);
	lv_style_set_text_align(&style_screen_security_face_reg_imgbtn_key_9_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_security_face_reg_imgbtn_key_9_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_security_face_reg_imgbtn_key_9_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_security_face_reg_imgbtn_key_9_main_main_default, 255);
	lv_obj_add_style(ui->screen_security_face_reg_imgbtn_key_9, &style_screen_security_face_reg_imgbtn_key_9_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_imgbtn_set_src(ui->screen_security_face_reg_imgbtn_key_9, LV_IMGBTN_STATE_RELEASED, NULL, &_security_keypad_button_alpha_118x75, NULL);
	ui->screen_security_face_reg_imgbtn_key_9_label = lv_label_create(ui->screen_security_face_reg_imgbtn_key_9);
	lv_label_set_text(ui->screen_security_face_reg_imgbtn_key_9_label, "9");
	lv_obj_set_style_pad_all(ui->screen_security_face_reg_imgbtn_key_9, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_security_face_reg_imgbtn_key_9_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_security_face_reg_imgbtn_key_del
	ui->screen_security_face_reg_imgbtn_key_del = lv_imgbtn_create(ui->screen_security_face_reg_cont_background);
	lv_obj_set_pos(ui->screen_security_face_reg_imgbtn_key_del, 743, 473);
	lv_obj_set_size(ui->screen_security_face_reg_imgbtn_key_del, 118, 75);
	lv_obj_set_scrollbar_mode(ui->screen_security_face_reg_imgbtn_key_del, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_security_face_reg_imgbtn_key_del_main_main_default
	static lv_style_t style_screen_security_face_reg_imgbtn_key_del_main_main_default;
	if (style_screen_security_face_reg_imgbtn_key_del_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_security_face_reg_imgbtn_key_del_main_main_default);
	else
		lv_style_init(&style_screen_security_face_reg_imgbtn_key_del_main_main_default);
	lv_style_set_shadow_width(&style_screen_security_face_reg_imgbtn_key_del_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_security_face_reg_imgbtn_key_del_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_security_face_reg_imgbtn_key_del_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_security_face_reg_imgbtn_key_del_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_security_face_reg_imgbtn_key_del_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_security_face_reg_imgbtn_key_del_main_main_default, 0);
	lv_style_set_text_color(&style_screen_security_face_reg_imgbtn_key_del_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_security_face_reg_imgbtn_key_del_main_main_default, &lv_font_montserratMedium_50);
	lv_style_set_text_align(&style_screen_security_face_reg_imgbtn_key_del_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_security_face_reg_imgbtn_key_del_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_security_face_reg_imgbtn_key_del_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_security_face_reg_imgbtn_key_del_main_main_default, 255);
	lv_obj_add_style(ui->screen_security_face_reg_imgbtn_key_del, &style_screen_security_face_reg_imgbtn_key_del_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_imgbtn_set_src(ui->screen_security_face_reg_imgbtn_key_del, LV_IMGBTN_STATE_RELEASED, NULL, &_security_keypad_button_alpha_118x75, NULL);
	ui->screen_security_face_reg_imgbtn_key_del_label = lv_label_create(ui->screen_security_face_reg_imgbtn_key_del);
	lv_label_set_text(ui->screen_security_face_reg_imgbtn_key_del_label, "Del");
	lv_obj_set_style_pad_all(ui->screen_security_face_reg_imgbtn_key_del, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_security_face_reg_imgbtn_key_del_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_security_face_reg_imgbtn_key_0
	ui->screen_security_face_reg_imgbtn_key_0 = lv_imgbtn_create(ui->screen_security_face_reg_cont_background);
	lv_obj_set_pos(ui->screen_security_face_reg_imgbtn_key_0, 916, 473);
	lv_obj_set_size(ui->screen_security_face_reg_imgbtn_key_0, 118, 75);
	lv_obj_set_scrollbar_mode(ui->screen_security_face_reg_imgbtn_key_0, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_security_face_reg_imgbtn_key_0_main_main_default
	static lv_style_t style_screen_security_face_reg_imgbtn_key_0_main_main_default;
	if (style_screen_security_face_reg_imgbtn_key_0_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_security_face_reg_imgbtn_key_0_main_main_default);
	else
		lv_style_init(&style_screen_security_face_reg_imgbtn_key_0_main_main_default);
	lv_style_set_shadow_width(&style_screen_security_face_reg_imgbtn_key_0_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_security_face_reg_imgbtn_key_0_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_security_face_reg_imgbtn_key_0_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_security_face_reg_imgbtn_key_0_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_security_face_reg_imgbtn_key_0_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_security_face_reg_imgbtn_key_0_main_main_default, 0);
	lv_style_set_text_color(&style_screen_security_face_reg_imgbtn_key_0_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_security_face_reg_imgbtn_key_0_main_main_default, &lv_font_montserratMedium_50);
	lv_style_set_text_align(&style_screen_security_face_reg_imgbtn_key_0_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_security_face_reg_imgbtn_key_0_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_security_face_reg_imgbtn_key_0_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_security_face_reg_imgbtn_key_0_main_main_default, 255);
	lv_obj_add_style(ui->screen_security_face_reg_imgbtn_key_0, &style_screen_security_face_reg_imgbtn_key_0_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_imgbtn_set_src(ui->screen_security_face_reg_imgbtn_key_0, LV_IMGBTN_STATE_RELEASED, NULL, &_security_keypad_button_alpha_118x75, NULL);
	ui->screen_security_face_reg_imgbtn_key_0_label = lv_label_create(ui->screen_security_face_reg_imgbtn_key_0);
	lv_label_set_text(ui->screen_security_face_reg_imgbtn_key_0_label, "0");
	lv_obj_set_style_pad_all(ui->screen_security_face_reg_imgbtn_key_0, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_security_face_reg_imgbtn_key_0_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_security_face_reg_imgbtn_key_ok
	ui->screen_security_face_reg_imgbtn_key_ok = lv_imgbtn_create(ui->screen_security_face_reg_cont_background);
	lv_obj_set_pos(ui->screen_security_face_reg_imgbtn_key_ok, 1089, 473);
	lv_obj_set_size(ui->screen_security_face_reg_imgbtn_key_ok, 118, 75);
	lv_obj_set_scrollbar_mode(ui->screen_security_face_reg_imgbtn_key_ok, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_security_face_reg_imgbtn_key_ok_main_main_default
	static lv_style_t style_screen_security_face_reg_imgbtn_key_ok_main_main_default;
	if (style_screen_security_face_reg_imgbtn_key_ok_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_security_face_reg_imgbtn_key_ok_main_main_default);
	else
		lv_style_init(&style_screen_security_face_reg_imgbtn_key_ok_main_main_default);
	lv_style_set_shadow_width(&style_screen_security_face_reg_imgbtn_key_ok_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_security_face_reg_imgbtn_key_ok_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_security_face_reg_imgbtn_key_ok_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_security_face_reg_imgbtn_key_ok_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_security_face_reg_imgbtn_key_ok_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_security_face_reg_imgbtn_key_ok_main_main_default, 0);
	lv_style_set_text_color(&style_screen_security_face_reg_imgbtn_key_ok_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_security_face_reg_imgbtn_key_ok_main_main_default, &lv_font_montserratMedium_50);
	lv_style_set_text_align(&style_screen_security_face_reg_imgbtn_key_ok_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_security_face_reg_imgbtn_key_ok_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_security_face_reg_imgbtn_key_ok_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_security_face_reg_imgbtn_key_ok_main_main_default, 255);
	lv_obj_add_style(ui->screen_security_face_reg_imgbtn_key_ok, &style_screen_security_face_reg_imgbtn_key_ok_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_imgbtn_set_src(ui->screen_security_face_reg_imgbtn_key_ok, LV_IMGBTN_STATE_RELEASED, NULL, &_security_keypad_button_alpha_118x75, NULL);
	ui->screen_security_face_reg_imgbtn_key_ok_label = lv_label_create(ui->screen_security_face_reg_imgbtn_key_ok);
	lv_label_set_text(ui->screen_security_face_reg_imgbtn_key_ok_label, "Ok");
	lv_obj_set_style_pad_all(ui->screen_security_face_reg_imgbtn_key_ok, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_security_face_reg_imgbtn_key_ok_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_security_face_reg_imgbtn_save
	ui->screen_security_face_reg_imgbtn_save = lv_imgbtn_create(ui->screen_security_face_reg_cont_background);
	lv_obj_set_pos(ui->screen_security_face_reg_imgbtn_save, 731, 595);
	lv_obj_set_size(ui->screen_security_face_reg_imgbtn_save, 210, 110);
	lv_obj_set_scrollbar_mode(ui->screen_security_face_reg_imgbtn_save, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_security_face_reg_imgbtn_save_main_main_default
	static lv_style_t style_screen_security_face_reg_imgbtn_save_main_main_default;
	if (style_screen_security_face_reg_imgbtn_save_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_security_face_reg_imgbtn_save_main_main_default);
	else
		lv_style_init(&style_screen_security_face_reg_imgbtn_save_main_main_default);
	lv_style_set_shadow_width(&style_screen_security_face_reg_imgbtn_save_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_security_face_reg_imgbtn_save_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_security_face_reg_imgbtn_save_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_security_face_reg_imgbtn_save_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_security_face_reg_imgbtn_save_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_security_face_reg_imgbtn_save_main_main_default, 0);
	lv_style_set_text_color(&style_screen_security_face_reg_imgbtn_save_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_security_face_reg_imgbtn_save_main_main_default, &lv_font_montserratMedium_50);
	lv_style_set_text_align(&style_screen_security_face_reg_imgbtn_save_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_security_face_reg_imgbtn_save_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_security_face_reg_imgbtn_save_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_security_face_reg_imgbtn_save_main_main_default, 255);
	lv_obj_add_style(ui->screen_security_face_reg_imgbtn_save, &style_screen_security_face_reg_imgbtn_save_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_imgbtn_set_src(ui->screen_security_face_reg_imgbtn_save, LV_IMGBTN_STATE_RELEASED, NULL, &_button_green_alpha_210x110, NULL);
	ui->screen_security_face_reg_imgbtn_save_label = lv_label_create(ui->screen_security_face_reg_imgbtn_save);
	lv_label_set_text(ui->screen_security_face_reg_imgbtn_save_label, "Save");
	lv_obj_set_style_pad_all(ui->screen_security_face_reg_imgbtn_save, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_security_face_reg_imgbtn_save_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_security_face_reg_imgbtn_cancel
	ui->screen_security_face_reg_imgbtn_cancel = lv_imgbtn_create(ui->screen_security_face_reg_cont_background);
	lv_obj_set_pos(ui->screen_security_face_reg_imgbtn_cancel, 1005, 595);
	lv_obj_set_size(ui->screen_security_face_reg_imgbtn_cancel, 210, 110);
	lv_obj_set_scrollbar_mode(ui->screen_security_face_reg_imgbtn_cancel, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_security_face_reg_imgbtn_cancel_main_main_default
	static lv_style_t style_screen_security_face_reg_imgbtn_cancel_main_main_default;
	if (style_screen_security_face_reg_imgbtn_cancel_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_security_face_reg_imgbtn_cancel_main_main_default);
	else
		lv_style_init(&style_screen_security_face_reg_imgbtn_cancel_main_main_default);
	lv_style_set_shadow_width(&style_screen_security_face_reg_imgbtn_cancel_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_security_face_reg_imgbtn_cancel_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_security_face_reg_imgbtn_cancel_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_security_face_reg_imgbtn_cancel_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_security_face_reg_imgbtn_cancel_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_security_face_reg_imgbtn_cancel_main_main_default, 0);
	lv_style_set_text_color(&style_screen_security_face_reg_imgbtn_cancel_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_security_face_reg_imgbtn_cancel_main_main_default, &lv_font_montserratMedium_50);
	lv_style_set_text_align(&style_screen_security_face_reg_imgbtn_cancel_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_screen_security_face_reg_imgbtn_cancel_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_security_face_reg_imgbtn_cancel_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_security_face_reg_imgbtn_cancel_main_main_default, 255);
	lv_obj_add_style(ui->screen_security_face_reg_imgbtn_cancel, &style_screen_security_face_reg_imgbtn_cancel_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_imgbtn_set_src(ui->screen_security_face_reg_imgbtn_cancel, LV_IMGBTN_STATE_RELEASED, NULL, &_button_red_alpha_210x110, NULL);
	ui->screen_security_face_reg_imgbtn_cancel_label = lv_label_create(ui->screen_security_face_reg_imgbtn_cancel);
	lv_label_set_text(ui->screen_security_face_reg_imgbtn_cancel_label, "Cancel");
	lv_obj_set_style_pad_all(ui->screen_security_face_reg_imgbtn_cancel, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_security_face_reg_imgbtn_cancel_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_security_face_reg_label_stars
	ui->screen_security_face_reg_label_stars = lv_label_create(ui->screen_security_face_reg_cont_background);
	lv_obj_set_pos(ui->screen_security_face_reg_label_stars, 827, 620);
	lv_obj_set_size(ui->screen_security_face_reg_label_stars, 305, 65);
	lv_obj_set_scrollbar_mode(ui->screen_security_face_reg_label_stars, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_security_face_reg_label_stars, "____");
	lv_label_set_long_mode(ui->screen_security_face_reg_label_stars, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_security_face_reg_label_stars_main_main_default
	static lv_style_t style_screen_security_face_reg_label_stars_main_main_default;
	if (style_screen_security_face_reg_label_stars_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_security_face_reg_label_stars_main_main_default);
	else
		lv_style_init(&style_screen_security_face_reg_label_stars_main_main_default);
	lv_style_set_radius(&style_screen_security_face_reg_label_stars_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_security_face_reg_label_stars_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_security_face_reg_label_stars_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_security_face_reg_label_stars_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_security_face_reg_label_stars_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_security_face_reg_label_stars_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_security_face_reg_label_stars_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_security_face_reg_label_stars_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_security_face_reg_label_stars_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_security_face_reg_label_stars_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_security_face_reg_label_stars_main_main_default, 0);
	lv_style_set_text_color(&style_screen_security_face_reg_label_stars_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_security_face_reg_label_stars_main_main_default, &lv_font_montserratMedium_50);
	lv_style_set_text_letter_space(&style_screen_security_face_reg_label_stars_main_main_default, 28);
	lv_style_set_text_line_space(&style_screen_security_face_reg_label_stars_main_main_default, 0);
	lv_style_set_text_align(&style_screen_security_face_reg_label_stars_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_security_face_reg_label_stars_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_security_face_reg_label_stars_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_security_face_reg_label_stars_main_main_default, 0);
	lv_style_set_pad_bottom(&style_screen_security_face_reg_label_stars_main_main_default, 0);
	lv_obj_add_style(ui->screen_security_face_reg_label_stars, &style_screen_security_face_reg_label_stars_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_security_face_reg_label_facereg_state
	ui->screen_security_face_reg_label_facereg_state = lv_label_create(ui->screen_security_face_reg_cont_background);
	lv_obj_set_pos(ui->screen_security_face_reg_label_facereg_state, 188, 624);
	lv_obj_set_size(ui->screen_security_face_reg_label_facereg_state, 354, 40);
	lv_obj_set_scrollbar_mode(ui->screen_security_face_reg_label_facereg_state, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_security_face_reg_label_facereg_state, "New user detected");
	lv_label_set_long_mode(ui->screen_security_face_reg_label_facereg_state, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_security_face_reg_label_facereg_state_main_main_default
	static lv_style_t style_screen_security_face_reg_label_facereg_state_main_main_default;
	if (style_screen_security_face_reg_label_facereg_state_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_security_face_reg_label_facereg_state_main_main_default);
	else
		lv_style_init(&style_screen_security_face_reg_label_facereg_state_main_main_default);
	lv_style_set_radius(&style_screen_security_face_reg_label_facereg_state_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_security_face_reg_label_facereg_state_main_main_default, lv_color_make(0x19, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_security_face_reg_label_facereg_state_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_security_face_reg_label_facereg_state_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_security_face_reg_label_facereg_state_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_security_face_reg_label_facereg_state_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_security_face_reg_label_facereg_state_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_security_face_reg_label_facereg_state_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_security_face_reg_label_facereg_state_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_security_face_reg_label_facereg_state_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_security_face_reg_label_facereg_state_main_main_default, 0);
	lv_style_set_text_color(&style_screen_security_face_reg_label_facereg_state_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_security_face_reg_label_facereg_state_main_main_default, &lv_font_montserratMedium_32);
	lv_style_set_text_letter_space(&style_screen_security_face_reg_label_facereg_state_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_security_face_reg_label_facereg_state_main_main_default, 0);
	lv_style_set_text_align(&style_screen_security_face_reg_label_facereg_state_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_security_face_reg_label_facereg_state_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_security_face_reg_label_facereg_state_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_security_face_reg_label_facereg_state_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_security_face_reg_label_facereg_state_main_main_default, 0);
	lv_obj_add_style(ui->screen_security_face_reg_label_facereg_state, &style_screen_security_face_reg_label_facereg_state_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_security_face_reg_label_title
	ui->screen_security_face_reg_label_title = lv_label_create(ui->screen_security_face_reg);
	lv_obj_set_pos(ui->screen_security_face_reg_label_title, 230, 30);
	lv_obj_set_size(ui->screen_security_face_reg_label_title, 760, 60);
	lv_obj_set_scrollbar_mode(ui->screen_security_face_reg_label_title, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_security_face_reg_label_title, "SECURITY CONTROL");
	lv_label_set_long_mode(ui->screen_security_face_reg_label_title, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_security_face_reg_label_title_main_main_default
	static lv_style_t style_screen_security_face_reg_label_title_main_main_default;
	if (style_screen_security_face_reg_label_title_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_security_face_reg_label_title_main_main_default);
	else
		lv_style_init(&style_screen_security_face_reg_label_title_main_main_default);
	lv_style_set_radius(&style_screen_security_face_reg_label_title_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_security_face_reg_label_title_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_security_face_reg_label_title_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_security_face_reg_label_title_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_security_face_reg_label_title_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_security_face_reg_label_title_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_security_face_reg_label_title_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_security_face_reg_label_title_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_security_face_reg_label_title_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_security_face_reg_label_title_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_security_face_reg_label_title_main_main_default, 0);
	lv_style_set_text_color(&style_screen_security_face_reg_label_title_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_security_face_reg_label_title_main_main_default, &lv_font_montserratMedium_50);
	lv_style_set_text_letter_space(&style_screen_security_face_reg_label_title_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_security_face_reg_label_title_main_main_default, 0);
	lv_style_set_text_align(&style_screen_security_face_reg_label_title_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_security_face_reg_label_title_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_security_face_reg_label_title_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_security_face_reg_label_title_main_main_default, 0);
	lv_style_set_pad_bottom(&style_screen_security_face_reg_label_title_main_main_default, 0);
	lv_obj_add_style(ui->screen_security_face_reg_label_title, &style_screen_security_face_reg_label_title_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_security_face_reg_cont_camera_preview
	ui->screen_security_face_reg_cont_camera_preview = lv_obj_create(ui->screen_security_face_reg);
	lv_obj_set_pos(ui->screen_security_face_reg_cont_camera_preview, 30, 110);
	lv_obj_set_size(ui->screen_security_face_reg_cont_camera_preview, 640, 480);
	lv_obj_set_scrollbar_mode(ui->screen_security_face_reg_cont_camera_preview, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_security_face_reg_cont_camera_preview_main_main_default
	static lv_style_t style_screen_security_face_reg_cont_camera_preview_main_main_default;
	if (style_screen_security_face_reg_cont_camera_preview_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_security_face_reg_cont_camera_preview_main_main_default);
	else
		lv_style_init(&style_screen_security_face_reg_cont_camera_preview_main_main_default);
	lv_style_set_radius(&style_screen_security_face_reg_cont_camera_preview_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_security_face_reg_cont_camera_preview_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_security_face_reg_cont_camera_preview_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_security_face_reg_cont_camera_preview_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_security_face_reg_cont_camera_preview_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_security_face_reg_cont_camera_preview_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_security_face_reg_cont_camera_preview_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_security_face_reg_cont_camera_preview_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_security_face_reg_cont_camera_preview_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_security_face_reg_cont_camera_preview_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_security_face_reg_cont_camera_preview_main_main_default, 0);
	lv_style_set_border_color(&style_screen_security_face_reg_cont_camera_preview_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_border_width(&style_screen_security_face_reg_cont_camera_preview_main_main_default, 1);
	lv_style_set_border_opa(&style_screen_security_face_reg_cont_camera_preview_main_main_default, 255);
	lv_style_set_pad_left(&style_screen_security_face_reg_cont_camera_preview_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_security_face_reg_cont_camera_preview_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_security_face_reg_cont_camera_preview_main_main_default, 0);
	lv_style_set_pad_bottom(&style_screen_security_face_reg_cont_camera_preview_main_main_default, 0);
	lv_obj_add_style(ui->screen_security_face_reg_cont_camera_preview, &style_screen_security_face_reg_cont_camera_preview_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_security_face_reg_img_camera_preview
	ui->screen_security_face_reg_img_camera_preview = lv_img_create(ui->screen_security_face_reg);
	lv_obj_set_pos(ui->screen_security_face_reg_img_camera_preview, 30, 110);
	lv_obj_set_size(ui->screen_security_face_reg_img_camera_preview, 640, 480);
	lv_obj_set_scrollbar_mode(ui->screen_security_face_reg_img_camera_preview, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_security_face_reg_img_camera_preview_main_main_default
	static lv_style_t style_screen_security_face_reg_img_camera_preview_main_main_default;
	if (style_screen_security_face_reg_img_camera_preview_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_security_face_reg_img_camera_preview_main_main_default);
	else
		lv_style_init(&style_screen_security_face_reg_img_camera_preview_main_main_default);
	lv_style_set_img_recolor(&style_screen_security_face_reg_img_camera_preview_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_security_face_reg_img_camera_preview_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_security_face_reg_img_camera_preview_main_main_default, 255);
	lv_obj_add_style(ui->screen_security_face_reg_img_camera_preview, &style_screen_security_face_reg_img_camera_preview_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Init events for screen
	events_init_screen_security_face_reg(ui);
}