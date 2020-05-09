#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <functional> // std::greater, std::function で利用

class PlayerInfo{
private:
    int id_;
    std::string name_;

public:
    PlayerInfo(int id, const std::string & name)
    : id_(id), name_(name) {}

    int id() const{ return id_; }
    void id(int id){ id_ = id; }
    const std::string & name() const{ return name_; }
    void name(const std::string & name){ name_ = name; }
};

class PlayerDataBase{
    using score_table_type = std::multimap< int, PlayerInfo, std::greater<int> >; /* */
    // std::greater<int>を指定し、大きいものが先に並ぶようにする /* */
    using player_table_type = std::unordered_map<int, score_table_type::iterator>; /* */
    // unordered_mapにmultimapのイテレータを保持させているのだが、 /* */
    // 逆はすべきではない。 /* */
    // 要素の追加をしたとき、unorderedではないsetやmapのイテレータは /* */
    // 無効化されないのだが、unorderedなsetやmapのイテレータは無効化されうる。 /* */
private:
    score_table_type score_table_; // score -> (id, name)
    player_table_type player_table_; // id -> [Element in score_table_]

public:
    void add_player(int id, const std::string & name, int score){
        score_table_type::iterator score_entry = score_table_.emplace(score, PlayerInfo(id, name));
        std::pair<player_table_type::iterator, bool> player_entry = player_table_.emplace(id, score_entry);
        if(!player_entry.second){
            // 追加に失敗した場合
            // （もし当該idがすでに存在しているなら追加はされないため）
            score_table_.erase(score_entry);
        }
    }

    const PlayerInfo & find_player(int id) const{
        player_table_type::const_iterator it = player_table_.find(id);
        if(it == player_table_.end()){
            throw std::runtime_error("指定されたIDのプレイヤーは存在しません");
        }
        return it->second->second;
        // it->second が、score_table_type::iterator であるので
        // さらにその ->second を取ると PlayerInfo を指し示せる
    }

    void update_score(int id, int newscore){
        player_table_type::iterator it = player_table_.find(id);
        if(it == player_table_.end()){
            throw std::runtime_error("指定されたIDのプレイヤーは存在しません");
        }
        // キーの値（この場合はスコア）は直接書き換えられないので
        // 一度削除してから追加し直す
        PlayerInfo p_new = it->second->second;
        score_table_.erase(it->second);
        score_table_.emplace(newscore, p_new);
    }

    // 引数として与えられた関数に、
    // スコア1位のプレイヤー、スコア2位のプレイヤー、…と順に値を渡す
    void ranking(std::function<void(int, const PlayerInfo & )> action) const{
        for(score_table_type::const_iterator it = score_table_.begin(); it != score_table_.end(); ++it){
            action(it->first, it->second);
        }
    }
};

int main(void){
    PlayerDataBase pdb;
    pdb.add_player(1151, "阿部", 121);
    pdb.add_player(8430, "伊藤", 84);
    pdb.add_player(742, "上田", 91);
    pdb.add_player(598, "遠藤", 106);
    pdb.add_player(662, "小川", 121);
    pdb.add_player(1151, "加藤", 100); // 追加されない（IDが重複）

    std::cout << "ランキング" << std::endl;
    pdb.ranking([](int score, const PlayerInfo & p){
        std::cout << p.id() << " " << p.name() << " [スコア] " << score << std::endl;
    });

    pdb.update_score(742, 121);
    pdb.update_score(8430, 109);

    std::cout << "ランキング" << std::endl;
    pdb.ranking([](int score, const PlayerInfo & p){
        std::cout << p.id() << " " << p.name() << " [スコア] " << score << std::endl;
    });
}
