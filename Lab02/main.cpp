#include "Rational.h"
#include <iostream>
#include <ostream>

int main() {
  Rational r(1, 2);
  // assign test
  r = Rational(1, 4);
  Rational t(2, 3);
  // cout test
  std::cout << "r = " << r << std::endl;
  std::cout << "t = " << t << std::endl;
  // sum test
  Rational sum = r + t;
  std::cout << "r + t = " << sum << std::endl;
  // sum test with int
  // Rational sumint = r + 5;
  // std::cout << "r + 5 = " << sum << std::endl;
  // subtraction test
  Rational sub = r - t;
  std::cout << "r - t = " << sub << std::endl;
  // product test
  Rational pro = r * t;
  std::cout << "r * t = " << pro << std::endl;
  // division test
  Rational div = r / t;
  std::cout << "r / t = " << div << std::endl;
  // comparison test
  if (r == t) {
    std::cout << "r and t are equal (r = t)" << std::endl;
  } else if (r > t) {
    std::cout << "r is greater than t (r > t)" << std::endl;
  } else {
    std::cout << "t is greater than r (t > r)" << std::endl;
  }
  return 0;
}
