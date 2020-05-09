#include <iostream>
#include <string>
#include <set>

class Player{ /* */
private:
    int id_; /* */
    std::string name_; /* */
    int score_; /* */

public:
    Player(int id, const std::string & name, int score)
    : id_(id), name_(name), score_(score) {}

    int id() const{ return id_; }
    void id(int id){ id_ = id; }
    const std::string & name() const{ return name_; }
    void name(const std::string & name){ name_ = name; }
    int score() const{ return score_; }
    void score(int score){ score_ = score; }

    // （unorderedでない）setのテンプレートの第二引数は、 /* */
    // 比較を行うためのクラスを与える。 /* */
    // 「そのクラスのインスタンス(要素1, 要素2)」を /* */
    // 評価したとき、「要素1が要素2よりも先に来るなら /* */
    // true」となる必要がある。 /* */
    struct Comparison{ /* */
        bool operator()(const Player & p1, const Player & p2){ /* */
            return p1.score_ > p2.score_; /* */
        } /* */
    }; /* */
}; /* */

int main(void){ /* */
    std::multiset<Player, Player::Comparison> table; /* */
    table.emplace(1151, "阿部", 121); /* */
    table.emplace(8430, "伊藤", 84); /* */
    table.emplace(742, "上田", 91); /* */
    table.emplace(598, "遠藤", 106); /* */
    table.emplace(662, "小川", 121); /* */

    for(auto it = table.begin(); it != table.end(); ++it){
        std::cout << it->id() << " " << it->name() << " [スコア] " << it->score() << std::endl;
    }
} /* */
