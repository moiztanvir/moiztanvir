#include<iostream>
#include"Teacher.h"
#include"Student.h"
#include<fstream>
#include<sstream>
#include<string>
using namespace std;

// MAIN CLASS OF USER IN WHICH WE COMPOSITE STUDENT CLASS AND TEACHER CLASS 
class user{
	Student a;
	Teacher b;
public:
	void display()  // DISPLAY FUNCTION
	{
		cout<<endl<<"-------------------------------- EXAMINATION SYSTEM ----------------------------------"<<endl<<endl;
		cout<<endl;
		cout<<"1. To login as an instructor!"<<endl;
		cout<<"2. To login as a student!"<<endl<<endl;
		int n;
		cout<<"Enter your choice : ";
		cin>>n;
		cout<<endl;
		if(n==1)
		{
			b.pass_t();
			b.data_write();
			b.display();
		}
		if(n==2)
		{
			a.login_id();
			a.pass();
			a.data_write();
			a.display();
		}
	}
};

int main()
{
	// OBJECT OF MAIN USER CLASS
	user c;
	c.display();

}

