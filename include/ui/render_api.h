#ifndef UI__RENDER_API
#define UI__RENDER_API
namespace ui
{
class render_api
{
    public:
        virtual ~render_api() = default;
        virtual void update() = 0;
        virtual void render() = 0;
        virtual void stop_render() = 0;


};
}
#endif