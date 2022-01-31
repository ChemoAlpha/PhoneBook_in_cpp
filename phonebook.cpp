#include<iostream>
#include <string>
using namespace std;

 class PhoneBook
{
	public :
		int number;
		string name;
		string email;
		
		
	     void insert(int no,string n,string e)
		{
			number=no;
	      	name=n;
			email=e;
		}
		void show()
		{
			
			cout<<name<<"\t"<<number<<"\t"<<email;
		}
		
};
int main()
{

	PhoneBook p1[30];
	
	cout<<"welcome to your Phone directory please choose from below option "<<endl;
	cout<<"---------------------------------------------------------------"<<endl;
	int x=0;
	cout<<"0:View your contacts\t1:Add contacts \t2:remove contact"<<endl;
	cout<<"3:Edit your Contact\t4:view number of contacts  5:exit\n";
		cout<<"---------------------------------------------------------------"<<endl;
	cout<<"enter your choice :";
	cin>>x;
	while(x!=5)
	{
		switch(x)
		{
			case 0:
				{
				int i;
			for(i=0;i<30;i++)	
			{
				cout<<p1[i].number<<"\t"<<p1[i].name<<"\t"<<p1[i].email<<"\n";
				
			}
					
					
					
					
					break;
					
				}
		    case 1:
		    	{
		    		break;
				}
			case 2:
				{
					break;
				}
			case 3:
				{
					break;
				}
			case 4:
				{
					break;
				}
			case 5:
				{
					break;
				}
			default :
				{
					cout<<"please choose according to menu"<<endl;
					break;
				}
		}
		
		
		
		
	cout<<"do youy want to continue please enter your choice :";
	cin>>x;	
	}
	
	
	return 0;
}
