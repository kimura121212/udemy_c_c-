#include <iostream>
#include <vector>

int main(void){
	std::vector<int> v1 = {2, 5, 1};

	// 末尾の追加・削除は専用のメソッドがあります。
	v1.push_back(3);
	for(auto it = v1.begin(); it != v1.end(); ++it){
		std::cout << "ELEMENT: " << *it << std::endl;
	}
	std::cout << "----" << std::endl;
	
	v1.pop_back();
	std::cout << "SIZE: " << v1.size() << std::endl;
}
