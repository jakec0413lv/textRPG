#pragma once

#include "hero.h"
#include "monster.h"

using namespace std;

class Archer : public Hero 
{
    public:
    Archer();
    void Tripleshot(Monster & );
    void Attack(Monster & );
};