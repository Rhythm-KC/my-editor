#ifndef INPUT__RAW_TERMINAL_INPUT_PROCESSING
#define INPUT__RAW_TERMINAL_INPUT_PROCESSING

#include "input/process_intput.h"
#include "input/keyboard_input.h"

namespace input
{
class raw_terminal_input_processing : public process_input
{
    raw_terminal_input_processing() = default;
    ~raw_terminal_input_processing() override = default;
    keyboard_input get_keyboard_input() override;
};
}

#endif