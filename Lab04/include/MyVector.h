// Esercizio 4
#ifndef MYVECTOR_H
#define MYVECTOR_H

#include <algorithm>

class MyVector {
private:
  int sz;
  int bfr_capacity;
  double *elem;

public:
  // Default Constructor
  MyVector();
  // Constructor
  MyVector(int s);

  // Overloading const and non const operator[]
  double &operator[](int n);
  double operator[](int n) const;
  // Access with boundary check
  double &at(int n);
  void push_back(double n);
  void pop_back();
  void reserve(int n);

  // Copy Constructor
  MyVector(const MyVector &arg);
  // Copy Assignment
  MyVector &operator=(const MyVector &a);

  // Move Constructor
  MyVector(MyVector &&a);
  // Move Assignment
  MyVector &operator=(MyVector &&a);

  // safe_get and safe_set
  double safe_get(int index);
  void safe_set(double value, int index);
  int size();

  // Destructor
  ~MyVector();
};

#endif // MYVECTOR_H
