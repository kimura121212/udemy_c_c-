#include <iostream>
#include <vector>

int main(void){
	std::vector<int> v1 = {2, 5, 1};

	// 末尾以外の追加・削除は、位置をイテレータで指定しないとなりません。
	// ただvectorのイテレータは加減算ができるので、例えば「先頭項目の2個先」
	// （つまり3番目）を指定したければ、v1.begin() + 2 のようにします。
	v1.insert(v1.begin() + 2, 3); // この段階では {2, 5, 3, 1}
	v1.erase(v1.begin()); // この段階では {5, 3, 1}
	for(auto it = v1.begin(); it != v1.end(); ++it){
		std::cout << "ELEMENT: " << *it << std::endl;
	}
}
