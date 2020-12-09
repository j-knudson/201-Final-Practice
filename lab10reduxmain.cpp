/*
	Lab 10 Redux
	Main file for Lab10 
	This class will create fraction objects
*/

#include <iostream>
#include <fstream>
#include "fraction.h"
using namespace std;


int main()
{
	fraction f1; //testing variable
	cout <<"Please input a fraction and I will display it\n";
	
	f1.readFrac(cin);
	
	cout <<"Here is your fraction\n";
	f1.writeFrac(cout);
	
	return 0;
}