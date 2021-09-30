/**
 * @file Window.hpp
 * @author Guillaume LEMONNIER
 * @date 2021-09-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _WINDOW_HPP_
#define _WINDOW_HPP_

#include <iostream>
#include "../SDL2-2.0.16/include/SDL.h"
#include "Creature.hpp"

class Window {
private:
    unsigned int m_WindowWidth = 1080,
            m_WindowHeight = 720;

    SDL_Window *m_Window;
    SDL_Renderer *m_Render;

    bool m_WindowOpen = true;

protected:

public:

    /// Default Constructor
    Window(void);

    /// Default Destructor
    ~Window(void);

    /// Test if the window is open
    /// \return True if the window is open False if not
    bool isOpen(void);

    /// Controle the window
    void pollEvent(void);

    /// update the Window render
    void rendered(void);

    /// All drawing element on the window
    void draw(void);
};

#endif