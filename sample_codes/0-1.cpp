#include <vector> /* */
#include <iostream> /* */

int main(void){
	std::vector<int> v1; // これは「int型を格納する可変長配列」/* */
	std::vector<double> v2; // これは「double型を格納する可変長配列」/* */

	v1.push_back(22);
	v2.push_back(22);

	std::cout << v1[0] / 5 << std::endl;
	std::cout << v2[0] / 5 << std::endl;
}
