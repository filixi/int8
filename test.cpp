
#include <iostream>

#include "int8.h"

int main() {
  int8 a = 3, b;

  // bind to int8_t reference
  int8_t &x = a;
  const int8_t &y = a;

  // int8_t &z = int8{}; // cant compile

  // arthmetic and assignment
  b = a + 3;
  a + b;

  // compound assignment
  a += 2;

  // relational operation
  if (a<b) {}

  // converts to bool
  if (a) {}

  // cout
  std::cout << a << std::endl; // output : 5

  // cin
  std::cout << "Input b:";
  std::cin >> b;

  // unsigned version
  uint8 this_is_an_unsigned_int_8;

  return 0;
}
