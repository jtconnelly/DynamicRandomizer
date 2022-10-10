#pragma once

#include <IGame.h>

class CodGame : public IGame
{
public:
    CodGame(std::string filename = "CodFallback.txt")
    {
        _name = "Cod";
        hasSides = false;
        dataFile = filename.substr(filename.size() - 4, 4) == ".txt" ? filename.substr(0, filename.size() - 4) : filename;
    }

    std::string random(bool isDef = false) override;
private:
    bool _initialized = false;
    bool initialize();
};