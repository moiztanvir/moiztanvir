#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
using namespace std;

// COURSE CLASS
class Course{
protected:
	string course;
};

// QUIZ CLASS
class Quiz{
// PROTECTED DATA MEMBERS
protected:
  string *z;
  string *m1;
  string *t;
  string *d;
  string ans;
  string n, n1;
public:
    void settle(string course) // SETTLE FUNCTION TO SET THE QUIZ
    {
    	ofstream st;
    	st.open("course.txt");
    	st<<course;
		st.close();
    	if(course=="Programming Fundamentals") //1
    	{
    		z = new string[6];
	    	int h,m,s;
			string line;
			ifstream in("quiz1.txt");
			int i=-1;
			if(in.is_open())
			{
				while(getline(in, line))
				{
					if(i>=0)
					{
						z[i] = line;
					}
					i++;
					if(i>5)
					break;
				}
			}
			in.close();
			i=0;
			for(i;i<3;i++)
			{
				cout<<z[i]<<endl;
			}
			cout<<"Enter your choice: ";
			int y;
			cin>>y;
			for(i;i<6;i++)
			{
				cout<<z[i]<<endl;
			}
			cout<<"Enter your choice: ";
			int x;
			cin>>x;
			if(x==1)
			{
				int b=5,n=0;
				bool flag=0, flag2 = 0;
				m1 = new string[b];
				t = NULL;
				d = NULL;
				string line, str;
				ifstream in("quiz1.txt");
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							m1[n] = line;
							}
							n++;
						}
						if(line=="2efcde9")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				cout<<course<<endl;
				ofstream o;
				o.open("quiz1.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<m1[j]<<endl;
				}
				o.close();
			}
			if(x==2)
			{
				int b=3,n=0;
				bool flag = 0, flag2=0;
				t = new string[b];
				m1 = NULL;
				d = NULL;
				string line, str;
				ifstream in("quiz1.txt");
				int c=0;
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							t[n] = line;
							}
							n++;
						}
						if(line=="b94d27b")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				cout<<ans<<endl;
				cout<<course<<endl;
				ofstream o;
				o.open("quiz1.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<t[j]<<endl;
				}
				o.close();
			}
			if(x==3)
			{
				int b=1,n=0;
				bool flag = 0, flag2 = 0;
				d = new string[b];
				m1 = NULL;
				t = NULL;
				string line, str;
				ifstream in("quiz1.txt");
				int c=0;
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							d[n] = line;
							}
							n++;
						}
						if(line=="88f7ace")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				ofstream o;
				o.open("quiz1.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<d[j]<<endl;
				}
				o.close();
			}
			cout<<"Set the Time Limit of Quiz!"<<endl<<endl;
			cout<<"Enter the hours: ";
			cin>>h;
			cout<<"Enter the minutes: ";
			cin>>m;
			cout<<"Enter the seconds: ";
			cin>>s;
			
			ofstream os;
			os.open("time.txt");
			os<<h<<endl;
			os<<m<<endl;
			os<<s<<endl;
			os.close();
			cout<<"Quiz is settled"<<endl;
		}
		else if(course=="Object Oriented Programming") //2
    	{
    		z = new string[6];
	    	int h,m,s;
			string line;
			ifstream in("quiz2.txt");
			int i=-1;
			if(in.is_open())
			{
				while(getline(in, line))
				{
					if(i>=0)
					{
						z[i] = line;
					}
					i++;
					if(i>5)
					break;
				}
			}
			in.close();
			i=0;
			for(i;i<3;i++)
			{
				cout<<z[i]<<endl;
			}
			cout<<"Enter your choice: ";
			int y;
			cin>>y;
			for(i;i<6;i++)
			{
				cout<<z[i]<<endl;
			}
			cout<<"Enter your choice: ";
			int x;
			cin>>x;
			if(x==1)
			{
				int b=5,n=0;
				bool flag=0, flag2 = 0;
				m1 = new string[b];
				t = NULL;
				d = NULL;
				string line, str;
				ifstream in("quiz2.txt");
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							m1[n] = line;
							}
							n++;
						}
						if(line=="2efcde9")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				cout<<course<<endl;
				ofstream o;
				o.open("quiz2.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<m1[j]<<endl;
				}
				o.close();
			}
			if(x==2)
			{
				int b=3,n=0;
				bool flag = 0, flag2=0;
				t = new string[b];
				m1 = NULL;
				d = NULL;
				string line, str;
				ifstream in("quiz2.txt");
				int c=0;
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							t[n] = line;
							}
							n++;
						}
						if(line=="b94d27b")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				cout<<ans<<endl;
				cout<<course<<endl;
				ofstream o;
				o.open("quiz2.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<t[j]<<endl;
				}
				o.close();
			}
			if(x==3)
			{
				int b=1,n=0;
				bool flag = 0, flag2 = 0;
				d = new string[b];
				m1 = NULL;
				t = NULL;
				string line, str;
				ifstream in("quiz2.txt");
				int c=0;
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							d[n] = line;
							}
							n++;
						}
						if(line=="88f7ace")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				ofstream o;
				o.open("quiz2.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<d[j]<<endl;
				}
				o.close();
			}
			cout<<"Set the Time Limit of Quiz!"<<endl<<endl;
			cout<<"Enter the hours: ";
			cin>>h;
			cout<<"Enter the minutes: ";
			cin>>m;
			cout<<"Enter the seconds: ";
			cin>>s;
			
			ofstream os;
			os.open("time.txt");
			os<<h<<endl;
			os<<m<<endl;
			os<<s<<endl;
			os.close();
			cout<<"Quiz is settled"<<endl;
		}
		else if(course=="Introduction to Computing") //3
    	{
    		z = new string[6];
	    	int h,m,s;
			string line;
			ifstream in("quiz3.txt");
			int i=-1;
			if(in.is_open())
			{
				while(getline(in, line))
				{
					if(i>=0)
					{
						z[i] = line;
					}
					i++;
					if(i>5)
					break;
				}
			}
			in.close();
			i=0;
			for(i;i<3;i++)
			{
				cout<<z[i]<<endl;
			}
			cout<<"Enter your choice: ";
			int y;
			cin>>y;
			for(i;i<6;i++)
			{
				cout<<z[i]<<endl;
			}
			cout<<"Enter your choice: ";
			int x;
			cin>>x;
			if(x==1)
			{
				int b=5,n=0;
				bool flag=0, flag2 = 0;
				m1 = new string[b];
				t = NULL;
				d = NULL;
				string line, str;
				ifstream in("quiz3.txt");
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							m1[n] = line;
							}
							n++;
						}
						if(line=="2efcde9")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				cout<<course<<endl;
				ofstream o;
				o.open("quiz3.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<m1[j]<<endl;
				}
				o.close();
			}
			if(x==2)
			{
				int b=3,n=0;
				bool flag = 0, flag2=0;
				t = new string[b];
				m1 = NULL;
				d = NULL;
				string line, str;
				ifstream in("quiz3.txt");
				int c=0;
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							t[n] = line;
							}
							n++;
						}
						if(line=="b94d27b")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				cout<<ans<<endl;
				cout<<course<<endl;
				ofstream o;
				o.open("quiz3.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<t[j]<<endl;
				}
				o.close();
			}
			if(x==3)
			{
				int b=1,n=0;
				bool flag = 0, flag2 = 0;
				d = new string[b];
				m1 = NULL;
				t = NULL;
				string line, str;
				ifstream in("quiz3.txt");
				int c=0;
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							d[n] = line;
							}
							n++;
						}
						if(line=="88f7ace")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				ofstream o;
				o.open("quiz3.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<d[j]<<endl;
				}
				o.close();
			}
			cout<<"Set the Time Limit of Quiz!"<<endl<<endl;
			cout<<"Enter the hours: ";
			cin>>h;
			cout<<"Enter the minutes: ";
			cin>>m;
			cout<<"Enter the seconds: ";
			cin>>s;
			
			ofstream os;
			os.open("time.txt");
			os<<h<<endl;
			os<<m<<endl;
			os<<s<<endl;
			os.close();
			cout<<"Quiz is settled"<<endl;
		}
		else if(course=="Data Structures") //4
    	{
    		z = new string[6];
	    	int h,m,s;
			string line;
			ifstream in("quiz4.txt");
			int i=-1;
			if(in.is_open())
			{
				while(getline(in, line))
				{
					if(i>=0)
					{
						z[i] = line;
					}
					i++;
					if(i>5)
					break;
				}
			}
			in.close();
			i=0;
			for(i;i<3;i++)
			{
				cout<<z[i]<<endl;
			}
			cout<<"Enter your choice: ";
			int y;
			cin>>y;
			for(i;i<6;i++)
			{
				cout<<z[i]<<endl;
			}
			cout<<"Enter your choice: ";
			int x;
			cin>>x;
			if(x==1)
			{
				int b=5,n=0;
				bool flag=0, flag2 = 0;
				m1 = new string[b];
				t = NULL;
				d = NULL;
				string line, str;
				ifstream in("quiz4.txt");
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							m1[n] = line;
							}
							n++;
						}
						if(line=="2efcde9")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				cout<<course<<endl;
				ofstream o;
				o.open("quiz4.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<m1[j]<<endl;
				}
				o.close();
			}
			if(x==2)
			{
				int b=3,n=0;
				bool flag = 0, flag2=0;
				t = new string[b];
				m1 = NULL;
				d = NULL;
				string line, str;
				ifstream in("quiz4.txt");
				int c=0;
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							t[n] = line;
							}
							n++;
						}
						if(line=="b94d27b")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				cout<<ans<<endl;
				cout<<course<<endl;
				ofstream o;
				o.open("quiz4.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<t[j]<<endl;
				}
				o.close();
			}
			if(x==3)
			{
				int b=1,n=0;
				bool flag = 0, flag2 = 0;
				d = new string[b];
				m1 = NULL;
				t = NULL;
				string line, str;
				ifstream in("quiz4.txt");
				int c=0;
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							d[n] = line;
							}
							n++;
						}
						if(line=="88f7ace")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				ofstream o;
				o.open("quiz4.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<d[j]<<endl;
				}
				o.close();
			}
			cout<<"Set the Time Limit of Quiz!"<<endl<<endl;
			cout<<"Enter the hours: ";
			cin>>h;
			cout<<"Enter the minutes: ";
			cin>>m;
			cout<<"Enter the seconds: ";
			cin>>s;
			
			ofstream os;
			os.open("time.txt");
			os<<h<<endl;
			os<<m<<endl;
			os<<s<<endl;
			os.close();
			cout<<"Quiz is settled"<<endl;
		}
		else if(course=="Analysis of Algorithm") //5
    	{
    		z = new string[6];
	    	int h,m,s;
			string line;
			ifstream in("quiz5.txt");
			int i=-1;
			if(in.is_open())
			{
				while(getline(in, line))
				{
					if(i>=0)
					{
						z[i] = line;
					}
					i++;
					if(i>5)
					break;
				}
			}
			in.close();
			i=0;
			for(i;i<3;i++)
			{
				cout<<z[i]<<endl;
			}
			cout<<"Enter your choice: ";
			int y;
			cin>>y;
			for(i;i<6;i++)
			{
				cout<<z[i]<<endl;
			}
			cout<<"Enter your choice: ";
			int x;
			cin>>x;
			if(x==1)
			{
				int b=5,n=0;
				bool flag=0, flag2 = 0;
				m1 = new string[b];
				t = NULL;
				d = NULL;
				string line, str;
				ifstream in("quiz5.txt");
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							m1[n] = line;
							}
							n++;
						}
						if(line=="2efcde9")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				cout<<course<<endl;
				ofstream o;
				o.open("quiz5.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<m1[j]<<endl;
				}
				o.close();
			}
			if(x==2)
			{
				int b=3,n=0;
				bool flag = 0, flag2=0;
				t = new string[b];
				m1 = NULL;
				d = NULL;
				string line, str;
				ifstream in("quiz5.txt");
				int c=0;
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							t[n] = line;
							}
							n++;
						}
						if(line=="b94d27b")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				cout<<ans<<endl;
				cout<<course<<endl;
				ofstream o;
				o.open("quiz5.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<t[j]<<endl;
				}
				o.close();
			}
			if(x==3)
			{
				int b=1,n=0;
				bool flag = 0, flag2 = 0;
				d = new string[b];
				m1 = NULL;
				t = NULL;
				string line, str;
				ifstream in("quiz5.txt");
				int c=0;
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							d[n] = line;
							}
							n++;
						}
						if(line=="88f7ace")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				ofstream o;
				o.open("quiz5.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<d[j]<<endl;
				}
				o.close();
			}
			cout<<"Set the Time Limit of Quiz!"<<endl<<endl;
			cout<<"Enter the hours: ";
			cin>>h;
			cout<<"Enter the minutes: ";
			cin>>m;
			cout<<"Enter the seconds: ";
			cin>>s;
			
			ofstream os;
			os.open("time.txt");
			os<<h<<endl;
			os<<m<<endl;
			os<<s<<endl;
			os.close();
			cout<<"Quiz is settled"<<endl;
		}
		else if(course=="Software Requirements Engineering") //6
    	{
    		z = new string[6];
	    	int h,m,s;
			string line;
			ifstream in("quiz6.txt");
			int i=-1;
			if(in.is_open())
			{
				while(getline(in, line))
				{
					if(i>=0)
					{
						z[i] = line;
					}
					i++;
					if(i>5)
					break;
				}
			}
			in.close();
			i=0;
			for(i;i<3;i++)
			{
				cout<<z[i]<<endl;
			}
			cout<<"Enter your choice: ";
			int y;
			cin>>y;
			for(i;i<6;i++)
			{
				cout<<z[i]<<endl;
			}
			cout<<"Enter your choice: ";
			int x;
			cin>>x;
			if(x==1)
			{
				int b=5,n=0;
				bool flag=0, flag2 = 0;
				m1 = new string[b];
				t = NULL;
				d = NULL;
				string line, str;
				ifstream in("quiz6.txt");
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							m1[n] = line;
							}
							n++;
						}
						if(line=="2efcde9")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				cout<<course<<endl;
				ofstream o;
				o.open("quiz6.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<m1[j]<<endl;
				}
				o.close();
			}
			if(x==2)
			{
				int b=3,n=0;
				bool flag = 0, flag2=0;
				t = new string[b];
				m1 = NULL;
				d = NULL;
				string line, str;
				ifstream in("quiz6.txt");
				int c=0;
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							t[n] = line;
							}
							n++;
						}
						if(line=="b94d27b")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				cout<<ans<<endl;
				cout<<course<<endl;
				ofstream o;
				o.open("quiz6.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<t[j]<<endl;
				}
				o.close();
			}
			if(x==3)
			{
				int b=1,n=0;
				bool flag = 0, flag2 = 0;
				d = new string[b];
				m1 = NULL;
				t = NULL;
				string line, str;
				ifstream in("quiz6.txt");
				int c=0;
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							d[n] = line;
							}
							n++;
						}
						if(line=="88f7ace")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				ofstream o;
				o.open("quiz6.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<d[j]<<endl;
				}
				o.close();
			}
			cout<<"Set the Time Limit of Quiz!"<<endl<<endl;
			cout<<"Enter the hours: ";
			cin>>h;
			cout<<"Enter the minutes: ";
			cin>>m;
			cout<<"Enter the seconds: ";
			cin>>s;
			
			ofstream os;
			os.open("time.txt");
			os<<h<<endl;
			os<<m<<endl;
			os<<s<<endl;
			os.close();
			cout<<"Quiz is settled"<<endl;
		}
		else if(course=="Research Methodology") //7
    	{
    		z = new string[6];
	    	int h,m,s;
			string line;
			ifstream in("quiz7.txt");
			int i=-1;
			if(in.is_open())
			{
				while(getline(in, line))
				{
					if(i>=0)
					{
						z[i] = line;
					}
					i++;
					if(i>5)
					break;
				}
			}
			in.close();
			i=0;
			for(i;i<3;i++)
			{
				cout<<z[i]<<endl;
			}
			cout<<"Enter your choice: ";
			int y;
			cin>>y;
			for(i;i<6;i++)
			{
				cout<<z[i]<<endl;
			}
			cout<<"Enter your choice: ";
			int x;
			cin>>x;
			if(x==1)
			{
				int b=5,n=0;
				bool flag=0, flag2 = 0;
				m1 = new string[b];
				t = NULL;
				d = NULL;
				string line, str;
				ifstream in("quiz7.txt");
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							m1[n] = line;
							}
							n++;
						}
						if(line=="2efcde9")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				cout<<course<<endl;
				ofstream o;
				o.open("quiz7.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<m1[j]<<endl;
				}
				o.close();
			}
			if(x==2)
			{
				int b=3,n=0;
				bool flag = 0, flag2=0;
				t = new string[b];
				m1 = NULL;
				d = NULL;
				string line, str;
				ifstream in("quiz7.txt");
				int c=0;
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							t[n] = line;
							}
							n++;
						}
						if(line=="b94d27b")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				cout<<ans<<endl;
				cout<<course<<endl;
				ofstream o;
				o.open("quiz7.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<t[j]<<endl;
				}
				o.close();
			}
			if(x==3)
			{
				int b=1,n=0;
				bool flag = 0, flag2 = 0;
				d = new string[b];
				m1 = NULL;
				t = NULL;
				string line, str;
				ifstream in("quiz7.txt");
				int c=0;
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							d[n] = line;
							}
							n++;
						}
						if(line=="88f7ace")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				ofstream o;
				o.open("quiz7.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<d[j]<<endl;
				}
				o.close();
			}
			cout<<"Set the Time Limit of Quiz!"<<endl<<endl;
			cout<<"Enter the hours: ";
			cin>>h;
			cout<<"Enter the minutes: ";
			cin>>m;
			cout<<"Enter the seconds: ";
			cin>>s;
			
			ofstream os;
			os.open("time.txt");
			os<<h<<endl;
			os<<m<<endl;
			os<<s<<endl;
			os.close();
			cout<<"Quiz is settled"<<endl;
		}
		else if(course=="Big Data Analytics") //8
    	{
    		z = new string[6];
	    	int h,m,s;
			string line;
			ifstream in("quiz8.txt");
			int i=-1;
			if(in.is_open())
			{
				while(getline(in, line))
				{
					if(i>=0)
					{
						z[i] = line;
					}
					i++;
					if(i>5)
					break;
				}
			}
			in.close();
			i=0;
			for(i;i<3;i++)
			{
				cout<<z[i]<<endl;
			}
			cout<<"Enter your choice: ";
			int y;
			cin>>y;
			for(i;i<6;i++)
			{
				cout<<z[i]<<endl;
			}
			cout<<"Enter your choice: ";
			int x;
			cin>>x;
			if(x==1)
			{
				int b=5,n=0;
				bool flag=0, flag2 = 0;
				m1 = new string[b];
				t = NULL;
				d = NULL;
				string line, str;
				ifstream in("quiz8.txt");
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							m1[n] = line;
							}
							n++;
						}
						if(line=="2efcde9")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				cout<<course<<endl;
				ofstream o;
				o.open("quiz8.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<m1[j]<<endl;
				}
				o.close();
			}
			if(x==2)
			{
				int b=3,n=0;
				bool flag = 0, flag2=0;
				t = new string[b];
				m1 = NULL;
				d = NULL;
				string line, str;
				ifstream in("quiz8.txt");
				int c=0;
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							t[n] = line;
							}
							n++;
						}
						if(line=="b94d27b")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				cout<<ans<<endl;
				cout<<course<<endl;
				ofstream o;
				o.open("quiz8.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<t[j]<<endl;
				}
				o.close();
			}
			if(x==3)
			{
				int b=1,n=0;
				bool flag = 0, flag2 = 0;
				d = new string[b];
				m1 = NULL;
				t = NULL;
				string line, str;
				ifstream in("quiz8.txt");
				int c=0;
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							d[n] = line;
							}
							n++;
						}
						if(line=="88f7ace")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				ofstream o;
				o.open("quiz8.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<d[j]<<endl;
				}
				o.close();
			}
			cout<<"Set the Time Limit of Quiz!"<<endl<<endl;
			cout<<"Enter the hours: ";
			cin>>h;
			cout<<"Enter the minutes: ";
			cin>>m;
			cout<<"Enter the seconds: ";
			cin>>s;
			
			ofstream os;
			os.open("time.txt");
			os<<h<<endl;
			os<<m<<endl;
			os<<s<<endl;
			os.close();
			cout<<"Quiz is settled"<<endl;
		}
		else if(course=="Artificial Intelligence") //9
    	{
    		z = new string[6];
	    	int h,m,s;
			string line;
			ifstream in("quiz9.txt");
			int i=-1;
			if(in.is_open())
			{
				while(getline(in, line))
				{
					if(i>=0)
					{
						z[i] = line;
					}
					i++;
					if(i>5)
					break;
				}
			}
			in.close();
			i=0;
			for(i;i<3;i++)
			{
				cout<<z[i]<<endl;
			}
			cout<<"Enter your choice: ";
			int y;
			cin>>y;
			for(i;i<6;i++)
			{
				cout<<z[i]<<endl;
			}
			cout<<"Enter your choice: ";
			int x;
			cin>>x;
			if(x==1)
			{
				int b=5,n=0;
				bool flag=0, flag2 = 0;
				m1 = new string[b];
				t = NULL;
				d = NULL;
				string line, str;
				ifstream in("quiz9.txt");
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							m1[n] = line;
							}
							n++;
						}
						if(line=="2efcde9")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				cout<<course<<endl;
				ofstream o;
				o.open("quiz9.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<m1[j]<<endl;
				}
				o.close();
			}
			if(x==2)
			{
				int b=3,n=0;
				bool flag = 0, flag2=0;
				t = new string[b];
				m1 = NULL;
				d = NULL;
				string line, str;
				ifstream in("quiz9.txt");
				int c=0;
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							t[n] = line;
							}
							n++;
						}
						if(line=="b94d27b")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				cout<<ans<<endl;
				cout<<course<<endl;
				ofstream o;
				o.open("quiz9.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<t[j]<<endl;
				}
				o.close();
			}
			if(x==3)
			{
				int b=1,n=0;
				bool flag = 0, flag2 = 0;
				d = new string[b];
				m1 = NULL;
				t = NULL;
				string line, str;
				ifstream in("quiz9.txt");
				int c=0;
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							d[n] = line;
							}
							n++;
						}
						if(line=="88f7ace")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				ofstream o;
				o.open("quiz9.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<d[j]<<endl;
				}
				o.close();
			}
			cout<<"Set the Time Limit of Quiz!"<<endl<<endl;
			cout<<"Enter the hours: ";
			cin>>h;
			cout<<"Enter the minutes: ";
			cin>>m;
			cout<<"Enter the seconds: ";
			cin>>s;
			
			ofstream os;
			os.open("time.txt");
			os<<h<<endl;
			os<<m<<endl;
			os<<s<<endl;
			os.close();
			cout<<"Quiz is settled"<<endl;
		}
		else if(course=="Deep Learning") //10
    	{
    		z = new string[6];
	    	int h,m,s;
			string line;
			ifstream in("quiz10.txt");
			int i=-1;
			if(in.is_open())
			{
				while(getline(in, line))
				{
					if(i>=0)
					{
						z[i] = line;
					}
					i++;
					if(i>5)
					break;
				}
			}
			in.close();
			i=0;
			for(i;i<3;i++)
			{
				cout<<z[i]<<endl;
			}
			cout<<"Enter your choice: ";
			int y;
			cin>>y;
			for(i;i<6;i++)
			{
				cout<<z[i]<<endl;
			}
			cout<<"Enter your choice: ";
			int x;
			cin>>x;
			if(x==1)
			{
				int b=5,n=0;
				bool flag=0, flag2 = 0;
				m1 = new string[b];
				t = NULL;
				d = NULL;
				string line, str;
				ifstream in("quiz10.txt");
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							m1[n] = line;
							}
							n++;
						}
						if(line=="2efcde9")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				cout<<course<<endl;
				ofstream o;
				o.open("quiz10.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<m1[j]<<endl;
				}
				o.close();
			}
			if(x==2)
			{
				int b=3,n=0;
				bool flag = 0, flag2=0;
				t = new string[b];
				m1 = NULL;
				d = NULL;
				string line, str;
				ifstream in("quiz10.txt");
				int c=0;
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							t[n] = line;
							}
							n++;
						}
						if(line=="b94d27b")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				cout<<ans<<endl;
				cout<<course<<endl;
				ofstream o;
				o.open("quiz10.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<t[j]<<endl;
				}
				o.close();
			}
			if(x==3)
			{
				int b=1,n=0;
				bool flag = 0, flag2 = 0;
				d = new string[b];
				m1 = NULL;
				t = NULL;
				string line, str;
				ifstream in("quiz10.txt");
				int c=0;
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							d[n] = line;
							}
							n++;
						}
						if(line=="88f7ace")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				ofstream o;
				o.open("quiz10.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<d[j]<<endl;
				}
				o.close();
			}
			cout<<"Set the Time Limit of Quiz!"<<endl<<endl;
			cout<<"Enter the hours: ";
			cin>>h;
			cout<<"Enter the minutes: ";
			cin>>m;
			cout<<"Enter the seconds: ";
			cin>>s;
			
			ofstream os;
			os.open("time.txt");
			os<<h<<endl;
			os<<m<<endl;
			os<<s<<endl;
			os.close();
			cout<<"Quiz is settled"<<endl;
		}
		else if(course=="Digital Image Processing") //11
	    {
    		z = new string[6];
	    	int h,m,s;
			string line;
			ifstream in("quiz11.txt");
			int i=-1;
			if(in.is_open())
			{
				while(getline(in, line))
				{
					if(i>=0)
					{
						z[i] = line;
					}
					i++;
					if(i>5)
					break;
				}
			}
			in.close();
			i=0;
			for(i;i<3;i++)
			{
				cout<<z[i]<<endl;
			}
			cout<<"Enter your choice: ";
			int y;
			cin>>y;
			for(i;i<6;i++)
			{
				cout<<z[i]<<endl;
			}
			cout<<"Enter your choice: ";
			int x;
			cin>>x;
			if(x==1)
			{
				int b=5,n=0;
				bool flag=0, flag2 = 0;
				m1 = new string[b];
				t = NULL;
				d = NULL;
				string line, str;
				ifstream in("quiz11.txt");
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							m1[n] = line;
							}
							n++;
						}
						if(line=="2efcde9")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				cout<<course<<endl;
				ofstream o;
				o.open("quiz11.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<m1[j]<<endl;
				}
				o.close();
			}
			if(x==2)
			{
				int b=3,n=0;
				bool flag = 0, flag2=0;
				t = new string[b];
				m1 = NULL;
				d = NULL;
				string line, str;
				ifstream in("quiz11.txt");
				int c=0;
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							t[n] = line;
							}
							n++;
						}
						if(line=="b94d27b")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				cout<<ans<<endl;
				cout<<course<<endl;
				ofstream o;
				o.open("quiz11.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<t[j]<<endl;
				}
				o.close();
			}
			if(x==3)
			{
				int b=1,n=0;
				bool flag = 0, flag2 = 0;
				d = new string[b];
				m1 = NULL;
				t = NULL;
				string line, str;
				ifstream in("quiz11.txt");
				int c=0;
				if(in.is_open())
				{
					while(getline(in, line))
					{
						if(flag)
						{
							if(flag2)
							{
								ans = line;
							}
							if(line=="dabfac4")
							{
								flag2 = 1;	
							}
							if(n<b)
							{
							d[n] = line;
							}
							n++;
						}
						if(line=="88f7ace")
						{
							str = line;
							flag = 1;	
						}
						if(n>b+1)
							break;
					}
				}
				in.close();
				ofstream o;
				o.open("quiz11.txt");
				o<<course<<endl;
				o<<x<<endl;
				o<<ans<<endl;
				for(int j=0;j<b;j++)
				{
					o<<d[j]<<endl;
				}
				o.close();
			}
			cout<<"Set the Time Limit of Quiz!"<<endl<<endl;
			cout<<"Enter the hours: ";
			cin>>h;
			cout<<"Enter the minutes: ";
			cin>>m;
			cout<<"Enter the seconds: ";
			cin>>s;
			
			ofstream os;
			os.open("time.txt");
			os<<h<<endl;
			os<<m<<endl;
			os<<s<<endl;
			os.close();
			cout<<"Quiz is settled"<<endl;
		}
	}
	// DISPLAY FUNCTION
	void display()
	{
			if(m1!=NULL)
			{
			for(int i=0;i<5;i++)
            cout<<m1[i]<<endl;
        	}
        	else if(t!=NULL)
			{
			for(int i=0;i<3;i++)
            cout<<t[i]<<endl;
        	}
        	else if(d!=NULL)
			{
			for(int i=0;i<2;i++)
            cout<<d[i]<<endl;
        	}
    }
};

