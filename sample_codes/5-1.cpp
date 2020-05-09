#include <iostream>
#include <string>
#include <map>
#include <functional>

class PlayerInfo{ /* */
private:
    int id_; /* */
    std::string name_; /* */

public:
    PlayerInfo(int id, const std::string & name)
    : id_(id), name_(name) {}

    int id() const{ return id_; }
    void id(int id){ id_ = id; }
    const std::string & name() const{ return name_; }
    void name(const std::string & name){ name_ = name; }
}; /* */

int main(void){ /* */
    std::multimap< int, PlayerInfo, std::greater<int> > table; /* */
    // std::greater<int>を指定し、大きいものが先に並ぶようにする /* */
    table.emplace(121, PlayerInfo(1151, "阿部")); /* */
    table.emplace(84, PlayerInfo(8430, "伊藤")); /* */
    table.emplace(91, PlayerInfo(742, "上田")); /* */
    table.emplace(106, PlayerInfo(598, "遠藤")); /* */
    table.emplace(121, PlayerInfo(662, "小川")); /* */

    for(auto it = table.begin(); it != table.end(); ++it){
        std::cout << it->second.id() << " " << it->second.name() << " [スコア] " << it->first << std::endl;
    }
} /* */
