/*
	HW 10 Redux
	Implementation file for a fractionList class
	This class will create a list of fraction objects
*/

#include "fractionList.h"

int fractionList::store(istream& infile)
{
	count = 0;
	while ((count < listSize) && (fracList[count].readFrac(infile)))
		{count++;}
	return count;
}
	
int fractionList::display (int low, int high, ostream& outfile)
{
	count = 0;
	for (int i = low; i < high; i++)
	{
		fracList[i].writeFrac(outfile);
		outfile << endl;
		count++;
	}
	return count;
}
int fractionList::search (int size, fraction item) //function to find a fraction value in the list
{
	int foundIndex = -1; //not found value for program is -1 
	for (int i = 0; i < size; i++)
	{
		if(fracList[i].equalCheck(item))  //check list against fraction user wants to find (item)
			foundIndex = i;
	}
	return foundIndex;
}