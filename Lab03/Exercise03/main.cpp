#include <iostream>

void print_reference(const int &i, const double &d) {
	std::cout << "Integer = " << i << std::endl << "Double = " << d << std::endl;
}
void print_pointer(int *i, double *d) {
	std::cout << "Integer = " << *i << std::endl << "Double = " << *d << std::endl;
}

int main() {
	int my_int = 12;
	double my_double = 25.5;
	print_reference(my_int, my_double);
	print_pointer(&my_int, &my_double);
}
