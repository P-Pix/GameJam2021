/**
* @author Guillaume LEMONNIER
 * @file Draw.cpp
*/

#include "../../include/Window.hpp"

void Window::draw(void)
{
    SDL_RenderDrawPointF(this -> m_Render, 50, 50);
    SDL_UpdateWindowSurface(this -> m_Window);
}