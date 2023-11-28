#include "../include/Book.h"
#include "../include/BookShelf.h"
#include <iostream>
#include <ostream>

int main() {

  Book myBook("David", "Foster Wallace",
              "Una cosa divertente che non farò mai più", "887-521-837-4");
  std::cout << myBook;
  Book sameBook("David", "Foster Wallace",
                "Una cosa divertente che non farò mai più", "887-521-837-4");
  Book differentBook("Douglas", "Adams",
                     "The Hitchhiker\'s Guide to the Galaxy", "990-325-983-5");
  if (myBook == sameBook) {
    std::cout << "myBook and sameBook are the same book" << std::endl;
  } else {
    std::cout << "Error: myBook and sameBook must be the same" << std::endl;
  }
  if (myBook != differentBook) {
    std::cout << "myBook and differentBook are actually different" << std::endl;
  } else {
    std::cout << "Error: myBook and differentBook must be different"
              << std::endl;
  }

  BookShelf myBookShelf(3);
  myBookShelf.push_back(myBook);
  myBookShelf.push_back(sameBook);
  myBookShelf.push_back(differentBook);
  myBookShelf.pop_back();
  for (int i = 0; i < myBookShelf.size(); i++) {
    std::cout << myBookShelf[i];
  }

  return 0;
}
