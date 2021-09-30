/*
 * @author Guillaume LEMONNIER
 * @file Creature.hpp
 */

#ifndef _CREATURE_HPP_
#define _CREATURE_HPP_

#include <iostream>
#include "../SDL2-2.0.16/include/SDL.h"

#define MOVE_RIGHT  0x0100
#define MOVE_LEFT   0x0101
#define MOVE_UP     0x0102
#define MOVE_DOWN   0x0103

class Creature {
private:
    unsigned int m_positionX = 0;
    unsigned int m_positionY = 0;

    unsigned int m_goalX = 0;
    unsigned int m_goalY = 0;
protected:

public:
    Creature(unsigned int positionX, unsigned int positionY, unsigned int goalX, unsigned int goalY);

    ~Creature(void);

    bool onHisGoal(void);

    void move(unsigned int direction);
};

#endif