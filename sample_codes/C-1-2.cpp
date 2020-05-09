#include <iostream>
#include <vector>

int main(void){
	std::vector<int> v = {3, 5, 9, 2, 1};
	int & ref = v[1];
	std::cout << ref << std::endl;

	v.push_back(4);
	std::cout << ref << std::endl;
	// 5でない値が表示されるかも!
}
