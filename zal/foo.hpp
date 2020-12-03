#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    for (Human& e : people)
  {
    e.birthday();
  }
  vector<char> pet_likes;
  for (auto itr = people.crbegin(); itr != people.crend(); itr++) {
    char ch = itr->isMonster();
    pet_likes.push_back(ch);
  }
  return pet_likes;
}