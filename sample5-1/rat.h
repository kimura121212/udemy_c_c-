#ifndef _RAT_H_
#define _RAT_H_

class CRat {
public:
	//  コンストラクタ
	CRat();
	//  デストラクタ
	~CRat();
	//  ネズミの数出力
	static void showNum();
	//  ネズミがなく
	void squeak();
private:
	//  ネズミの番号
	int m_id;
	//  ネズミの数
	static int m_count;
};

#endif /* _RAT_H_ */