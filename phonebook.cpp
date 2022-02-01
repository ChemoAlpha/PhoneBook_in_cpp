#include<iostream>
#include <string>
using namespace std;

 class PhoneBook
{
	public :
	    long number;
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
	int cntr=0;
	while(x!=5)
	{
		
		switch(x)
		{
			case 0:
	    	{
	    		int i;
	    		{
					if(cntr==0)
	    		{
	    			cout<<"your phonebook is empty please try adding some  into it\n";
					break;				}
					
				cout<<"Here are your "<<cntr<<" contacts :"<<endl;
				cout<<"Position  Name         Email          Number\n";
			cout<<"---------------------------------------------------------------"<<endl;	
				for(i=0;i<cntr;i++)
				{
					cout<<i+1<<"\t"<<p1[i].name<<"\t "<<p1[i].email<<"\t"<<p1[i].number<<"\n";
		     	}	
					
			cout<<"---------------------------------------------------------------"<<endl;	
			break;
					
				}
		    case 1:
		    	{
		    		string str1;
		    		string mail;
		    		string temp;
		    		
		    		getline(cin,temp);
		    		cout<<"enter Name:";
		    		getline(cin,str1);
		    		cout<<"enter email:";
		    		getline(cin,mail);
		    		cout<<"enter Number:";
		    	    long no;
					cin>>no; 
		    		cout<<endl;
		    		
		    		p1[cntr].number=no;
		    		p1[cntr].name=str1;
		    		p1[cntr].email=mail;
		    		cntr++;
		    		
		    	
		    		break;
				}
			case 2:
			
			
			
					if(cntr==0)
	    		{
	    			cout<<"your phonebook is empty please try adding some  into it\n";
					break;			
				}
					
				cout<<"Here are your "<<cntr<<" contacts :"<<endl;
				cout<<"Position  Name         Email          Number\n";
			cout<<"---------------------------------------------------------------"<<endl;	
				for(int i=0;i<cntr;i++)
				{
					cout<<i+1<<"\t"<<p1[i].name<<"\t "<<p1[i].email<<"\t"<<p1[i].number<<"\n";
		     	}	
					
			cout<<"---------------------------------------------------------------"<<endl;	
			
			cout<<"Enter postion of contact you want to remove :";
			int pos;
			if(pos>=cntr)
			{
				cout<<"Please Enter valid postion";
				break;
			}
			cin>>pos;
			pos--;
			PhoneBook p2;
			
			for(int j=pos;j<cntr;j++)
			{
				p2=p1[j];
				p1[j]=p1[j+1];
				p1[j+1]=p2;
			}
			cntr--;
			
			cout<<"Removed Successfully !\n";
			
					
					
					
					
					break;
				}
			case 3:
				{
					
				cout<<"Please postion of contact that you want to edit :";
				int pos;
				cin>>pos;
				pos--;
				if(pos>cntr)
				{
					cout<<"please enter valid postion";
					break;
				}
				
				cout<<"1:edit Name\t2:edit email\t3:editNumber\n";
				cout<<"Enter your option :";
				int ch;
				cin>>ch;
				
				switch(ch)
				{
					case 1:
						{
						cout<<"enter the New Name :";
						string temp;
						string blank;
						getline(cin,blank);
						getline(cin,temp);
						p1[pos].name=temp;
					    cout<<"Updated Sucessfully\n";
							break;
						}
						case 2:
						{
						cout<<"enter the New Email :";
						string temp;
						string blank;
						getline(cin,blank);
						getline(cin,temp);
						p1[pos].email=temp;
							cout<<"Updated Sucessfully\n";
							break;
						}
						case 3:
						{
						cout<<"enter the New Number:";
						long temp;
						cin>>temp;
						p1[pos].number=temp;
							cout<<"Updated Sucessfully\n";
							break;
						}
					
				}
				
					break;
				}
			case 4:
				{
					
					cout<<"You've Total of "<<cntr<<"  Contacts\n";
					
					
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
