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
    if(itr->isMonster() == true){
      pet_likes.push_back('n');
    }
    else
    {
      pet_likes.push_back('y');
    }
  }
  return pet_likes;
}