#pragma once

#include <IGame.h>

class ApexGame : public IGame
{
public:
    ApexGame(std::string filename = "")
    {
        _name = "Apex";
        hasSides = false;
        dataFile = filename;
    }

    std::string random(bool isDef = false) override;
};