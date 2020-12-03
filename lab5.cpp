#include "Human.hpp"
#include <iostream>
#include <list>
#include <vector>
using namespace std;
#pragma once



std::vector< char > foo(std::list< Human >& people)
{
  std::vector<char> petl;

  for (auto itr = people.rbegin(); itr != people.rend(); itr++) {

    itr -> birthday();

    if(itr->isMonster() == true){
      petl.emplace_back('n');
    }
    else
    {
      petl.emplace_back('y');
    }
  }
  return {petl};
}

/*
int main()
{

    list< int > numbers = {};

    numbers.push_back(1);
    numbers.push_back(2);

    numbers.push_front(-1);
    numbers.push_front(-3);
    numbers.push_front(-2);

    for (auto itr = numbers.crbegin(); itr != numbers.crend(); itr++) {
        cout << *itr << endl;
    }

    for (const int e : numbers) {
        cout << e << endl;
    }

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
            people.push_back(person);
        }
    }
    cout << people.size() << " " << people.capacity() << endl;
    for (const Human& e : people) {
        cout << e.getName() << endl;
    }
}
*/