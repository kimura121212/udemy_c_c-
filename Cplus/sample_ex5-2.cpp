#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
	set<string> names;  // set のデータ構造を用意する
						//  値を代入
	names.insert("Tom");
	names.insert("Mike");
	names.insert("Mike");   //  同じ名前をダブって代入させる
	names.insert("Bob");
	// 登録されている全データを表示
	set<string>::iterator it; //  イテレータを用意
	for (it = names.begin(); it != names.end(); it++) {
		cout << *it << endl;
	}
	//  Bob,Steveがデータ内に存在するかを調べる
	string n[] = { "Bob","Steve" };
	int i;
	for (i = 0; i < 2; i++) {
		it = names.find(n[i]);
		if (it == names.end()) {
			//  データがset内に存在しない
			cout << n[i] << " is not in a set." << endl;
		}
		else {
			//  データがset内に存在する
			cout << n[i] << " is in a set." << endl;
		}
	}
	return 0;
}