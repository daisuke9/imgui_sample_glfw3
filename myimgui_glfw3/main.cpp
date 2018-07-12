#include "myimgui_glfw3.h"

int main(int, char**)
{
    // initialize
    if (init_glfw3()) {
        return 1;
    }
    init_imgui();

    // rendering...
    render_imgui();


    // terminate
    term_imgui();
    term_glfw3();
}
