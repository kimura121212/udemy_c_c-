#include <iostream>
#include <array>

int main(void){
    // テンプレートの引数で、何項目の配列であるかを指定しておく必要がある
    std::array<int, 3> a1 = {2, 5, 1};

    // sizeメソッドも使える
    std::cout << "SIZE: " << a1.size() << std::endl;

    // イテレータも使える
    for(auto it = a1.begin(); it != a1.end(); ++it){
        std::cout << "ELEMENT: " << *it << std::endl;
    }
}
