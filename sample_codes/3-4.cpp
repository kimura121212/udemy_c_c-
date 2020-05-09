#include <iostream> /* */
#include <unordered_map> /* */
#include <string> /* */

int main(void){
    std::unordered_map<std::string, std::string> m1 = { /* */
        {"Hokkaido", "Sapporo"}, {"Iwate", "Morioka"}, {"Miyagi", "Sendai"} /* */
    }; /* */

    // キーを使っての項目取り出し・追加・変更は、[] で行う /* */
    std::cout << m1["Hokkaido"] << std::endl; /* */
    m1["Ibaraki"] = "Mito"; /* */

    // 連想配列のイテレータは、std::pair<キー, 実際の値>を指し示す。 /* */
    // キーが欲しいときは イテレータ->first、 /* */
    // 実際の値が欲しいときは イテレータ->second とする。 /* */
    for(auto itm = m1.begin(); itm != m1.end(); ++itm){ /* */
        std::cout << itm->first << " -> " << itm->second << std::endl; /* */
    } /* */
}
