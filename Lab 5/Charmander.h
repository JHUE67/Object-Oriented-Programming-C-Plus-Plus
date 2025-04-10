#include <string>
#include <vector>
#include "Pokemon.h"
using namespace std;

class Charmander : public Pokemon{
    public:
        Charmander();
        Charmander(string name, int p, int att, int def, vector<string> t, vector<string> s);
        void speak();
        void printStats();
};
