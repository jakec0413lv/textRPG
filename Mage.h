#pragma once

#include "hero.h"
#include "monster.h"

using namespace std;

class Mage : public Hero 
{
    public:
    Mage();
    void Fireball(Monster & );
    void Attack(Monster &);
    void display();
};