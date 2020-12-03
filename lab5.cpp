#include "Human.hpp"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector< Human > people;
    for (int i = 0; i < 2; i++) {
        std::string name;
        cin >> name;
        Human person(name, 0, true, true);
        people.emplace_back(person);
    }
    cout << people.size() << " " << people.capacity() << endl;
    for (int i = 0; i < 2; i++) {
        cout << people[i].getName() << endl;
    }
}
