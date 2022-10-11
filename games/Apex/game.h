#pragma once

#include <IGame.h>
#include <csvParser.hpp>
#include <random>
#include <chrono>

class ApexGame : public IGame
{
public:
    ApexGame(std::string filename = "")
    {
        _name = "Apex";
        hasSides = false;
        dataFile = filename;
        engine = std::mt19937(std::chrono::system_clock::now().time_since_epoch().count());
    }

    std::string random(bool isDef = false) override;
private:
    bool _initialized = false;
    bool initialize();
    std::vector<std::string> charChoices;
    std::mt19937 engine;
};