#ifndef UI__TUI__TUI_RENDER_API
#define UI__TUI__TUI_RENDER_API

#include "ui/render_api.h"
#include "ui/Context.h"

namespace ui::tui
{
class tui_render_api : public ui::render_api
{
    public:
        tui_render_api(ui::Context &context);
        ~tui_render_api() override;
        void update() override;
        void render() override;
        void stop_render() override;

    private:
        ui::Context &m_context;  

};
} 

#endif
