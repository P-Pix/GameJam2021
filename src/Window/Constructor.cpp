/**
 * @file Constructor.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-09-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Window.hpp"

Window::Window(void)
{
    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "[DEBUG] > %s", SDL_GetError());
    }
    SDL_CreateWindowAndRenderer(m_WindowWidth, m_WindowHeight, SDL_WINDOW_SHOWN, &m_Window, &m_Render);
    if(m_Window == nullptr)
    {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "[DEBUG] > %s", SDL_GetError());
    }
}
Window::~Window(void)
{
    SDL_DestroyRenderer(m_Render);
    SDL_DestroyWindow(m_Window);
    SDL_Quit(); 
}