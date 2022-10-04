#pragma once

#include <IGame.h>

class SiegeGame : IGame
{
public:
    SiegeGame(std::string filename = "SiegeFallback.txt")
    {
        _name = "Siege";
        hasSides = true;
        dataFile = filename.substr(filename.size() - 4, 4) == ".txt" ? filename.substr(0, filename.size() - 4) : filename;
    }

    std::string random(bool isDef) override;
};