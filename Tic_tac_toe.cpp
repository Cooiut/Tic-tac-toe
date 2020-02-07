//
// Created by Cooiut on 2/5/2020.
//

#include "Tic_tac_toe.h"

Tic_tac_toe::Tic_tac_toe(int n)
{
	length = n;
	board = new int* [length];
	for (int i = 0; i < length; ++i)
		board[i] = new int[length];
}

int Tic_tac_toe::makeMove(int x, int y)
{
	if (checkPosition(x - 1, y - 1) == 0)
	{
		// TODO 2/6/2020
		// 下棋
		// 检查结果
		// 更新当前玩家
	}
	return -1;
}

int Tic_tac_toe::checkPosition(int x, int y)
{
	if (0 < x < length & 0 < y < length)
		return board[x][y];
	return -1;
}

int Tic_tac_toe::checkState()
{
	// TODO 2/6/2020
	return 0;
}

std::ostream& operator<<(std::ostream& out, Tic_tac_toe& game)
{
	out << game.to_string() << std::endl;
	return out;
}

Tic_tac_toe::~Tic_tac_toe()
{
	delete[] board;
	board = nullptr;
}

std::string Tic_tac_toe::to_string()
{
	std::string res;
	for (int k = 0; k < length * 2 + 1; ++k)
	{
		res += "-";
	}
	
	res += "\n";
	
	for (int i = 0; i < length; ++i)
	{
		res += "|";
		for (int j = 0; j < length; ++j)
		{
			res += std::to_string(board[i][j]);
			res += " ";
		}
		res.pop_back();
		res += "|\n";
	}
	
	for (int k = 0; k < length * 2 + 1; ++k)
	{
		res += "-";
	}
	
	return res;
}



