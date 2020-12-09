/*
	Lab 10 Redux
	Main file for Lab10 
	This class will create fraction objects
*/

#include <iostream>
#include <fstream>
#include "fraction.h"
using namespace std;

istream infile; ostream outfile; //globals used for fraction reading
int main()
{
	fraction f1; //testing variable
	cout <<"Please input a fraction and I will display it\n";
	
	cin >> f1.read(cin);
	
	cout <<"Here is your fraction\n";
	f1.write(cout);
	
	return 0;
}