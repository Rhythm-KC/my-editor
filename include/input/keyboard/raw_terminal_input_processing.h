#ifndef INPUT__KEYBOARD__RAW_TERMINAL_INPUT_PROCESSING
#define INPUT__KEYBOARD__RAW_TERMINAL_INPUT_PROCESSING

#include "input/keyboard/keyboard_input.h"

namespace input::keyboard
{
class raw_terminal_input_processing : public process_keyboard_input
{
    public:
        raw_terminal_input_processing() = default;
        ~raw_terminal_input_processing() override = default;
        keyboard_input get_keyboard_input() const override;
};
}

#endif
