#include <iostream>
#include <deque>

int main(void){
	std::deque<int> d = {3, 5, 9, 2, 1};
	int & ref = d[1];
	std::cout << ref << std::endl;

	d.push_back(4);
	std::cout << ref << std::endl;
	// これは「5」が表示されることが保証されている
}
