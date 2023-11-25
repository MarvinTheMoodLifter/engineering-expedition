#include "../include/Book.h"
#include "../include/BookShelf.h"
#include <iostream>

int main() {

  Book mybook("David", "Foster Wallace",
              "Una cosa divertente che non farò mai più", "887-521-837-4");
  std::cout << mybook;

  return 0;
}
