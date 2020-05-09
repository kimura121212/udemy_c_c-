#include <iostream>
#include <deque>

int main(void){
	std::deque<int> d = {3, 5, 9, 2, 1};
	std::deque<int>::iterator it = d.begin() + 1;
	std::cout << *it << std::endl;

	d.push_back(4);
	std::cout << *it << std::endl;
	// 「5」が表示されるとは限らない
	// （ただし、表示されるという実装も多いかも）
}
