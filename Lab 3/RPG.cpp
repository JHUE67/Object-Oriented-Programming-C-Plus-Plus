    #include "RPG.h"
    #include <iostream>

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

    int const RPG::getHealth(){
        return health;
    }

    int const RPG::getStrength(){
        return strength;
    }

    int const RPG::getDefense(){
        return defense;
    }

    void RPG::setSkills(){
        if (type == "mage"){
            skills[0] = "fire";
            skills[1] = "thunder";
        } else if (type == "thief"){
            skills[0] = "pilfer";
            skills[1] = "jab";
        } else if (type == "archer"){
            skills[0] = "parry";
            skills[1] = "crossbow_attack";
        } else {
            skills[0] = "slash";
            skills[1] = "parry";
        }
    }

    void RPG::printActions(string skill, RPG opponent){
        printf("%s used %s on %s\n", name.c_str(), skill.c_str(), opponent.getName().c_str());
    }

    void RPG::updateHealth(int health){
        this->health = health;
    }

    const bool RPG::isAlive(){
        if (health > 0){
            return 1;
        }
        else return 0;  
    }

    // Remaining functions
    /*
    void RPG::attack(RPG*){
        **implementation
    }

    void RPG::useSkill(RPG*){
        **implementation
    }
    */

    // Lab 4 Changes:

    void RPG::attack(RPG* opponent){
        int damage;
        int newHealth;
        damage = this->strength - (*opponent).getDefense();
        newHealth = (*opponent).getHealth() - damage;
        (*opponent).updateHealth(newHealth);
    }

    void RPG::useSkill(RPG* opponent){
        for (int i = 0; i < SKILL_SIZE; i++){
            printf("Skill %i: %s\n",i, skills[i].c_str());
        }

        int chosen_skill_index;
        printf("Choose a skill to use: Enter 0 or 1\n");
        cin >> chosen_skill_index;
        string chosen_skill;
        chosen_skill = skills[chosen_skill_index];
        printActions(chosen_skill, *opponent);

        RPG::attack(opponent);
    }

    void displayStats(RPG player1, RPG player2)
    {
        cout << player1.getName() << " health: " << player1.getHealth();
        cout << " " << player2.getName() << " health: " << player2.getHealth() << endl;
    }

    void displayEnd(RPG player1, RPG player2){
        if (player1.isAlive() == 1){
            cout << player1.getName() << " defeated " << player2.getName() << "! Good game!" << endl;
        }
        else {
            cout << player2.getName() << " defeated " << player1.getName() << "! Good game!" << endl;
        }
        
    }

    void gameLoop(RPG* player1, RPG* player2){
        while ((*player1).isAlive() == (*player2).isAlive() == 1){
            displayStats(*player1, *player2);
            cout << (*player1).getName() << "'s turn" << endl;
            (*player1).useSkill(player2);
            cout << "------------------\n";
            displayStats(*player1, *player2);
            cout << (*player2).getName() << "'s turn" << endl;
            (*player2).useSkill(player1);
            cout << "------------------\n";
        }
    }
