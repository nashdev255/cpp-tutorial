#include <iostream>
#include "template.hpp"

int main() {
  Vector2<double> v1(2.5, 2);
  Vector2<double> v2(2.5, 4);
  double v = v1 * v2;

  std::cout << v << std::endl;

  return 0;
}
