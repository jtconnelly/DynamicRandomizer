#pragma once

#include <string>

class IGame
{
public:
    virtual ~IGame() = default;

    //What will return the string to display for any game, isDef only matters if hasSides == true
    virtual std::string random(bool isDef) = 0;
private:

    std::string _game;
    bool hasSides;
};