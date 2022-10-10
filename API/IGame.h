#pragma once

#include <string>

class IGame
{
public:
    IGame(std::string dataFile = "") : dataFile(dataFile) {}
    virtual ~IGame() = default;

    //What will return the string to display for any game, isDef only matters if hasSides == true
    virtual std::string random(bool isDef = false) = 0;
protected:
    std::string _name;
    bool hasSides;
    std::string dataFile;
};