#include <iostream>
#include <vector>

int main(void){
	std::vector<int> v1 = {2, 5, 1};
	// イテレータそれ自身は「項目を指すもの」であり、
	// 「++」演算子で一つ進める、などの処理が行える。
	// 項目そのものが必要な場合は「*」演算子を使う（ポインタのように）。
	for(std::vector<int>::iterator it = v1.begin(); it != v1.end(); ++it){
		std::cout << "ELEMENT: " << *it << std::endl;
	}
}