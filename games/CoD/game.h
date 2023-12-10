#pragma once

#include <IGame.h>

class CodGame : public IGame
{
public:
    CodGame(std::string filename = "CodFallback.gstf")
    {
        _name = "Cod";
        hasSides = false;
        dataFile = filename;
    }

    std::string random(bool isDef = false) override;
private:
    bool _initialized = false;
    bool initialize();
};