//
// Created by Cooiut on 2/5/2020.
//
#include "prompt.h"

int main()
{
	prompt();
	std::cout << "Press any button to exit.";
	std::cin.ignore();
	std::cin.get();
}