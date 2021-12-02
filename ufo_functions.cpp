#include "ufo_functions.hpp"
#include <iostream>
#include <vector>

void greet() 
{
	std::cout << "=============" << std::endl;
	std::cout << "UFO: The Game" << std::endl;
	std::cout << "=============" << std::endl;
	
}

void end_game(std::string pAnswer, std::string pCodeword) 
{
	//Step 6
	if (pAnswer == pCodeword)
	{
		std::cout << "Hooray! You saved the person and earned a medal of honor!" << std::endl;
	}
	else
	{
		std::cout << "Oh no! The UFO just flew away with another person!" << std::endl;
	}
}

void display_misses(int pMisses) 
{
	std::cout << "Misses: " << pMisses << std::endl;
}

void display_status(std::vector <char> pIncorrect, std::string pAnswer) 
{
	//Step 10
	std::cout << "Incorrect Guesses:" << std::endl;
	//Step 11
	for (int i = 0; i < pIncorrect.size(); i++)
	{
		std::cout << pIncorrect[i] << " ";
	}
	std::cout << "\n";
	//Step 12
	std::cout << "Codeword:" << std::endl;
	for (int i =0; i < pAnswer.length(); i++)
	{
		std::cout << pAnswer[i] << " ";
	}
	std::cout << "\n";
}