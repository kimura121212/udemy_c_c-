#include "sample.h"

int main() {
	Sample* p1, *p2;
	p1 = new Sample(1); //  引数のあるコンストラクタ
	p2 = new Sample();  //  デフォルトコンストラクkたの呼び出し（エラー出る）
	return 0;
}