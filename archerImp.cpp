#include "Archer.h"
#include <iostream>

using namespace std;

Archer::Archer(){
    Hero::addSkill("Triple Shot: Deal 2.5 Physical Attack (4 MP)");
    Hero::setMaxMana(Hero::getMaxMana() + 4);
     Hero::setCurrentMana(Hero::getCurrentMana() + 4);
}

void Archer::Tripleshot(Monster _monster){
    cout << "You cast Tripleshot..." << '\n';
    _monster.Monster::takeDamage(getPhysicalAttack() * 2.5 );
    cout << "Fireball did " << (getPhysicalAttack() * 2.5) - _monster.Monster::getCurrentArmor()*.25 << " damage!" << '\n';
}

void Archer::Attack(Monster _monster){
    _monster.Monster::takeDamage(getPhysicalAttack());
}