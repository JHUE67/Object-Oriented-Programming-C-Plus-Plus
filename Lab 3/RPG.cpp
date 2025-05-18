#include "RPG.h"

using namespace std;

RPG::RPG(){
    name = "NPC";
    health = 100;
    strength = 10;
    defense = 10;
    type = "warrior";
    skills[0] = "slash";
    skills[1] = "parry";
}

RPG::RPG(string name, int health, int strength, int defense, string type){
    this->name = name;
    this->health = health;
    this->strength = strength;
    this->type = type;

    setSkills();
}

string const RPG::getName() {
    return name;
}

int const RPG::getHeatlh(){
    return health;
}

int const RPG::getStrength(){
    return strength;
}

int const RPG::getDefense(){
    return defense;
}