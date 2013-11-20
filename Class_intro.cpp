/* Program Demonstrating Basic sytax of using a class */

#include<iostream>
using namespace std;
class Car	// declaring a class template using Keyword Class. Implementing Encapsulation.
{
	private:	// use of access specifiers to control the scope of data members. Implentation of Data hiding and Data Abstraction.
		char Model_Name[25];
		char colour[20];
		char Company[25];		
		float price;		
		int mileage;
	public:		//members declared after this are accessible outside the class
		void getdata();
		void putdata();
};
void Car::getdata() // Member function definitions outside the class use the " Qualified Name "  of the function 
{
	cout<<"\n Enter The details :";
	cout<<"\n Enter Model Name :";
	cin>>Model_Name;
	cout<<"\n Enter Company Name :";
	cin>>Company;
	cout<<"\n Enter the price :";
	cin>>price;
	cout<<"\n Enter the colour:";
	cin>>colour;
	cout<<"\n Ener Mileage";
	cin>>mileage;
}
void Car::putdata()
{
	cout<<"\n Details";
	cout<<"\n Company : "<<Company;
	cout<<"\n Model   : "<<Model_Name;
	cout<<"\n Price   : "<<price;
	cout<<"\n Colour  : "<<colour;
	cout<<"\n Mileage : "<<mileage;		
}		
				
				
int main()
{
	Car Alto;	// An object or instance of the user defined type Car 	
	Alto.getdata();
	Alto.putdata();
	return 0;
		
}
