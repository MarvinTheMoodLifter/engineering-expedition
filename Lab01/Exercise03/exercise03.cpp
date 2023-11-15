#include <iostream>
#include <string>
#include <vector>

void print(std::string label ,std::vector<int> userVector){
	std::cout << label;
	for (int i=0; i < userVector.size(); i++){
		if (i == userVector.size()-1){
			std::cout << userVector.at(i) << "." << std::endl;
		} else
			std::cout << userVector.at(i) << ", ";
	}
}

int main(){
	return 0;
}
