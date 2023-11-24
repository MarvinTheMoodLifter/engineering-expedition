#include "../include/Book.h"
#include "../include/BookShelf.h"
#include <iostream>

int main() {
  Book myBook("Gino", "Pollo", "I culi della Caledonia", "1234567890123", true);
  BookShelf myShelf(10);
  myShelf.push_back(myBook);
  std::cout << "push_back OK" << std::endl;
  myShelf.pop_back();
  std::cout << "pop_back OK" << std::endl;

  return 0;
}
