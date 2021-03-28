#include "Mage.h"
#include <iostream>

using namespace std;

Mage::Mage(){
    classType = "Mage";
     Hero::setMaxMana(Hero::getMaxMana() + 5);
     Hero::setCurrentMana(Hero::getCurrentMana() + 5);
     Hero::setMagicAttack(Hero::getMagicAttack() + 5);
     Hero::setCurrentMagicAttack(Hero::getCurrentMagicAttack() + 5);
     Hero::setArmor(Hero::getArmor() - 4);
     Hero::setCurrentArmor(Hero::getCurrentArmor() - 4);
     Hero::addSkill("Fireball: Do a massive amount of fire damage! (6 MP)");
    }

void Mage::Fireball(Monster &_monster){
    cout << "You cast Fireball..." << '\n';
    _monster.Monster::takeMagicDamage(Hero::getMagicAttack() * 1.2 );
    cout << "Fireball did " << (Hero::getMagicAttack() * 1.2) - _monster.Monster::getMagicResist()*.35 << " damage!" << '\n';
    setCurrentMana(getCurrentMana() - 6);
}

void Mage::Attack(Monster &_monster){
    _monster.Monster::takeMagicDamage(getCurrentMagicAttack() * .8);
}

void Mage::display(){
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