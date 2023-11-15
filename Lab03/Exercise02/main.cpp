// Esercizio 2
#include <iostream>
#include <ostream>
constexpr int ARRAY_SIZE = 9;

int print_array_length(double a[ARRAY_SIZE]);

int main() {
  double my_double_array[ARRAY_SIZE];
  std::cout << "Main array size: " << sizeof(my_double_array) / sizeof(double)
            << std::endl;
  std::cout << print_array_length(my_double_array) << std::endl;
  return 0;
}

int print_array_length(double a[ARRAY_SIZE]) { return sizeof(&a); }

// Passandogli la reference dell'array allora la funzione può conoscerne la
// dimensione
// int print_array_length(double (&a)[ARRAY_SIZE]) { return sizeof(a); }
