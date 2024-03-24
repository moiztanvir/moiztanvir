#include<iostream>
#include<stdlib.h>
#include<unistd.h>
using namespace std;

class Time{
	int hr;
	int mn;
	int se;
public:
	Time(int h=0, int m=0, int s=0)
	{
		hr = h;
		mn = m;
		se = s;
	}
	void display()
	{
		int h=0,m=0,s=0;
		while(true)
		{
			system("cls");
			cout<<"TIMER -> ";
			cout<<h<<" : "<<m<<" : "<<s<<endl;
			s++;
			if(m==mn)
			{
				if(s==se)
				break;
			}
			if(m==60)
			{
				h++;
				m=0; 
			}
			if(s==60)
			{
				m++;
				se = 0;
			}
			sleep(1);
		}	
	}
};
