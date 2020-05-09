#include <iostream> /* */
#include <vector> /* */

int main(void){
	std::vector<int> v1 = {2, 5, 1}; /* */

	// assign：新規に値を割り当てる
	// コンストラクタと同じような引数が使えます（一部のみ）。
	v1.assign(5, 3); // v1を、5個の「3」がある状態にする（元の内容は破棄） /* */

	// resize：項目数を変更する
	// 項目数が増える場合、第2引数の値で埋めます（省略も可能）。
	v1.resize(8, 7); // v1の項目数を8にする。追加分は「7」で埋める /* */

	for(auto it = v1.begin(); it != v1.end(); ++it){ /* */
		std::cout << "ELEMENT: " << *it << std::endl; /* */
	} /* */
}