#pragma once

// for imgui
#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
#include <GL/gl3w.h> 
#include <GLFW/glfw3.h>

#include <stdio.h>




int init_glfw3();
int init_imgui();

void term_imgui();
void term_glfw3();


void render_imgui();


