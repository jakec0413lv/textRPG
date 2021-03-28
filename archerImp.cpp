#include "Archer.h"
#include <iostream>

using namespace std;

Archer::Archer(){
    Hero::addSkill("Triple Shot: Deal 2.5 Physical Attack (4 MP)");
    Hero::setMaxMana(Hero::getMaxMana() + 4);
    Hero::setCurrentMana(Hero::getCurrentMana() + 4);
    classType = "Archer";
}

void Archer::Tripleshot(Monster &_monster){
    cout << "You cast Tripleshot..." << '\n';
    _monster.Monster::takeDamage(getPhysicalAttack() * 2.5 );
    cout << "Tripleshot did " << (getPhysicalAttack() * 2.5) - _monster.Monster::getCurrentArmor()*.25 << " damage!" << '\n';
    setCurrentMana(getCurrentMana() - 4);
}

void Archer::Attack(Monster &_monster){
    _monster.Monster::takeDamage(getCurrentAttack());
}

void Archer::display(){
     cout << "Class: " << classType << '\n';
     cout << '\n';
     cout << "Max Health: " << getMaxHealth() <<'\n';
     cout << "Current Health: " << getCurrentHealth() <<'\n';
     cout << "Max Mana: " << getMaxMana() <<'\n';
     cout << "Current Mana: " << getCurrentMana() <<'\n';
     cout << "Physical Attack: " << getPhysicalAttack() <<'\n';
     cout << "Current Physical Attack: " << getCurrentAttack() <<'\n';
     cout << "Magic Attack: " << getMagicAttack() <<'\n';
     cout << "Current Magic Attack: " << getCurrentMagicAttack() <<'\n';
     cout << "Armor: " << getArmor() <<'\n';
     cout << "Current Armor: " << getCurrentArmor() <<'\n';
     cout << "Magic Resist: " << getMagicResist() <<'\n';
     cout << "Current Magic Resist: " << getCurrentMagicResist() <<'\n';
     cout << "Skill: " << getSkill() << '\n';
}