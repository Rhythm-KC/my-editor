#include "ui/tui/tui_render_api.h"
#include "ui/Context.h"

int main()
{
  ui::Context ui_context{0, 0};
  ui::tui::tui_render_api render_api{ui_context};

  while (true)
  {
    render_api.update();
    render_api.render();
  }
  return 0;
}