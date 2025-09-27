#ifndef INPUT__KEYBOARD__KEYBOARD_INPUT
#define INPUT__KEYBOARD__KEYBOARD_INPUT

namespace input::keyboard
{
enum keys
{
    Unknown,
    Escape,
    Enter,
    Backspace,
    Tab, S_Tab,
    Up, Down, Left, Right,
    Home, End, PageUp, PageDown,
    Insert, Delete,
    Char
};

struct keyboard_input
{
    keys m_key;
    char m_value;
    bool m_is_ctrl;

    keyboard_input(keys key, char value, bool is_ctrl);
    keyboard_input(keys key, char value);
    keyboard_input(keys key);

};

class process_keyboard_input
{
    public:
        virtual ~process_keyboard_input() = default;
        virtual keyboard_input get_keyboard_input() const = 0;
};
}

#endif
