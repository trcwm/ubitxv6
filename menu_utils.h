#pragma once

#include "button.h"

//Returns true if submenu was run, false otherwise
bool runSubmenu(Menu_t* current_menu,
                void(*const redraw_callback)(),
                const ButtonPress_e tuner_button,
                const ButtonPress_e touch_button,
                const Point touch_point,
                const int16_t knob);

void movePuck(const Button *const b_old,
              const Button *const b_new);

//Returns true if button was found, false otherwise
bool findPressedButton(const Button *const buttons,
                       const uint8_t num_buttons,
                       Button *const button_out,
                       const Point touch_point);