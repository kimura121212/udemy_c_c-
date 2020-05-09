#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>

int main(void){
    std::priority_queue<int> p; /* */

    p.push(3); /* */
    p.push(7); /* */
    p.push(2); /* */
    p.push(1); /* */
    p.push(5); /* */

    std::cout << "PriorityQueue:"; /* */
    while(!p.empty()){ /* */
        std::cout << " " << p.top(); /* */
        p.pop(); /* */
    } /* */
    std::cout << std::endl; /* */
}
