#ifndef BOOKSHELF_H
#define BOOKSHELF_H
#include "Book.h"
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
  // Add a Book type object to the end of the shelf
  void push_back(Book mybook);
  // Removes the last book from the shelf
  void pop_back();
  // Reserve space for 'n' books on the shelf
  void reserve(int n);

  // Copy Constructor
  BookShelf(const BookShelf &arg);
  // Copy Assignment
  BookShelf &operator=(const BookShelf &a);

  // Move Constructor
  BookShelf(BookShelf &&a);
  // Move Assignment
  BookShelf &operator=(BookShelf &&a);

  // Return the number of elements inside the shelf
  int size();

  // Destructor
  ~BookShelf();
};

#endif // BOOKSHELF_H
