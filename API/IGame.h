#pragma once

#include <vector>

class IGame
{
    using void(*fptr);
public:
    virtual ~IGame() = default;

    virtual std::vector<fptr> getFuncs() = 0;
};