#include "../include/BookShelf.h"
#include <algorithm>
#include <stdexcept>

// Default Constructor
BookShelf::BookShelf() : sz{0}, bfr_capacity{0}, elem{nullptr} {}
// Constructor
BookShelf::BookShelf(int s) : sz{0}, bfr_capacity{s} {
  if (s == 0) {
    elem = nullptr;
  } else {
    elem = new Book[s];
  }
}

void BookShelf::push_back(Book mybook) {
  if (sz == bfr_capacity) {
    reserve((bfr_capacity == 0) ? 1 : bfr_capacity * 2);
  }
  elem[sz] = mybook;
  sz++;
}
void BookShelf::pop_back() {
  if (sz > 0) {
    sz--;
  }
}
void BookShelf::reserve(int n) {
  if (n > bfr_capacity) {
    Book *tmp = new Book[n];
    if (elem) {
      std::copy(elem, elem + sz, tmp);
      delete[] elem;
    }
    elem = tmp;
    bfr_capacity = n;
  }
}

// Copy Constructor
BookShelf::BookShelf(const BookShelf &arg)
    : sz{arg.sz}, elem{new Book[arg.sz]} {
  std::copy(arg.elem, arg.elem + sz, elem);
}

// Copy Assignment
BookShelf &BookShelf::operator=(const BookShelf &a) {
  Book *p = new Book[a.sz];
  std::copy(a.elem, a.elem + a.sz, p);
  delete[] elem;
  elem = p;
  sz = a.sz;
  return *this;
}

// Move Constructor
BookShelf::BookShelf(BookShelf &&a) : sz{a.sz}, elem{a.elem} {
  a.sz = 0;
  a.elem = nullptr;
}

// Move Assignment
BookShelf &BookShelf::operator=(BookShelf &&a) {
  delete[] elem;
  elem = a.elem;
  sz = a.sz;
  a.elem = nullptr;
  a.sz = 0;
  return *this;
}

int BookShelf::size() { return sz; }

// Destructor
BookShelf::~BookShelf() { delete[] elem; }

// Overloading const and non const operator[]
// Book &BookShelf::operator[](int n) { return elem[n]; }
// Book BookShelf::operator[](int n) const { return elem[n]; }
