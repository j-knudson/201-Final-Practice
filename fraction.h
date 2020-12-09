/*
	Lab 10 Redux
	Header file for a fraction class
	This class will create fraction objects
*/

#include <iostream>
#include <fstream>

#ifndef FRACTION
#define FRACTION
//fraction.h

class fraction
{
	private: 
		int numerator
		int denominator
		
	public: 
		//constructor
		
		fraction(int n =1, int d = 1)
		{
			numerator = n; denominator = d;
		}
		
		
		//setters
		void setNumerator(int n) {numerator = n;}
		void setDenominator(int d) {denominator = d;}
		//getters
		int getNumerator() {return numerator;}
		int getDenominator() {return denominator;}
		
		bool writeFrac(istream&); //this function will print a fraction
		bool readFrac(ostream&);  //this function will read a fraction 
};
#endif
