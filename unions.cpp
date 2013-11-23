/* Unions in C++ define a class type. Unions can have functions as members. C++ unions hold the same characteristic as in C i.e members of union share same memory area. c++ allows use of anonymous unions i.e unions without a name */
#include<iostream>
using namespace std;
union  swapb	//declaration of union using Keyword Union
{
	unsigned int integer;
	unsigned char c[4];
	void swap1();	//functions as members of union
	void getnumber(unsigned int);
	void show();
};
void swapb::swap1()
{
	unsigned int t[2];
	t[0]=c[0];
	t[1]=c[1];
	c[0]=c[2];
	c[1]=c[3];
	c[2]=t[0];
	c[3]=t[1];
}
void swapb::getnumber(unsigned int i)
{
	integer=i;
}
void swapb::show()
{
	cout<<"Number : "<<integer;
}

int main()
{
	swapb num;
	num.getnumber(34);
	num.swap1();
	num.show();
	return 0;
}	
