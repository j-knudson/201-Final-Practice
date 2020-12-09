/*
	Lab 10 Redux
	Implementation file for a fraction class
	This class will create fraction objects
*/
#include <iostream>
#include "fraction.h"


void fraction::writeFrac(ostream& outfile) const
{
	char fracBar = '/';
	if(outfile << numerator <<fracBar << denominator);
}
bool fraction::readFrac(istream& infile)
{
	char fracBar;
	if(infile >> numerator >> fracBar >>denominator);
	return infile;
}


