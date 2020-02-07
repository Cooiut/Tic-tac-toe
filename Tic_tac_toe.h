//
// Created by Cooiut on 2/5/2020.
//

#ifndef TIC_TAC_TOE__TIC_TAC_TOE_H_
#define TIC_TAC_TOE__TIC_TAC_TOE_H_

#include <string>
#include <iostream>

class Tic_tac_toe
{
private:
    // Actual board array
    int** board;
    
    // Represent the game state: 0 for playing, 1 for player 1 win the game, 2 for player 2 win the game, -1 for draw
    int gameState{};
    
    // Represent the current player: 1 for player 1, 2 for player 2
    int currentPlayer{};

protected:


public:
    int length;
    
    Tic_tac_toe(int);
	
	int makeMove(int, int);
	
	int checkPosition(int, int);
	
	int checkState();
	
	friend std::ostream& operator<<(std::ostream& out, Tic_tac_toe& game);
	
	std::string to_string();
	
	int getPlayer();
	
	~Tic_tac_toe();
	
};

#endif //TIC_TAC_TOE__TIC_TAC_TOE_H_
