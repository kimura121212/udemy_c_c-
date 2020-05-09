#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

int main(void){
    std::vector<int> v1 = {3, 7, 2, 1, 6}; /* */
    std::deque<int> d1 = {3, 7, 2, 1, 6}; /* */

    std::sort(v1.begin(), v1.end()); /* */
    std::sort(d1.begin(), d1.end()); /* */
    
    std::cout << "sorted vector:";
    for(auto iv = v1.begin(); iv != v1.end(); ++iv){
        std::cout << " " << *iv;
    }
    std::cout << std::endl;
    
    std::cout << "sorted deque:";
    for(auto id = d1.begin(); id != d1.end(); ++id){
        std::cout << " " << *id;
    }
    std::cout << std::endl;

    int target = 5; /* */
    if(std::binary_search(v1.begin(), v1.end(), 5)){ /* */
        std::cout << "Found: " << target << std::endl; /* */
    }else{ /* */
        std::cout << "Not found: " << target << std::endl; /* */
    } /* */
}
