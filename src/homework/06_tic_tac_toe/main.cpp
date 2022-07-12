#include "tic_tac_toe.h"
#include <iostream>
#include<string>

using std::cout; 
using std::cin;
using std::string;

int main() 
{
	TicTacToe game;
	string first_player;
	char user_choice = 'y';

	do
	{
		cout<<"Enter first_player: ";
		cin>>first_player;
		while(first_player != "X" && first_player != "O")
		{
			cout<<"\nInvalid Entry! Enter first player X or O: ";
			cin>>first_player;
		}
		
		game.start_game(first_player);
		int position;
		
		while(!game.game_over())
		{
			cout<<"Enter a position: ";
			cin>>position;
			game.mark_board(position);
			game.display_board();
			while (position < 1 || position > 9) {
                cout << "Invalid position. Enter position 1-9"<<endl;
                cout << "Enter a position: ";
                cin >> position;
            }
		}
		if( game.get_winner() == "X" || game.get_winner() == "O")
			{
			cout<<game.get_winner() <<" WINS!!! "<<"\n" ;
			}
		else
		{
			cout<<"Draw! No Winner!\n";
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

		
