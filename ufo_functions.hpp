#pragma once
#include <iostream>
#include <vector>
void greet();

void end_game(std::string pAnswer, std::string pCodeword);

void display_misses(int pMisses);

void display_status(std::vector <char> pIncorrect, std::string pAnswer);