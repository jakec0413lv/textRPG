#pragma once

#include "hero.h"
#include "monster.h"

using namespace std;

class Knight : public Hero 
{
    public:
    Knight();
    void Guard();
    void Attack(Monster );
};