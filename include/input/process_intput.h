#ifndef INPUT__PROCESS_INPUT
#define INPUT__PROCESS_INPUT

#include "input/keyboard_input.h"

namespace input
{
class process_input
{
    virtual ~process_input() = default;
    virtual keyboard_input get_keyboard_input() = 0;
};
}

#endif