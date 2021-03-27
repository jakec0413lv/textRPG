#pragma once

#include "hero.h"
#include "monster.h"

using namespace std;

class Warrior : public Hero 
{
    public:
    Warrior();
    void Rage();
    void Attack(Monster );
};