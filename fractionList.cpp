/*
	HW 10 Redux
	Implementation file for a fractionList class
	This class will create a list of fraction objects
*/

#include "fractionList.h"

int fractionList::store(istream& infile)
{
	count = 0;
	fraction f_temp; //create a temporary fraction used to stock the fracList vector
	while (f_temp.readFrac(infile)) //loop runs while able to add fractions 
	{
		fracList.push_back(f_temp);
		count++;
	}
	return count;
}
	
int fractionList::display (int low, int high, ostream& outfile)
{
	int display_count = 0;
	for (unsigned int i = low; i < high; i++)
	{
		fracList.at(i).writeFrac(outfile);
		outfile << endl;
		display_count++;
	}
	return display_count;
}
int fractionList::search (int size, fraction item) //function to find a fraction value in the list
{
	int foundIndex = -1; //not found value for program is -1 
	for (unsigned int i = 0; i < size; i++)
	{
		if(fracList.at(i).equalCheck(item))  //check list against fraction user wants to find (item)
			foundIndex = i+1;
	}
	return foundIndex;
}
int fractionList::addFrac(fraction extraFraction)
{
	fracList.push_back(extraFraction);
	count++;
	return count;
}
