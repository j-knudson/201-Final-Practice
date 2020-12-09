/*
	Lab 10 Redux
	Header file for a fraction class
	This class will create fraction objects
*/

#include <iostream>
#include <string>
using namespace std;

#ifndef FRACTION
#define FRACTION
//fraction.h

class fraction
{
	private: 
		int numerator;
		int denominator;
		
	public: 
		//constructor
		
		fraction(int n =1, int d = 1)
		{
			numerator = n; denominator = d;
		}
		
		
		//setters
		void setNumerator(int n) {numerator = n;}
		void setDenominator(int d)  {denominator = d;}
		//getters
		int getNumerator() const  {return numerator;}
		int getDenominator() const {return denominator;}
		
		void writeFrac(ostream&) const; //this function will print a fraction
		bool readFrac(istream&);  //this function will read a fraction 
		bool equalCheck(const fraction right) const;
		

};
#endif
