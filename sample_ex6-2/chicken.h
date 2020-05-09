#ifndef _CHICKEN_H_
#define _CHICKEN_H_

#include "bird.h"

//  鶏クラス
class CChicken : public CBird {
public:
	//  鳴く関数（仮想関数）
	void sing() { cout << "コケコッコー" << endl; }
	//  飛ぶ関数
	void fly() { cout << "鶏は飛べません" << endl; }
};

#endif // _CHICKEN_H_
