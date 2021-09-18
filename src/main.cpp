/**
 * @file main.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-09-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */

// Theme Join Together

#include <iostream>
#include "../include/Window.hpp"

int main(int argc, char* argv[]);

int main(int argc, char* argv[])
{
    Window Window;
    while(Window.isOpen())
    {
        Window.draw();
    }
    Window.rendered();
    return EXIT_SUCCESS;
}