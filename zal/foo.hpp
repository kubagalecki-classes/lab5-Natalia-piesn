#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

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