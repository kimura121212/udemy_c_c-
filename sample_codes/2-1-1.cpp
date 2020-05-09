#include <iostream> /* */
#include <vector> /* */
#include <utility> /* */
/* */
int main(void){
	// コンストラクタ：私がよく使うのはこんなところ /* */
	std::vector<int> v1 = {2, 5, 1}; // {2, 5, 1}という3項目のvector [C++11] /* */
	std::vector<int> v2(10); // 10項目（v[0]～v[9]）を用意 /* */
	std::vector<int> v3(10, 3); // 10項目（v[0]～v[9]）を用意し、すべて3で初期化 /* */
	std::vector<int> v4(v1); // v1の内容をコピー /* */
	std::vector<int> v5(std::move(v3)); // v3の内容をv5へ移動（v3はもうアクセスしないことが前提）[C++11] /* */
	/* */
	// 基本的な情報 /* */
	std::cout << v1.size() << std::endl; // vの項目数 この場合は3 /* */
	const int * p = v1.data(); //  データを格納しているポインタを得る（C言語向け関数を使う場合などに利用） /* */
}
