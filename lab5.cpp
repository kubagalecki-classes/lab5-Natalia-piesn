#include "Human.hpp"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector< Human > people;
    string          name;
    int             a = 1;
    while (a == 1) {
        cin >> name;
        if (name == "end") {
            a = 0;
        }
        else if (name == "pop") {
            people.pop_back();
        }
        else {
            Human person(name, 0, true, true);
            people.emplace_back(person);
        }
    }
    cout << people.size() << " " << people.capacity() << endl;
    for (unsigned int i = 0; i < people.size(); i++) {
        cout << people[i].getName() << endl;
    }
}
