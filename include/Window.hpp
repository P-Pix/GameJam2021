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

class Window
{
    private:
        SDL_Window *m_Window;

    protected:

    public:

        /// Default Constructor
        Window(void);

        /// Default Destructor
        ~Window(void);

        /// Test if the window is open
        /// \return True if the window is open False if not
        bool isOpen(void);

        /// update the Window render
        void rendered(void);
};

#endif