#include "Knight.h"
#include <iostream>

using namespace std;

Knight::Knight(){
    classType = "Knight";
     Hero::setMaxHealth(Hero::getMaxHealth() + 3);
     Hero::setCurrentHealth(Hero::getCurrentHealth() + 3);
     Hero::setMagicAttack(Hero::getMagicAttack() - 4);
     Hero::setCurrentMagicAttack(Hero::getCurrentMagicAttack() - 4);
     Hero::setArmor(Hero::getArmor() + 4);
     Hero::setCurrentArmor(Hero::getCurrentArmor() + 4);
     Hero::addSkill("Guard - Increase Armor by 4 for the remainder of the battle! (4 MP)");
    }

void Knight::Guard(){
    Hero::setCurrentArmor(Hero::getCurrentArmor() + 4);
    Hero::setCurrentMana(Hero::getCurrentMana() - 4);
    cout << "Defense up!" << '\n';
};

void Knight::Attack(Monster _monster){
    _monster.Monster::takeDamage(getPhysicalAttack());
}
