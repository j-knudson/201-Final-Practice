/*
	Lab 10 Redux
	Main file for Lab10 
	This class will create fraction objects
*/

#include <iostream>
#include <string>
#include <fstream>
#include "fraction.h"
using namespace std;

int store(fraction A[], int size, istream&);   //function to store fractions into a fraction array
int display(fraction A[], int low, int high, ostream&); //function to display a fraction array
int search(fraction A[], int size, fraction item);
int main()
{
	const int A_SIZE = 20;
	fraction fA[A_SIZE];

	// get filename from user
	ifstream infile;
	string input_filename;
	
	cout <<"What is the name of the file from which you would like to read? \n";
	cin >> input_filename;
	
	infile.open(input_filename.c_str());
	if (!infile) //confirm file can be opened
	{
		cout <<"That file could not be opened. Goodbye";
		return 0;
	}	
	int num_processed = store(fA, A_SIZE, infile);
	cout <<num_processed <<" numbers were processed from the file" <<endl;
	
	int num_displayed = display(fA, 0, num_processed, cout);
	cout <<num_displayed <<" numbers were displayed from the array"<<endl;
	
	//look for a fraction
	fraction userFracWanted;
	cout <<"Input a fraction and I will see if it is in the file \n";
	userFracWanted.readFrac(cin);  //call readFrac to get value from user
	
	int fracLocation = search(fA, num_processed, userFracWanted);
	if (fracLocation == -1)
	{	cout <<"Your fraction was not found\n";}
	else
	{userFracWanted.writeFrac(cout); cout <<"Was found in the array at index "<<fracLocation;}
	
	
	
	
	
	
	
		return 0;
}


int store(fraction A[], int size, istream& infile)
{
	int count = 0;
	while ((count < size) && A[count].readFrac(infile)) //call readFrac to store fractions into Array until array is full or infile no longer reads
	{count++;}
	return count;
}
		
int display(fraction A[], int low, int high, ostream& outfile)
{
	int count = 0;
	for (int i = low; i < high; i++)
	{
		A[i].writeFrac(outfile);
		outfile << endl;
		count++;
	}
	return count;
}
int search (fraction A[], int size, fraction item)
{
	int index = -1; //placeholder for search  -1 is failed search value
	
	for (int i = 0; i < size; i++)
	{
		if(A[i].equalCheck(item))
			index = i;
	}
	return index;
}