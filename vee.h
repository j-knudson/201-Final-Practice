/*
	Making a Vee shape out of a character
	HW9 Reduc
*/

#include <iostream>
using namespace std;

#ifndef VEE
#define VEE

class vee
{
	private:
		char veeCharacter; //what character vee will be made from
		int height;	//how tall the vee will be
		int width; //how wide the vee will be
		int topMargin; //how far down to start constructing
		int leftMargin; //how far in to start constructing 
		
		static void printChars(int, char, ostream&); //this function prints char an int number of times to ostream
		
	public:	
		//constructor
		
		vee(int h = 0, int w = 0, char c = '*', int t = 0, int l = 0)
		{
			height = h; width = w; veeCharacter = c; topMargin = t; leftMargin = l;
		}
		
		//setter methods
		
		void setHeight (int h) {height = h;}
		void setWidth (int w) {width = w;}
		void setChar (char c) {veeCharacter = c;}
		void setTopMargin (int t) {topMargin = t;}
		void setLeftMargin (int l) {leftMargin = l;}
		
		void draw (ostream&); //function to draw a Vee
		void read (istream&); //function to read data for a Vee
		void write (ostream&);

};
#endif
