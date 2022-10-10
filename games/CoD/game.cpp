#include "game.h"
#include "csvParser.hpp"

std::string CodGame::random(bool isDef)
{
    std::string ans = "";
    if (!_initialized || !initialize())
        return ans;

    return ans;
}

bool CodGame::initialize()
{
    if (dataFile.empty())
        dataFile = "CodFallback.txt";
    try {
        
    }
    catch(...){
        return false;
    }
    _initialized = true;
    return true;
}