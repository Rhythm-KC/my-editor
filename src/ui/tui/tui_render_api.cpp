#include "ui/tui/tui_render_api.h"

#include "ui/Context.h"
#include <ncurses.h>

namespace ui::tui
{
tui_render_api::tui_render_api(ui::Context &context) :
    m_context{context}
{
    initscr();
    cbreak();
    noecho();
    curs_set(0);

}

tui_render_api::~tui_render_api()
{
    stop_render();
}

void tui_render_api::update()
{
    return;
}

void tui_render_api::render()
{
    refresh();
    return;
}

void tui_render_api::stop_render()
{
    endwin();
}

}