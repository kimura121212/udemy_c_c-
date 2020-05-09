#include <iostream>
#include <unordered_set>

int main(void){
    std::unordered_set<int> s1;
    s1.insert(1); s1.insert(2); s1.insert(2); s1.insert(5);

    for(auto it = s1.begin(); it != s1.end(); ++it){
        std::cout << "s1: ELEMENT " << *it << std::endl;
    }
}
