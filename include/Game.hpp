/**
*
*/

#ifndef _GAME_HPP_
#define _GAME_HPP_

#include <iostream>

#define MOVE_UP     0x0000100
#define MOVE_RIGHT  0x0000101
#define MOVE_LEFT   0x0000102
#define MOVE_DOWN   0x0000103

class Game
{
private:
    /// Player's Position X
    unsigned int m_PositionPlayerX;
    /// Player's Position Y
    unsigned int m_PositionPlayerY;

    /// Opposit's Position X
    unsigned int m_PositionOppositX;
    /// Opposit's Position Y
    unsigned int m_PositionOppositY;
public:
    /// Default Constructor
    Game(void);
    /// Default Destructor
    ~Game(void);

    /// Select a level to load
    void selectLevel(unsigned int level);

    /// Move the Player and the opposit
    void move(unsigned int move);

};

#endif