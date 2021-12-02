#include <iostream> 
#include "ufo_functions.hpp"
#include <vector>

int main() 
{
	//Step 3
	std::string codeword = "codecademy"; 
	std::string answer = "__________";
	//Step 4
	int misses = 0;
	//Step 10
	std::vector <char> incorrect;
	bool guess = false;
	//Step 14
	char letter;
	
	greet();

	//Step 5
	while (answer != codeword && misses < 7) 
	{
		display_status(incorrect, answer);
		//Step 9
		display_misses(misses);


		std::cout << "Please enter your guess: " << std::endl;
		std::cin >> letter;
		//Step 15
		for (int i = 0; i < codeword.length(); i++) 
		{
			if (letter == codeword[i]) 
			{
				answer[i] = letter;
				guess = true;
			}
			
		}
		if(guess)
		{
			std::cout << "\nCorrect!" << std::endl;
		}
		else 
		{
			std::cout << "\nIncorrect! The tractor beam pulls the person in further." << std::endl;
			incorrect.push_back(letter);
			misses++;
		}

		
		guess = false;
	}
	
	//Step 7 -- see step 6 in function definition
	end_game(answer, codeword);
	
}