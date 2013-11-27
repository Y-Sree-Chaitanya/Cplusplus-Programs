/* This program demostrates basic syntax to overload +,-,<< operators */
#include<iostream>
#define maxsize 15
using namespace std;
class STACK 
{
		int s[maxsize],top;
	public:
		STACK()
		{
			top=-1;
		}
		STACK operator+(int ele)
		{
			if(top==maxsize-1)
			{
				cout<<"\n Overflow";
				return *this;
			}
			s[++top]=ele;
			return *this;
		}
		STACK operator-()
		{
			if(top==-1)
			{
				cout<<"\n Underflow";
				return *this;			
			}
			cout<<"\n Element being deleted is : "<<s[top--];
			return *this;
		}
		friend ostream& operator<<(ostream& out,STACK &S)
		{
			int i; 
			if(S.top==-1)
			{
				out<<"\n Stack is empty ";
				return out;
			} 
			for(i=S.top;i>=0;i--)
			{
				out<<"   "<<S.s[i];
			} return out;
		} 
};
int main()
{
	STACK S;int ch,ele;
	while(1)
	{
		cout<<"\n Menu : ";
		cout<<"\n 1.Insert ";
		cout<<"\n 2.Delete ";
		cout<<"\n 3. Display ";
		cout<<"\n 4. Exit ";
		cout<<"\n Enter your choice :";
		cin>>ch;
		switch(ch)
		{
			case 1 : cout<<"\n Enter the element to be inserted ";
				 cin>>ele;
				 S=S+ele;
				 break;
			case 2 : S=-S;
				 break;
			case 3 : cout<<S;
				  break;
			default : return 0;
		}
	}
	
}
