#include "warrior.h"
#include <iostream>

using namespace std;

Warrior::Warrior(){
    classType = "Warrior";
     Hero::setMaxHealth(Hero::getMaxHealth() + 3);
     Hero::setCurrentHealth(Hero::getCurrentHealth() + 3);
     Hero::setMagicAttack(Hero::getPhysicalAttack() + 3);
     Hero::setCurrentMagicAttack(Hero::getCurrentAttack() - 3);
     Hero::setMagicAttack(Hero::getMagicAttack() - 4);
     Hero::setCurrentMagicAttack(Hero::getCurrentMagicAttack() - 4);
     Hero::setArmor(Hero::getArmor() -2);
     Hero::setCurrentArmor(Hero::getCurrentArmor() -2);
     Hero::addSkill("Rage - Increase Attack by 5 at the cost of all armor for the remainder of the battle! (4 MP)");
}

void Warrior::Rage(){
    Hero::setCurrentAttack(Hero::getCurrentAttack() + 5);
    Hero::setCurrentArmor(0);
    Hero::setCurrentMana(Hero::getCurrentMana() - 4);
};

void Warrior::Attack(Monster &_monster){
    _monster.Monster::takeDamage(getCurrentAttack());
}

void Warrior::display(){
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