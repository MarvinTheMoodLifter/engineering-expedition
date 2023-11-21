#include "../include/MyVector.h"
#include <iostream>
#include <stdexcept>

int main() {
  // default constructor test
  MyVector test1;

  // push_back function test
  test1.push_back(2.1);
  test1.push_back(3.5);
  test1.push_back(5.2);

  // [] operator test
  std::cout << "First element (2.1): " << test1[0] << std::endl;

  // pop_back function test
  test1.pop_back();
  std::cout << "New size after pop_back(2): " << test1.size() << std::endl;

  test1.reserve(10);
  try {
    test1.at(5) = 12.23;
    std::cout << "Fifth element (12.23): " << test1.at(5) << std::endl;
    test1.at(15) = 38.01;
    std::cout << "Fifteenth element (38.01): " << test1.at(15) << std::endl;
  } catch (const std::invalid_argument &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  // Assignment and constructor copy test
  MyVector test2 = test1;
  MyVector test3;
  test3 = test1;

  // safe_get and safe_set functions test
  try {
    double value = test1.safe_get(2);
    std::cout << "Safe get at index 2" << value << std::endl;
    test1.safe_set(100.0, 3);
    std::cout << "After safe_set, element at index 2: " << test1.safe_get(2)
              << std::endl;
    test1.safe_set(200.0, 20);
  } catch (const std::invalid_argument &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  return 0;
}
