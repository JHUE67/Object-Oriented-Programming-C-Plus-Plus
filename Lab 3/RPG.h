#ifndef RPG_H
#define RPG_H
#include <string>

using namespace std;

const int SKILL_SIZE = 2;

class RPG{
    public:
    //constructors
    RPG();// default constructor

    RPG(string name, int health, int strength, int defense, string type);
    
    void setSkills();
    void printActions(string , RPG);
    void updateHealth(int);
    void attack(RPG*);
    void useSkill(RPG*);
    const bool isAlive();
    const string getName();
    const int getHeatlh();
    const int getStrength();
    const int getDefense();
    
    private:
    string name;
    int health;
    int strength;
    int defense;
    string type;
    string skills[SKILL_SIZE];
};

#endif