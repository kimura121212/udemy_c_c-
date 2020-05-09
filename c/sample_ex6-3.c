#include <stdio.h>
#include <stdlib.h>

void main() {
	FILE *file;                                   // ファイルポインタ（読み込み用）
	int c;                                        // 読み込む文字のコード
	file = fopen("./sample.txt", "r");    // ファイルを読み込み用にオープン
	if (file == NULL) {                            // オープン失敗時
		printf("ファイルが開ません\n");                // エラーメッセージ
		exit(1);                                            // 異常終了
	}
	//    ファイルデータを読み込む
	while ((c = fgetc(file)) != EOF) {
		printf("%c", (char)c);
	}
	fclose(file);          // ファイルをクローズ
}