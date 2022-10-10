#include "game.h"
#include "csvParser.hpp"

std::string ApexGame::random(bool isDef)
{
    std::string ans = "";
    if (!_initialized || !initialize())
        return ans;

    return ans;
}

bool ApexGame::initialize()
{
    if (dataFile.empty())
    {

    }
    else
    {
        try {

        }
        catch (...) {
            return false;
        }
    }
    _initialized = true;
    return true;
}