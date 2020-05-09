#include <iostream>
#include <vector>

int main(void){
	std::vector<int> v1 = {2, 5, 1};
	for(auto it = v1.begin(); it != v1.end(); ++it){
		std::cout << "ELEMENT: " << *it << std::endl;
	}
}