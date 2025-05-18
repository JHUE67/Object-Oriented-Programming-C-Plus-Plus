#include <iostream>
#include "RPG.h"
using namespace std;

int main(){
    RPG p1 = RPG("Wiz", 70, 45, 15, "mage");
    RPG p2 = RPG();

    gameLoop(&p1, &p2);
    displayEnd(p1, p2);
    return 0;
}