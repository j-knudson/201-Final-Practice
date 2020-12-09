/*
	HW 10 Redux
	Header file for a fractionList class
	This class will create a list of fraction objects
*/

#include <iostream>
#include <fstream>
#include <vector>
#include "fraction.h"
using namespace std;

#ifndef FRACTIONLIST
#define FRACTIONLIST
//fractionList.h

class fractionList
{
	private:
		int listSize; // list size
		int count;
		vector <fraction> fracList; //array of fractions 
	
	public:
	
		//constructor
		fractionList(int size = 20)
		{	
			listSize = size; count = 0;
		}
		
	
		int store (istream& infile);
		int display (int low, int high, ostream& outfile);
		int search (int size, fraction item); 
		int addFrac(fraction extraFraction);
};
#endif