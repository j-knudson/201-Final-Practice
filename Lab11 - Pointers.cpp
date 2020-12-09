/*
	Lab 11 Redux - Pointer Practice
	
*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
//---------------------------------------------------
	// this section starts code from Prelab
//---------------------------------------------------	
	
	cout <<"----------------------------------\n";
	cout <<"Start of output for Prelab\n";
	cout <<"----------------------------------\n";

	
	int i1; 
	fraction f1(2,5);
	int i2;
	fraction farray[5];
	float x1; double x2; char c1; int A[6];
	int *ip1; float *fp1; fraction *ffp1; double *dp1;
	
	cout <<"i1 at: " << &i1  <<endl;
	cout <<"f1 at: " <<&f1    <<endl;
	cout <<"i2 at: " <<&i2    <<endl;
	cout <<"farray at: " <<&farray   <<endl;
	cout <<"x1 at: " <<&x1    <<endl;
	cout <<"x2 at: " <<&x2    <<endl;
	cout <<"c1 at: " <<&c1    <<endl;
	cout <<"A at: " <<&A    <<endl;

	
	ip1 = &i1;  //ip1 is pointer and has value of address i1
	fp1 = &x1; 
	ffp1 = &f1;
	dp1 = &x2;
	
	cout <<"ip1 at: " <<&ip1    <<endl;
	cout <<"fp1 at: " <<&fp1   <<endl;
	cout <<"ffp1 at: " <<&ffp1    <<endl;
	cout <<"dp1 at: " <<&dp1    <<endl;
	
//-----------------------------------------
//		 end of code from Prelab
//-----------------------------------------
	
	
	
	return 0;
}
	