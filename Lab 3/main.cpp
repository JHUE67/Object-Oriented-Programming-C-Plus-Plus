#include <iostream>
#include "RPG.h"
using namespace std;

int main(){
    RPG defaultChar;
    RPG customChar("Adam", 150, 50, 50, "mage");

    // default character
    cout << "Is default character alive: " << defaultChar.isAlive() << endl;
    defaultChar.updateHealth(0);
    cout << "Is default character alive: " << defaultChar.isAlive() << endl;

    // custom character
    cout << "Is custom character alive: " << customChar.isAlive() << endl;
    customChar.updateHealth(0);
    cout << "Is custom character alive: " << customChar.isAlive() << endl;



}