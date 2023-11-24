#ifndef BOOKSHELF_H
#define BOOKSHELF_H
#include "../include/Book.h"
#include <algorithm>

class BookShelf {
private:
  int sz;
  int bfr_capacity;
  Book *elem;

public:
  // Default Constructor
  BookShelf();
  // Constructor
  BookShelf(int s);

  // Overloading const and non const operator[]
  Book &operator[](int n);
  Book operator[](int n) const;
  // Access with boundary check
  Book &at(int n);
  void push_back(Book mybook);
  void pop_back();
  void reserve(int n);

  // Copy Constructor
  BookShelf(const BookShelf &arg);
  // Copy Assignment
  BookShelf &operator=(const BookShelf &a);

  // Move Constructor
  BookShelf(BookShelf &&a);
  // Move Assignment
  BookShelf &operator=(BookShelf &&a);

  int size();

  // Destructor
  ~BookShelf();
};

#endif // BOOKSHELF_H
