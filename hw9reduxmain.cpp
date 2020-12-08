/*
	Main file 
	HW9 Redux - Studying
*/

#include <iostream>
#include <fstream>
#include <string> 
#include "vee.h"

using namespace std;

int main()
{
	ifstream infile; ofstream outfile; 
	vee v1; //create a vee object named v1
	
	//prompt user for Vee info
	
	cout << "Please enter data for a vee using this format: Height,Width,Char,topMargin,leftMarin)\n";
	v1.read(cin);
	
	cout <<endl << "Here is the raw data: \n";
	v1.write(cout); 
	
	cout <<endl <<"Now printing your vee: \n";
	
	v1.draw(cout);
	
	return 0;
}
