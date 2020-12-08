
/* 
	Redoing Lab 9 for practice
	This program will make a simple accumulator 
	Implementation File
*/
using namespace std;
#include <iostream>
#include <string>
#include "lab9redux.h"

class accum::run(istream&)
{
	cout <<"Welcome to your friendly neighborhood accumulator! Please input"
	<<"your expression, starting with operand and type in '=' when completed.\n";
	
	float oper; char operand; //oper for user number input operand for user character input
	
	cin << oper; 
	cin << operand;
	float total = oper; //running total 
	while (operand != '=') //loop until exit condition = is entered
	{
		cin oper;
		switch (operand)
		{
			case '+':
				total += oper; break;
			case '-':
				total -= oper; break;
			default:
				cout <<"We have a problem\n";
		}
		
		cin <<operand;
	}
	cout << "The answer is " << total << endl;
	cout << "Tnank-you for using your friendly neighborhood accumulator!";		
}