#include <iostream>
#include <vector>

int main(void){
	std::vector<int> v = {3, 5, 9, 2, 1};
	std::vector<int>::iterator it = v.begin() + 1;
	std::cout << *it << std::endl;

	v.push_back(4);
	std::cout << *it << std::endl;
	// 5でない値が表示されるかも!
}
