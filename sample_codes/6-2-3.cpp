#include <iostream>
#include <vector>
#include <algorithm>

int main(void){
    std::vector<int> v1 = {3, 7, 2, 1, 6}; /* */

    // 最大値を指すイテレータを返す。 /* */
    auto it = std::max_element(v1.begin(), v1.end()); /* */
    std::cout << "Max: v1[" << (it-v1.begin()) << "] == " << *it << std::endl; /* */
}
