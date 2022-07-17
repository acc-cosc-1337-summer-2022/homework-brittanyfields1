//h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
#include <iostream>
#include <string>
#include <vector>

class TicTacToe
{
protected:
    std::vector<std::string> pegs;
    virtual bool check_column_win()=0;	
    virtual bool check_row_win()=0;
    virtual bool check_diagonal_win()=0;

public:
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const{return player;}
    void display_board() const;
    std::string get_winner() const{return winner;}
    TicTacToe(int size);
private:
    std::string player;
    void clear_board();
    void set_next_player();
    bool check_board_full();
    void set_winner();
    std::string winner;
    //can call either one of those methods

};

#endif

