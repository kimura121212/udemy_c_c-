#include <iostream>
#include <vector>

int main(void){
    std::vector<int> v1;
    for(int i = 0; i < 20; ++i){
        v1.push_back(i);
        std::cout << "v1.size() == " << v1.size()
            << ", v1.capacity() == " << v1.capacity()
            << std::endl;
    }
}
