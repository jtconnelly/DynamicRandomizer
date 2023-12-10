#pragma once

#include <IGame.h>

class SiegeGame : IGame
{
public:
    SiegeGame(std::string filename = "SiegeFallback.gstf")
    {
        _name = "Siege";
        hasSides = true;
        dataFile = filename;
    }

    std::string random(bool isDef) override;
private:
    bool _initialized = false;
    bool initialize();
};