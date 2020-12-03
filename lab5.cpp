#include "Human.hpp"
#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main()
{

    list< int > numbers = {};

    numbers.push_back(1);
    numbers.push_back(2);

    numbers.push_front(-1);
    numbers.push_front(-3);
    numbers.push_front(-2);
    list< int >::iterator it = numbers.begin();
    for (it = numbers.begin(); it != numbers.end(); it++) {
        cout << *it << endl;
    }
    /*
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
  vector< Human >::iterator it = people.begin();
  for (it = people.begin(); it != people.end(); it++) {
      cout << it->getName() << endl;
  }
  */
}
