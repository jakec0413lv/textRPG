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
    _monster.setCurrentHealth(_monster.getCurrentHealth() - (Hero::getCurrentAttack() - .25*_monster.getCurrentArmor()));
}

void Knight::display(){
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
