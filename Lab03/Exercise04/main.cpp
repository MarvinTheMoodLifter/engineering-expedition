#include "MyVector.h"
#include <iostream>

int main() {
  MyVector myVector{3};
  myVector[0] = 12;
  myVector.safe_set(13, 4);
  std::cout << myVector[4] << std::endl;
  return 0;
}
