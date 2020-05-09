#include <iostream>
#include <vector>

int main(){
	std::vector<int> v = {3, 5, 9, 2, 1};
	v.push_back(4);
	for(auto it = v.begin(); it != v.end(); ++it){
		std::cout << *it << std::endl;
	}
}
