#include <iostream>
#include <unordered_set>

int main(void){
    // 3-2.cpp をunordered_setからunordered_multisetにしただけ
    std::unordered_multiset<int> ms1;
    ms1.insert(1); ms1.insert(2); ms1.insert(2); ms1.insert(5);

    for(auto itm = ms1.begin(); itm != ms1.end(); ++itm){
        std::cout << "ms1: ELEMENT " << *itm << std::endl;
    }
}
