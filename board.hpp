#include <array>

class Board{
    
    std::array<std::string, 9> board;

    public:
    Board();

    void make_move(int cell, char mark);

    string get_mark(int cell);

};
