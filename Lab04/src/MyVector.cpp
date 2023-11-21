// Lab04

#include "../include/MyVector.h"
#include <algorithm>
#include <stdexcept>

// Default Constructor
MyVector::MyVector() : sz{0}, bfr_capacity{0}, elem{nullptr} {}
// Constructor
MyVector::MyVector(int s) : sz{s}, bfr_capacity{s}, elem{new double[s]} {
  if (s == 0)
    elem = nullptr;
}

// Overloading const and non const operator[]
double &MyVector::operator[](int n) { return elem[n]; }
double MyVector::operator[](int n) const { return elem[n]; }

double &MyVector::at(int n) { return elem[n]; }

void MyVector::push_back(double n) {
  if (sz == bfr_capacity) {
    reserve((bfr_capacity == 0) ? 1 : bfr_capacity * 2);
  }
  elem[sz] = n;
  sz++;
}
void MyVector::pop_back() {
  if (sz > 0) {
    sz--;
  }
}
void MyVector::reserve(int n) {
  if (n > bfr_capacity) {
    double *tmp = new double[n];
    if (elem) {
      std::copy(elem, elem + sz, tmp);
      delete[] elem;
    }
    elem = tmp;
    bfr_capacity = n;
  }
}

// Copy Constructor
MyVector::MyVector(const MyVector &arg) : sz{arg.sz}, elem{new double[arg.sz]} {
  std::copy(arg.elem, arg.elem + sz, elem);
}

// Copy Assignment
MyVector &MyVector::operator=(const MyVector &a) {
  double *p = new double[a.sz];
  std::copy(a.elem, a.elem + a.sz, p);
  delete[] elem;
  elem = p;
  sz = a.sz;
  return *this;
}

// Move Constructor
MyVector::MyVector(MyVector &&a) : sz{a.sz}, elem{a.elem} {
  a.sz = 0;
  a.elem = nullptr;
}

// Move Assignment
MyVector &MyVector::operator=(MyVector &&a) {
  delete[] elem;
  elem = a.elem;
  sz = a.sz;
  a.elem = nullptr;
  a.sz = 0;
  return *this;
}

// safe_get
double MyVector::safe_get(int index) {
  if (index < sz) {
    return *(elem + index - 1);
  } else {
    throw std::invalid_argument("Index out of range");
  }
}
// safe_set
void MyVector::safe_set(double value, int index) {
  if (index < sz && index >= 0) {
    elem[index] = value;
  } else {
    throw std::invalid_argument("Index out of range");
  }
}

int MyVector::size() { return sz; }

// Destructor
MyVector::~MyVector() { delete[] elem; }
