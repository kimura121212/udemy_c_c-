#include <stdio.h>
#include <stdlib.h>

#define SIZE    3

void main() {
	int* p1 = NULL;
	double *p2 = NULL;
	int i;
	// 配列の生成　指定されたバイト数だけメモリを確保する
	// int3つ分のメモリを開放
	p1 = (int*)malloc(sizeof(int)*SIZE);
	// double3つ分のメモリを開放
	p2 = (double*)malloc(sizeof(double)*SIZE);
	// 値の代入
	for (i = 0; i < SIZE; i++) {
		p1[i] = i;
		p2[i] = i / 10.0;
	}
	// 結果の出力
	for (i = 0; i < SIZE; i++) {
		printf("p1[%d]=%d  p2[%d]=%f\n", i, p1[i], i, p2[i]);
	}
	// メモリの開放 やりっぱなしはだめなので
	free(p1);
	free(p2);
}