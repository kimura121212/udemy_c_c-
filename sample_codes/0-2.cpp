#include <iostream>
#include <string>
template <class T>
T add(const T & a, const T & b){
    return a + b;
}

int main(void){
    int i1 = 1, i2 = 2;
    std::string s1 = "1", s2 = "2";
    std::cout << add(i1, i2) << std::endl;
    std::cout << add(s1, s2) << std::endl;
    // 前者はintの+、後者はstringの+
}
