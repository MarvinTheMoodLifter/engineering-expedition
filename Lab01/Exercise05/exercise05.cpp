#include <iostream>
#include <string>
#include <vector>

int maxInt;

void print(std::string label ,std::vector<int> userVector){
	std::cout << label;
	for (int i=0; i < userVector.size(); i++){
		if (i == userVector.size()-1){
			std::cout << userVector.at(i) << "." << std::endl;
		} else
			std::cout << userVector.at(i) << ", ";
	}
}

void fibonacci(int x, int y, std::vector<int> &v, int n){

	v.clear();
	int count = 0;

	int sum = x;
	for (int i = 0; i < n; i++ ){
		if (i == 0) {
			v.push_back(x);
			continue;
		} 
		if (i == 1) {
			v.push_back(y);
			continue;
		}
		sum += v[i-1];
		v.push_back(sum);
		if (v[i] == 0 && count == 0){
			maxInt = v[i-1];
			count++;
		}
	}
}

int main(){
	int x = 1;
	int y = 2;
	int n = 100;
	std::vector<int> myVector;
	fibonacci(x, y, myVector, n);
	std::string message = "My Fibonacci string: ";
	print(message, myVector);
	std::cout << "An approximation of the max int using fibonacci function is: " << maxInt << std::endl;
	return 0;
}
