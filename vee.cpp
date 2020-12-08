/*
	Vee class implementation file 
	HW 9 Redux
*/

#include <iostream>
#include <cstdlib>
#include "vee.h"

using namespace std;

void vee::printChars(int num, char c, ostream& outfile)
{
	for (int i = 0; i < num; i++)
		outfile << c;
}

void vee::read(istream& infile)  //input data for a Vee
{
	infile >> height >> width >> veeCharacter >> topMargin >> leftMargin; 
}

void vee::write(ostream& outfile) //output raw data for a vee
{
	char L_bracket = '(';
	char R_bracket = ')';
	
	outfile << L_bracket <<height<<" " <<width <<" "<< veeCharacter 
	<<" " <<topMargin <<" "<<leftMargin <<" " << R_bracket;
}

void vee::draw(ostream& outfile)  //this function will print a Vee to outstream
{
	int gap1 =0, gap2; //these are the spaces before the left side of the vee and in between the vee
	
	for (int i = 0; i < topMargin; i++) // this will set the topMargin
	{outfile << endl; }
	
	gap2 = (2 * height -2);		//equation to determine the space between the characters in the vee
	
	//print the first line of the vee
	printChars(leftMargin, ' ', outfile); //this sets the left margin 
	printChars(width, veeCharacter, outfile); //the left side of the vee
	printChars(gap2, ' ', outfile); //middle space of the vee
	printChars(width, veeCharacter, outfile); //the right side of the vee
	outfile << endl; //move to next line 
	
	//now we need to set a loop to print the remaining lines of the vee
	
	for (int i = 1; i < height; i++) 
	{
		gap2 -= 2; //decrement gap2 by 2 each time we go down one line
		gap1++; //gap1 increases by 1 each line 
		printChars(leftMargin+gap1, ' ', outfile); //this sets the left gap
		printChars(width, veeCharacter, outfile); //the left side characters of the vee
		printChars(gap2, ' ', outfile); //middle space of the vee
		printChars(width, veeCharacter, outfile); //the right side characters of the vee		
		outfile << endl; //move to next line 
	}
}
		
	