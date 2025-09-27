#include "input/keyboard/keyboard_input.h"

namespace input::keyboard
{
keyboard_input::keyboard_input(keys key, char value, bool is_ctrl):
    m_key{key},
    m_value{value},
    m_is_ctrl{is_ctrl}
{

}
keyboard_input::keyboard_input(keys key, char value):
    m_key{key},
    m_value{value},
    m_is_ctrl{false}
{

}
keyboard_input::keyboard_input(keys key):
    m_key{key},
    m_is_ctrl{false}
{
}
}
