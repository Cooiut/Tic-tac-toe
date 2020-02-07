//
// Created by Cooiut on 2/5/2020.
//

#include "prompt.h"

void prompt()
{
	std::cout << "Start the game? Y/[N]" << std::endl;
	char start;
	std::cin >> start;
	
	switch (start)
	{
	case 'Y':
	case 'y':
		break;
	default:
		return;
	}

//	if (start != 'y' & start != 'Y')
//		return;
	
	int x;
	do
	{
		std::cout << "Please enter game board size [2-10]: ";
		std::cin >> x;
	} while (x < 2 | x > 10);
	
	Tic_tac_toe game = Tic_tac_toe(x);
	
	while (game.checkState() == 0)
	{
		int xIn, yIn, move;
		std::cout << game;
		std::cout << "Current player is : Player " << game.getPlayer() << std::endl;
		std::cout << "Please enter a position (x y): ";//打印当前玩家，要求玩家输入坐标
		std::cin >> xIn >> yIn;
		move = game.makeMove(xIn - 1, yIn - 1);
		while (move == -1)
		{
			std::cout << "Position is not legal, please reenter: "; //坐标错误，重新输入坐标
			std::cin >> xIn >> yIn;
			move = game.makeMove(xIn - 1, yIn - 1);
		}
		
		// TODO 2/6/2020
	}
	
	std::cout << "Gave over.";
	
}
