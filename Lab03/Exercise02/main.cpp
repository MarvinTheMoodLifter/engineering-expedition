#include <iostream>
constexpr int ARRAY_SIZE = 9;

// void print_array_length(double a[ARRAY_SIZE]) {
//   std::cout << sizeof(a) << std::endl;
// }
// Scritta così la funzione dà errore: "‘sizeof’ on array function parameter ‘a’
// will return size of ‘double*’"
// Ho provato poi a passare a sizeof() la reference dell'array, ma stampa una
// dimensione errata (1 valore in meno rispetto all'array)
void print_array_length(double a[ARRAY_SIZE]) {
  std::cout << "print_array_length function array size: " << sizeof(&a)
            << std::endl;
}

int main() {
  double my_array[ARRAY_SIZE];
  std::cout << "Main array size: " << sizeof(my_array) / 8 << std::endl;
  print_array_length(my_array);
  return 0;
}
