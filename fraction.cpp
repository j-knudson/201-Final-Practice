/*
	Lab 10 Redux
	Implementation file for a fraction class
	This class will create fraction objects
*/

#include <iostream>
#include <fstream>

#include "fraction.h"

bool fraction::writeFrac(ostream&)
{
	char fracBar = '/';
	outfile << numerator <<fracBar << denominator;
}
bool fraction::readFrac(istream&)
{
	char fracBar;
	infile >> numerator >> fracBar >>denominator;
}

