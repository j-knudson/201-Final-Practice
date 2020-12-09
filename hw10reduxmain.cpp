/*
	Lab 10 Redux
	Main file for Lab10 
	This class will create fraction objects
*/

#include <iostream>
#include <string>
#include <fstream>
#include "fraction.h"
#include "fractionList.h"
using namespace std;

//int store(fraction A[], int size, istream&);   //function to store fractions into a fraction array
//int display(fraction A[], int low, int high, ostream&); //function to display a fraction array
//int search(fraction A[], int size, fraction item);
int main()
{
	//const int A_SIZE = 20;
	//fraction fA[A_SIZE];

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
	
	
	//create a fractionList object
	fractionList fList;
	
	int num_processed = fList.store(infile); //call store to read fractions into our list 
	cout <<num_processed <<" numbers were processed from the file" <<endl;
	
	int num_displayed = fList.display(0, num_processed, cout); //display fractions 
	cout <<num_displayed <<" numbers were displayed from the array"<<endl;
	
	cout <<"practice adding a fraction  enter a new fraction and it will be added to the list\n";
	fraction f_temp;
	f_temp.readFrac(cin);  //get a new fraction from user
	num_processed = fList.addFrac(f_temp);	//add that fraction to our list
	num_displayed = fList.display(0, num_processed, cout); //print our list again
	cout <<num_displayed <<" numbers were displayed from the array"<<endl;	
	
	
	//creat a loop to search for a fraction
	char searchWanted; bool choice;
	cout <<"Would you like to search for a fraction? (y/n): ";
	cin >>searchWanted;
	if ((searchWanted == 'y') || (searchWanted =='Y'))
		choice = true;
	while(choice)
	{
		fraction userFracWanted;
		cout <<"Input the fraction you would like to find \n";
		userFracWanted.readFrac(cin);  //call readFrac to get value from user
	
		int fracLocation = fList.search(num_processed, userFracWanted);
		if (fracLocation == -1)
		{	cout <<"Your fraction was not found\n";}
		else
		{userFracWanted.writeFrac(cout); cout <<" was found in the array at index "<<fracLocation <<endl;}
		
		cout <<"Would you like to search for another fraction? (y/n): \n";
		cin >> searchWanted;
		if ((searchWanted == 'y') || (searchWanted =='Y'))
			choice = true;
		else 
			choice = false;
	}
	
	
	cout <<"Thank you goodbye\n";
	
	
		return 0;
}

/*
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
*/