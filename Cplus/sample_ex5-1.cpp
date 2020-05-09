#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	map <string, int> score;  // mapのデータ構造を用意する
	string names[] = { "Tom","Bob","Mike" };
	score[names[0]] = 100;          //  キーと値の関連付け１ Tom : 100
	score[names[1]] = 80;           //  キーと値の関連付け２ Bob : 80
	score[names[2]] = 120;          //  キーと値の関連付け３ Mike : 120
	int i;
	for (i = 0; i < 3; i++) {
		cout << names[i] << ":" << score[names[i]] << endl;
	}
	return 0;
}