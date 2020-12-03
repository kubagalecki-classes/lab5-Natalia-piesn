#include "Human.hpp"
#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main()
{
    list< int > numbers = {};
    cout << numbers.front() << " " << numbers.back() << endl;

    numbers.push_back(1);
    numbers.push_back(2);
    cout << numbers.front() << " " << numbers.back() << endl;
    cout << &numbers.front() << " " << &numbers.back() << endl;

    numbers.push_front(-1);
    numbers.push_front(-2);
    numbers.push_front(-3);
    cout << numbers.front() << " " << numbers.back() << endl;
    cout << &numbers.front() << " " << &numbers.back() << endl;
    
    /*vector< Human > people;
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
            people.push_back(person);
        }
    }
    cout << people.size() << " " << people.capacity() << endl;
    for (unsigned int i = 0; i < people.size(); i++) {
        cout << people[i].getName() << endl;
    }
    */
}
