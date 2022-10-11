#include "game.h"
#include "csvParser.hpp"

std::string ApexGame::random(bool isDef)
{
    std::string ans = "";
    if (!_initialized || !initialize())
        return ans;
    std::uniform_int_distribution<int> dist(0, charChoices.size() - 1);
    ans = charChoices[dist(engine)];
    return ans;
}

bool ApexGame::initialize()
{
    if (dataFile.empty())
    {
        charChoices =
        {
            "Ash",
            "Bangalore",
            "Bloodhound",
            "Caustic",
            "Crypto",
            "Fuse",
            "Gibraltar",
            "Horizon",
            "Lifeline",
            "Loba",
            "Mad Maggie",
            "Mirage",
            "Newcastle",
            "Octane",
            "Pathfinder",
            "Rampart",
            "Revenant",
            "Seer",
            "Valkyrie",
            "Vantage",
            "Wattson",
            "Wraith",
        };
    }
    else
    {
        try {
            auto selection = csv::getLines(dataFile);
            if (selection.empty())
                return false;
            if (selection.size() > 1)
            {
                for (auto line : selection)
                {
                    charChoices.push_back(line.front());
                }
            }
            else
            {
                for (auto legend : selection[0])
                {
                    charChoices.push_back(legend);
                }
            }
        }
        catch (...) {
            return false;
        }
    }
    _initialized = true;
    return true;
}