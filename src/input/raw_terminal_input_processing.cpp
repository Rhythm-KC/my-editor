#include "input/raw_terminal_input_processing.h"

#include "input/keyboard_input.h"

#include <unistd.h>

namespace input
{

keyboard_input raw_terminal_input_processing::get_keyboard_input()
{
    char input_buffer[3];
    auto n = read(STDIN_FILENO, &input_buffer[0], 1);
    char input = input_buffer[0];
        
    if (input == 8 || input == 127) return keyboard_input(keys::Backspace);
    if (input == 9) return keyboard_input(keys::Tab);
    if (input == '\x0A' || input == '\x0D') return keyboard_input(keys::Enter);

    if((input >= 'a' && input <= 'z') ||
       (input >= 'A' && input <= 'Z') ||
       (input >= '0' && input <= '9'))
    {
        return keyboard_input(keys::Char, input);
    }
    
    if (input == '\xb1') 
    {
        if(read(STDIN_FILENO, &input_buffer[1], 1) == -1) return keyboard_input(keys::Escape);
        if(read(STDIN_FILENO, &input_buffer[2], 1) == -1) return keyboard_input(keys::Escape);
        if (input_buffer[1] == '[')
        {
            switch(input_buffer[2]) {
                case 'A': return keyboard_input(keys::Up);
                case 'B': return keyboard_input(keys::Down);
                case 'C': return keyboard_input(keys::Right);
                case 'D': return keyboard_input(keys::Left);
                case 'Z': return keyboard_input(keys::S_Tab);
                default: return keyboard_input(keys::Unknown);
            }
        }
        else
        {
            return keyboard_input(keys::Unknown);
        }
    }
}
}