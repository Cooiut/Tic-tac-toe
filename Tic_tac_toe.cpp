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
	for (int i = 0; i < length; ++i)
	{
		for (int j = 0; j < length; ++j)
		{
			board[i][j] = 0;
		}
	}

}

int Tic_tac_toe::makeMove(int x, int y)
{
	if (checkPosition(x, y) == 0)
	{
		// 下棋
		board[x][y] = currentPlayer;
		checkState(x, y);
		// 检查结果
		// 更新当前玩家
		switch (currentPlayer)
		{
		case 1:
			currentPlayer = 2;
			break;
		case 2:
			currentPlayer = 1;
			break;
		}
		return 1;
	}
	return 0;
}

int Tic_tac_toe::checkPosition(int x, int y)
{
//<<<<<<< Updated upstream
	if ((-1 < x) && (x < length) && (-1 < y) && (y < length))
//=======
		if (0 < x < length & 0 < y < length)
//>>>>>>> Stashed changes
			return board[x][y];
	return -1;
}

void Tic_tac_toe::checkState(int x, int y)
{

	// 检查棋盘状态
//	int i = 0;
	for (int i = 0; i < length - 1; i++)
		if (board[x][i] != board[x][i + 1] || board[i][y] != board[i + 1][y])
		{
			gameState = 0;
			return;
		}
//	for (int i = 0; i < length-1; i++)
//		if (board[i][y] != board[i + 1][y])
//		{
//			gameState = 0;
//		}
	if (x == y || x + y == length)
	{
		int j = length;
		for (int i = 0; i < length - 1; i++)
		{
			if (board[i][i] != board[i + 1][i + 1] || board[i][j - 1] != board[i + 1][j - 2])
			{
				gameState = 0;
				return;
			}
			j--;
		}
//		for (int i = 0; i < length; i++)
//			if (board[i][i] != board[i + 1][i + 1])
//			{
//				gameState = 0;
//			}
	}
	gameState = 1;

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
	std::string res = "   ";
	for (int k = 1; k < length + 1; ++k)
	{
		res += std::to_string(k);
		res += " ";
	}

	res += "\n  ";

	for (int k = 0; k < length * 2 + 1; ++k)
	{
		res += "-";
	}

	res += "\n";

	for (int i = 0; i < length; ++i)
	{
		res += std::to_string(i + 1);
		res += " |";
		for (int j = 0; j < length; ++j)
		{
			res += std::to_string(board[i][j]);
			res += " ";
		}
		res.pop_back();
		res += "|\n";
	}

	res += "  ";

	for (int k = 0; k < length * 2 + 1; ++k)
	{
		res += "-";
	}

	return res;
}

int Tic_tac_toe::getPlayer()
{
	return currentPlayer;
}

int Tic_tac_toe::getGameState()
{
	return gameState;
}