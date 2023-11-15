// Esercizio 1

#include <iostream>

void f() {
  const int ARRAY_SIZE = 10;
  const int STARTING_INDEX = 2;

  int my_array[ARRAY_SIZE];
  int *my_pointer = &my_array[STARTING_INDEX];

  for (int i = 0; i < ARRAY_SIZE; i++) {
    my_pointer[i - STARTING_INDEX] = i;
    std::cout << my_array[i] << std::endl;
  }
}
void f_illegal() {
  const int ARRAY_SIZE = 10;
  const int STARTING_INDEX = 2;

  int my_array[ARRAY_SIZE];
  int *my_pointer = &my_array[STARTING_INDEX];

  for (int i = 0; i <= ARRAY_SIZE + 10; i++) {
    my_pointer[i - STARTING_INDEX] = i;
    std::cout << my_array[i] << std::endl;
  }
}

int main() {
  f();
  f_illegal();
  return 0;
}
