#include <iostream>
#include <vector>

int main(void){
	std::vector<int> v1 = {2, 5, 1};
	// std::vector<...>::size_typeは、項目数を表すための整数型（環境依存）
	// 大抵の環境では（定義上は別物だが）std::size_tと書いても同じくなる
	for(std::vector<int>::size_type i = 0; i < v1.size(); ++i){
		std::cout << "ELEMENT " << i << ": " << v1[i] << std::endl;
	}
}
