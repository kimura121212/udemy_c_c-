#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>

int main(void){
    std::stack<int> s; /* */
    std::queue<int> q; /* */

    for(int i = 1; i <= 5; ++i){ /* */
        s.push(i); /* */
        q.push(i); /* */
    } /* */

    std::cout << "STACK:"; /* */
    while(!s.empty()){ /* */
        std::cout << " " << s.top(); /* */
        s.pop(); /* */
    } /* */
    std::cout << std::endl; /* */

    std::cout << "QUEUE:"; /* */
    while(!q.empty()){ /* */
        std::cout << " " << q.front(); /* */
        q.pop(); /* */
    } /* */
    std::cout << std::endl; /* */
}
