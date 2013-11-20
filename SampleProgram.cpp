/* Sample C++ Program */ 
// C++ provides use of single line comments

#include<iostream>  	//Notice the use of identifier instead of file name
using namespace std;    // inclusion of std namespace into global namespace
int i;                  //global declarations : variables initialized to zero
int main() 
/* main function Execution starts from here.
   In C++ "Default to int" rule is not existent , hence a return type must be specified for all functions.
   multiline comments are the smae as in C  
*/ 
{
	int j;	// local declarations
	cout<<"\n Hello World";
	int k;	// variables can be declared anywhere in the block
	cout<<"\n Enter a number ";	//use of cout and cin 
	cin>>k;	
	cout<<"\n i: "<<i<<"\n j: "<<j<<"\n K: "<<k; //insertion and extraction operators can be cascaded
	return 0;
}
	
