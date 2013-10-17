// numbersGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
void intro();
void generateRandom();

int _tmain(void)
{
	intro();
	
	return 0;
}

void intro()
{
	cout << "Welcome to the numbers game!" << endl;
	cout << "Do you already know the rules? (Y)es or (N)o" << endl;
	char rules = cin.get();
	cout << "You chose : " << rules << endl;
	if(rules == 'N')
	{
		cout << "The object of this game is to type in the number on the screen as fast as you can." << endl;
	}
}

void generateRandom()
{
	int number = rand();
}