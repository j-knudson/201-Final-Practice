/* 
	Redoing Lab 9 for practice
	This program will make a simple accumulator 
*/

#include <iostream>
#include "lab9redux.h"


int main()
{
	
	accum accum1; //create an accumulator named accum1
	
	cout <<"Welcome to your friendly neighborhood accumulator! Please input"
	<<"your expression, starting with operand and type in '=' when completed.\n";
	
	accum1.run(cin); // call run program and pass cin as istream
	
	return 0;
}
