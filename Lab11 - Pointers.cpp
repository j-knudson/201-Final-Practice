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
	
//-----------------------------------------
//		 end of code from Prelab
//-----------------------------------------

	
	ip1 = &i1;  //ip1 is pointer and has value of address i1
	
	
	cout <<"ip1 is " <<ip1 <<" ip1 is at: " <<&ip1    <<endl;
	cout <<"i1 is " <<i1 <<" i1 is at: " <<&i1    <<endl;
	
	cout <<"changing i1 to 13 through dereferencing\n";
	*ip1 = 13;
	cout <<"i1 is " <<i1 <<" i1 is at: " <<&i1    <<endl;
	
	
	
	cout <<"changing i2 to 23 through pointer arithmetic\n";
	*(ip1-4) = 23;
	cout <<"i2 is " <<i2 <<" i2 is at: " <<&i2    <<endl;
	
	
	return 0;
}
	