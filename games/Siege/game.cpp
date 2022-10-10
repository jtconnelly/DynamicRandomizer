#include "game.h"
#include "csvParser.hpp"

std::string SiegeGame::random(bool isDef)
{
    std::string ans = "";
    if (!_initialized || !initialize())
        return ans;

    return ans;
}

bool SiegeGame::initialize()
{
    if (dataFile.empty())
        dataFile = "SiegeFallback.txt";
    try {

    }
    catch (...) {
        return false;
    }
    _initialized = true;
    return true;
}