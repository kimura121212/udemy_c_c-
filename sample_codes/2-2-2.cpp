#include <iostream>
#include <vector>

int main(void){
    std::vector<int> v1 = {2, 5, 1};
    v1.reserve(100);
    std::cout << v1.capacity() << std::endl;
    // ↑reserveした数が返る
    std::cout << v1.size() << std::endl;
    // ↑実際の項目数は3のまま変わらない
    v1.push_back(8);

    v1.shrink_to_fit();
    // ↓shrink_to_fitが使えない場合
    //std::vector<int>(v1).swap(v1);

    std::cout << v1.capacity() << std::endl;
    // ↑v1.size()（==4）と同じ値になる
}
