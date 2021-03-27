#pragma once

#include "hero.h"
#include "monster.h"

using namespace std;

class Cleric : public Hero 
{
    public:
    Cleric();
    void Heal(Hero, Hero );
    void Attack(Monster );
};