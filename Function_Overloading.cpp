/* Function overloading is a powerful feature of C++ which is used to implement polymorphism. 
   One Function can be processed in more than one way.
   one interface multiple methods .
 
*/
#include<iostream>
using namespace std;
void Area(float side);	//function overloading to implement  compile-time polymorphism
void Area(float length,float breadth); // functions are differentiable by their signature
int main()
{
	float length,breadth,side;
	int choice;
	cout<<"\n Menu: ";
	cout<<"\n 1.Area of square";
	cout<<"\n 2.Area of rectangle";
	cout<<"\n Enter your choice";
	cin>>choice;
	switch(choice)
	{
		case 1: cout<<"\n Enter length of a side of square :";
			cin>>side;
			Area(side);		
			break;
		case 2: cout<<"\n Enter Length and Breadth of a rectangle :";
			cin>>length>>breadth;
			Area(length,breadth);	//same funtion name and same purpose of funtion (printing the area)
			break;
		default :
			cout<<"\n Wrong choice :";
	}
	return 0;
}
void Area(float side)
{
	cout<<"\n Area is : "<<side*side;
}
void Area(float length,float breadth)
{
	cout<<"\n Area is : "<<length*breadth;
}
