/**
 * @file Rendered.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-09-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Window.hpp"

void Window::rendered(void)
{
    SDL_Renderer *rendered = SDL_CreateRenderer(m_Window, -1, SDL_RENDERER_ACCELERATED);
    if(rendered == nullptr)
    {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "[DEBUG] > %s", SDL_GetError());
    }
}