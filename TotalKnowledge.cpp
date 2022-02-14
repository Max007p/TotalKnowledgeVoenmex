#include <iostream>
#include <vector>
#include "Accountant.h"

using namespace std;

int main()
{
    vector<Human*> humans;
    Human* accountant1 = new Accountant(500, "Voenmex", 35, "Max", 1);
    Human* accountant2 = new Accountant(500, "Voenmex", 35, "Igorb", 2);
    Human* accountant3 = new Accountant(500, "Voenmex", 35, "Vlad", 3);
    humans.push_back(accountant1);
    humans.push_back(accountant2);
    humans.push_back(accountant3);
    for (vector<Human*>::iterator iter = humans.begin(); iter < humans.end(); iter++)
    {
        Accountant* value = (Accountant*)*iter;
        cout << value->getName() << " " << value->getPriority() << endl;
        value->saySomething();
        delete value;
    }
    humans.clear();

    return 0;
}