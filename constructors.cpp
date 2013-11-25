/* A program To demonstrate Syntax of using constructors (parametrised ,default,copy contructors ) , Operator overoading */ 
#include<iostream>
#include<cstring>	//for using strcpy,strcat
using namespace std;
class STRING
{
		char str[40];
	public:
		STRING()	//default constructor	
		{
		}
		STRING(const char *p)	//parameterized constructor
		{
			strcpy(str,p);
		}
		STRING(const STRING &S)	// copy constructor
		{
			strcpy(str,S.str);
		}
		STRING operator+(STRING &S)	//operator function to overload + operator
		{
			STRING temp;
			strcpy(temp.str,str);
			strcat(temp.str,S.str);
			return temp;
		}
		friend ostream & operator<<(ostream &out,STRING &S) // friend function overloading << operator
		{	
			out<<"\n The STRING is : \n ";
			out<<S.str;
			return out;
		}
};
int main()
{
	STRING s1="VTU";	// Generates a call to parameterized constructor
	STRING s2="BELGAUM";
	STRING s3=s1+s2;	//generates a call to operator function and then copy constructor
	cout<<s3;		//generates a call to operator function of << 
	return 0;
}
		
