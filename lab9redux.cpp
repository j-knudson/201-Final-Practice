
/* 
	Redoing Lab 9 for practice
	This program will make a simple accumulator 
	Implementation File
*/
using namespace std;
#include <iostream>
#include <string>
#include "lab9redux.h"

void accum::run(istream&)
{
	double total=0, num=0;	// variables for the total sum, and num is variable for operand inputs
	char oper;			// variable for operator which determines +, -, or exit
	

	cin >> num;
	cin >> oper; 
	total = num;
	while (oper != '=')
	{
		
		cin >> num;
		switch (oper)
		{
			case '+' : total += num; break;
			case '-' : total -= num; break;
			default : cout << " We have a problem here \n"; 
		}
		
		cin >> oper;
	}
	
	cout << "The answer is " << total << endl;
	cout << "Tnank-you for using your friendly neighborhood accumulator!";
}