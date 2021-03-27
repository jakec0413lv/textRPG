#include "Mage.h"
#include <iostream>

using namespace std;

Mage::Mage(){
    classType = "Mage";
     Hero::setMaxHealth(Hero::getMaxHealth() - 2);
     Hero::setCurrentHealth(Hero::getCurrentHealth() - 2);
     Hero::setMaxMana(Hero::getMaxMana() + 5);
     Hero::setCurrentMana(Hero::getCurrentMana() + 5);
     Hero::setMagicAttack(Hero::getMagicAttack() + 5);
     Hero::setCurrentMagicAttack(Hero::getCurrentMagicAttack() + 5);
     Hero::setArmor(Hero::getArmor() - 4);
     Hero::setCurrentArmor(Hero::getCurrentArmor() - 4);
     Hero::addSkill("Fireball: Do a massive amount of fire damage! (6 MP)");
    }

void Mage::Fireball(){
    cout << "You cast Fireball..." << '\n';
    cout << "Fireball did " << getMagicAttack() << " damage!" << '\n';
}