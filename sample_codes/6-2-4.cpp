#include <iostream>
#include <vector>
#include <algorithm>

int main(void){
    std::vector<int> v1 = {3, 7, 2, 1, 6}; /* */

    // std::max_elementの第三引数に関数を与えると、 /* */
    // その関数は「二つの値を比較し、前者が小さいならtrue、そうでなければfalse」を /* */
    // 意味する関数とみなされる。 /* */
    // この例では「値を5で割った余り」で比較している。 /* */
    // std::sortでも同様の指定が可能。 /* */
    auto it = std::max_element(v1.begin(), v1.end(), [](int a, int b){ /* */
        return (a % 5) < (b % 5); /* */
    }); /* */
    std::cout << "Max: v1[" << (it-v1.begin()) << "] == " << *it << std::endl; /* */
}
