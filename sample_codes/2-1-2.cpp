#include <iostream>
#include <vector>

int main(void){
	std::vector<int> v1 = {2, 5, 1};
	std::cout << v1[2] << std::endl;
	// std::cout << v1[3] << std::endl; // 結果は不定（ただし例外が出るとも限らない）
	std::cout << v1.at(2) << std::endl;
	// std::cout << v1.at(3) << std::endl; // 例外が発生する
	v1.at(1) = 3; // [] でも at でも、代入もできる
}