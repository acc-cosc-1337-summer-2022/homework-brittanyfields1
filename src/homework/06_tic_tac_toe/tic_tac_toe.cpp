//cpp
#include "tic_tac_toe.h"
#include<string>
#include<memory>
#include <iostream>

using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::unique_ptr;
using std::make_unique;


void play_game3();
void play_game4();

//pegs is a vector
//size is parameter that will pass the number of pegs user wants
TicTacToe::TicTacToe(int size){
    for(int i=0; i<size*size; i++){
        pegs.push_back(" ");
    }
}

bool TicTacToe::game_over()
{
    if(check_column_win() || check_row_win() || check_diagonal_win()) 
    {
        set_winner(); 
        return true;
    }
    else if (check_board_full()) 
    {
        winner = "C"; 
        return true;
    }
    else
    {
        return false;
    }
}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();

}

void TicTacToe::display_board() const
{
    if (pegs.size() == 9)
    { 
    //displays tictactoe row by row
        for (long unsigned int i=0; i<pegs.size(); i+=3)
        {
            cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
        }
    }
        //how can i use pegs to determine which one to display
    else if (pegs.size() == 16)
    {
        for (long unsigned int i=0; i<pegs.size(); i+=4)
        {
            cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<< "|" <<pegs[i+3]<< "\n";
        }
    }

}

//private functions
void TicTacToe::clear_board()
{
    for (auto& peg: pegs)
    {
        peg = " ";
    }
}

void TicTacToe::set_next_player()
{
    if (player == "X")
        player = "O";
    else
        player = "X";
}

bool TicTacToe::check_board_full()
{
    for(long unsigned int i=0; i<pegs.size(); i++)
    {
        if(pegs[i]==" ")
        {
            return false;
        }
    }
    return true;
}


void TicTacToe :: set_winner()
{
    if (player == "X")
        winner = "O";
    else
        winner = "X";

}