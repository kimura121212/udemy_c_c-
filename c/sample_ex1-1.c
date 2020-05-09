#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	int a, b;
	// 乱数の初期化
	srand((unsigned)time(NULL));

	// srandに当たるパラメータが同じだと常に同じ乱数が出る
	//srand(0);
	// 1~10までの乱数を発生させる
	a = rand() % 10 + 1;
	b = rand() % 10 + 1;
	// 計算結果出力
	printf("%d + %d = %d\n", a, b, a + b);
}