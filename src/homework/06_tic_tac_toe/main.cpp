#include "tic_tac_toe.h"
#include <iostream>
#include<string>
#include<memory>

using std::cout; 
using std::cin;
using std::string;
using std::endl;

int main() 
{
	TicTacToe game;
	string first_player;
	string winner;
	char user_choice = 'y';
	unique_ptr<TicTacToe> game;
	int board_choice;

	

	do
	{
		cout << "Welcome to Tic Tac Toe" <<endl;
		cout << "Enter 3 to play 3x3" << endl;
		cout << "Enter 4 to play 4x4" << endl;
		cin >> board_choice;
		
		
		while (!board_choice == 3 && board_choice == 4)
		{
			cout << "Invalid choice. Enter 3 to play 3x3 or enter 4 to play 4x4:"<<endl;
			cin <<board_choice;

		if (board_choice == 3)
		{
			unique_ptr<TicTacToe> game = make_unique<tictactoe3>();
			cout<<"Enter first_player: ";
			cin>>first_player;
			while(first_player != "X" && first_player != "O")
			{
				cout<<"\nInvalid Entry! Enter first player X or O: ";
				cin>>first_player;
			}
			game->start_game(first_player);
			int position;
		
			while(!game->game_over())
			{
				cout<<"Enter a position from 1 to 9: ";
				cin>>position;
				game->mark_board(position);
				game->display_board();
		
				while (position < 1 || position > 9) 
				{
                			cout << "Invalid position. Enter position 1-9"<<endl;
                			cout << "Enter a position: ";
                			cin >> position;
            		}
			}
		winner = game->get_winner();
		cout<< winner <<" won the game!!! "<<"\n" ;
		}
		else if (board_choice == 4)
		{
			unique_ptr<TicTacToe> game = make_unique<tictactoe4>();
			cout<<"Enter first_player: ";
			cin>>first_player;
			while(first_player != "X" && first_player != "O")
			{
				cout<<"\nInvalid Entry! Enter first player X or O: ";
				cin>>first_player;
			}
			game->start_game(first_player);
			int position;
		
			while(!game->game_over())
			{
				cout<<"Enter a position: ";
				cin>>position;
				game->mark_board(position);
				game->display_board();
		
				while (position < 1 || position > 16) 
				{
                			cout << "Invalid position. Enter position 1-16"<<endl;
                			cout << "Enter a position: ";
                			cin >> position;
            		}
			}
		winner = game->get_winner();
		cout<< winner <<" won the game!!! "<<"\n" ;
		}
		else
		{
			cout<<"Tie! No Winner!\n";
		}
		
		
		cout<<"Play again? Enter Y or N: ";
		cin>>user_choice;
		while(user_choice != 'Y' && user_choice != 'y' && user_choice != 'N' && user_choice != 'n')
        	{
            	cout<<"Invalid choice! Type 'Y' to play again or 'N' to end program: ";
            	cin>>user_choice;
        	}
		
	} while (user_choice == 'y' || user_choice == 'Y');
	
	return 0;
}

		
