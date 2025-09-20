#ifndef INPUT__KEYBOARD_INPUT
#define INPUT__KEYBOARD_INPUT

namespace input
{
struct keyboard_input
{
    keys m_key;
    char m_value;
    bool m_is_ctrl;

    keyboard_input(keys key, char value, bool is_ctrl);
    keyboard_input(keys key, char value);
    keyboard_input(keys key);
};
enum keys
{
    Unknown,
    Escape,
    Enter,
    Backspace,
    Tab,
    Up, Down, Left, Right,
    Home, End, PageUp, PageDown,
    Insert, Delete,
    Char 
};
}

#endif