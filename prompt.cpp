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
		// TODO 2/6/2020
	}
	
}