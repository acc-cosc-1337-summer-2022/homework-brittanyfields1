#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <memory>
using std :: unique_ptr;
using std :: make_unique;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE ("Test if the board is full")
{
	unique_ptr<TicTacToe> game = make_unique<tictactoe3>();
	game->mark_board(1);
	REQUIRE(game.game_over() == false);
	game->mark_board(2);
	REQUIRE(game.game_over()== false);
	game->mark_board(3);
	REQUIRE(game.game_over()== false);
	game->mark_board(4);
	REQUIRE(game.game_over()== false);
	game->mark_board(5);
	REQUIRE(game.game_over() == false);
	game->mark_board(7);
	REQUIRE(game.game_over()== false);
	game->mark_board(6);
	REQUIRE(game.game_over()== false);
	game->mark_board(9);
	REQUIRE(game.game_over()== false);
	game->mark_board(8);

	REQUIRE(game->game_over()== true);
	REQUIRE(game->get_winner() == "C");
}

TEST_CASE ("Test first player set to X")
{
	unique_ptr<TicTacToe> game = make_unique<tictactoe3>();
	game.start_game("X");
	REQUIRE(game.get_player() == "X");
	
}

TEST_CASE("Test first player set to O")
{
	unique_ptr<TicTacToe> game = make_unique<tictactoe3>();
	game.start_game("O");
	REQUIRE(game.get_player() == "O");
}

TEST_CASE("Test win by first column for tictactoe3")
// 1	2	3
// 4	5	6
// 7	8	9
{
	unique_ptr<TicTacToe> game = make_unique<tictactoe3>();
	game.start_game("X");
	game.mark_board(1); // X moved
	game.mark_board(5); // O moved 
	game.mark_board(4); // X moved
	game.mark_board(9); // O moved  
	game.mark_board(7); // X moved
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by second row")
// 1	2	3
// 4	5	6
// 7	8	9
{
	unique_ptr<TicTacToe> game = make_unique<tictactoe3>();
	game.start_game("X");
	game.mark_board(4);
	game.mark_board(2); 
	game.mark_board(5);
	game.mark_board(8); 
	game.mark_board(6); 

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by third row")
// 1	2	3
// 4	5	6
// 7	8	9
{
	unique_ptr<TicTacToe> game = make_unique<tictactoe3>();
	game.start_game("X");
	game.mark_board(7); 
	game.mark_board(4);
	game.mark_board(8);
	game.mark_board(3); 
	game.mark_board(9);  

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win diagonally from top left")
// 1	2	3
// 4	5	6
// 7	8	9
{
	unique_ptr<TicTacToe> game = make_unique<tictactoe3>();
	game.start_game("X");
	game.mark_board(1); 
	game.mark_board(2);
	game.mark_board(5);
	game.mark_board(8); 
	game.mark_board(9);  

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win diagonally from bottom top right")
// 1	2	3
// 4	5	6
// 7	8	9
{
	unique_ptr<TicTacToe> game = make_unique<tictactoe3>();
	game.start_game("X");
	game.mark_board(3); 
	game.mark_board(2);
	game.mark_board(5); 
	game.mark_board(6);
	game.mark_board(7);     

	REQUIRE(game.game_over() == true);
}


//tests tictactoe4

/*Tests for TicTacToe4
/
/
/
*/

TEST_CASE("Test if the board is full for tictactoe4"){
	unique_ptr<TicTacToe> game = make_unique<tictactoe4>();

	game.mark_board(1);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(2);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(3);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(6);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(5);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(10);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(7);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(8);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(4);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(9);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(11);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(16);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(12);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(15);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(14);
	REQUIRE(game.game_over() ==  false);
	game.mark_board(13);

	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "C");

TEST_CASE("Test win by first column for tictactoe4")
// 1	2	3	4
// 5	6	7	8
// 9	10	11	12
// 13	14	15	16
{
	unique_ptr<TicTacToe> game = make_unique<tictactoe4>();
	game.start_game("X");
	game.mark_board(1);  // x 
	game.mark_board(6);  // o
	game.mark_board(5);  // x
	game.mark_board(10); // o
	game.mark_board(9);  // x
	game.mark_board(14); // o
	game.mark_board(13); // x 
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by second row for tictactoe4")
// 1	2	3	4
// 5	6	7	8
// 9	10	11	12
// 13	14	15	16
{
	unique_ptr<TicTacToe> game = make_unique<tictactoe4>();
	game.start_game("X");
	game.mark_board(5); //x
	game.mark_board(10); //o
	game.mark_board(6); //x
	game.mark_board(9); //o
	game.mark_board(7); //x
	game.mark_board(16); //o
	game.mark_board(8); //x
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by fourth row for tictactoe4")
// 1	2	3	4
// 5	6	7	8
// 9	10	11	12
// 13	14	15	16
{
	unique_ptr<TicTacToe> game = make_unique<tictactoe4>();
	game.start_game("X");
	game.mark_board(13); //x
	game.mark_board(7); //o
	game.mark_board(14); //x
	game.mark_board(10); //o
	game.mark_board(15); //x
	game.mark_board(12);  //o
	game.mark_board(16); //x
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win diagonally from top right")
// 1	2	3	4
// 5	6	7	8
// 9	10	11	12
// 13	14	15	16
{
	unique_ptr<TicTacToe> game = make_unique<tictactoe4>();
	game.start_game("X");
	game.mark_board(4); //x
	game.mark_board(16); //o
	game.mark_board(7);//x
	game.mark_board(2); //o
	game.mark_board(10);//x
	game.mark_board(3);  //o
	game.mark_board(13);//x
  
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win diagonally from top left for tictactoe4")
// 1	2	3	4
// 5	6	7	8
// 9	10	11	12
// 13	14	15	16
{
	unique_ptr<TicTacToe> game = make_unique<tictactoe4>();
	game.start_game("X");
	game.mark_board(1); //x
	game.mark_board(15); //o 
	game.mark_board(6); //x
	game.mark_board(14);  //o
	game.mark_board(11);//x
	game.mark_board(10);  //o
	game.mark_board(16);//x         

	REQUIRE(game.game_over() == true);
}