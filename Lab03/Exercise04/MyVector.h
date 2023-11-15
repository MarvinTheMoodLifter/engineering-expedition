#include <algorithm>

class MyVector {
private:
  int sz;
  double *elem;

public:
  // Constructor
  MyVector(int s);

  // Overloading const and non const operator[]
  double &operator[](int n);
  double operator[](int n) const;

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

  // Destructor
  ~MyVector();
};
