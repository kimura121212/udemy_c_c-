#include <iostream>
#include <vector>
#include <algorithm>

int main(void){
    std::vector<int> v1 = {3, 7, 2, 1, 6}; /* */

    // 第三引数に条件を関数で与える（この場合は「偶数」）。 /* */
    // 最初に見つかったものがイテレータで返る。 /* */
    auto it = std::find_if(v1.begin(), v1.end(), [](int x){ return x % 2 == 0; }); /* */
    if(it == v1.end()){ /* */
        // 見つからなかったときは、検索範囲の終端が返る。 /* */
        std::cout << "Not found: Even number" << std::endl; /* */
    }else{ /* */
        std::cout << "Found: Even number (" << *it << ")" << std::endl; /* */
    } /* */
}
