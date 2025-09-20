#ifndef UI__CONTEXT
#define UI__CONTEXT

#include <cstddef>

namespace ui
{
struct Context
{
    std::size_t m_width;
    std::size_t m_height;
    
    std::size_t m_curr_row;
    std::size_t m_curr_col;

    Context(std::size_t width, std::size_t height);
};
}

#endif