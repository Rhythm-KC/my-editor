#include "ui/Context.h"

#include <cstddef>

namespace ui
{
Context::Context(std::size_t width, std::size_t height) :
    m_width{width},
    m_height{height},
    m_curr_row{0},
    m_curr_col{0}
{
}
}