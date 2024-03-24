#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include"Quiz.h"
using namespace std;

// TEACHER CLASS INHERITED FROM COURSE CLASS
class Teacher: public Course{
	// DATA MEMBERS
	string t_names[11];
	string t_course[11];
	string id_t[11];
	string p_t[11];
	Quiz q1;
public:
	Teacher()  // CONSTRUCTOR
	{
		t_names[0] = "Teacher 1", id_t[0] = "teacher_1@nu.edu.pk", t_course[0] = "Programming Fundamentals";
		t_names[1] = "Teacher 2", id_t[1] = "teacher_2@nu.edu.pk", t_course[1] = "Object Oriented Programming";
		t_names[2] = "Teacher 3", id_t[2] = "teacher_3@nu.edu.pk", t_course[2] = "Introduction to Computing";
		t_names[3] = "Teacher 4", id_t[3] = "teacher_4@nu.edu.pk", t_course[3] = "Data Structures";
		t_names[4] = "Teacher 5", id_t[4] = "teacher_5@nu.edu.pk", t_course[4] = "Analysis of Algorithm";
		t_names[5] = "Teacher 6", id_t[5] = "teacher_6@nu.edu.pk", t_course[5] = "Software Requirements Engineering";
		t_names[6] = "Teacher 7", id_t[6] = "teacher_7@nu.edu.pk", t_course[6] = "Research Methodology";
		t_names[7] = "Teacher 8", id_t[7] = "teacher_8@nu.edu.pk", t_course[7] = "Big Data Analytics";
		t_names[8] = "Teacher 9", id_t[8] = "teacher_9@nu.edu.pk", t_course[8] = "Artificial Intelligence";
		t_names[9] = "Teacher 10", id_t[9] = "teacher_10@nu.edu.pk", t_course[9] = "Deep Learning";
		t_names[10] = "Teacher 11", id_t[10] = "teacher_11@nu.edu.pk", t_course[10] = "Digital Image Processing";
	}
	// TEACHER PASSWORD FUNCTION
	void data_t()
	{
		ofstream o;
		o.open("teacher1.txt");
		for(int i=0;i<11;i++)
		{
			o<<p_t[i]<<endl;
		}
		o.close();
	}
	void pass_t()
	{
		// char aa = 'A', x = 48;
		// for(int i=0;i<11;i++)
		// {
		// 	string n, c = "$";
		// 	n = x;
		// 	n = n + aa;
		// 	n = n.append("324");
		// 	aa++;
		// 	x++;
		// 	n = n + aa;
		// 	if(aa>91)
		// 		aa = 'A';
		// 	if(x>57)
		// 		x = 48;
		// 	p_t[i] = n.append(c);
		// }
		string line;
		int i=0;
		ifstream in("teacher1.txt");
		if(in.is_open())
		{
			while(getline(in, line))
			{
				p_t[i] = line;
				i++;
				if(i>10)
				break;
			}
		}
		in.close();
	}
	// TEACHER WRONG FUNCTION TO SET THE PASSWORD
	void wrong(int x, int j)
	{
		string n4;
		if(x==1)
		{
			for(int k=0;k<3;k++)
			{
				cout<<"Enter your new password : ";
				cin>>n4;
				if(n4.length()>5)
				break;
				else
				cout<<"Your password is not strong. Try again!!"<<endl;	
			}
			p_t[j] = n4;
			data_write();
			data_t();
			cout<<"Your Password is updated!"<<endl;
			cout<<"1. To login again!"<<endl;
			cout<<"2. To logout!"<<endl;
			cout<<"Enter your choice : ";
			int y;
			cin>>y;
			if(y==1)
			display();
			if(y==2)
			return;
		}
	}
	// FUNCTION TO WRITE THE DATA OF TEACHERS IN TEXT FILE
	void data_write()
	{
		ofstream o;
		o.open("teacher.txt");
		for(int i=0;i<11;i++)
		{
			o<<"Name : "<<t_names[i]<<endl;
			o<<"ID : "<<id_t[i]<<endl;
			o<<"Password : "<<p_t[i]<<endl;
		}
		o.close();
	}
	// MAIN DISPLAY FUNCTION
	void display()
	{
		cout<<"------------------------------------ LOGIN PAGE --------------------------------------"<<endl<<endl;
		string n1,n2;
		cout<<"Enter your ID : ";
		cin.ignore();
		getline(cin, n1);
		cout<<"Enter your Password : ";
		getline(cin, n2);
		cout<<endl;
		int l;
		for(int i=0;i<11;i++)
		{
			if(n1==id_t[i])
			l = i;
			if(n1==id_t[i] && n2==p_t[i])
			{
				int m=0;
				cout<<"You are successfully logged in!!"<<endl<<endl;
				cout<<"--------------------------------- INSTRUCTOR PORTAL ----------------------------------"<<endl<<endl;
				cout<<"Name: "<<t_names[i]<<endl;
				course = t_course[i];
				cout<<"Course: "<<course<<endl;
				for(int n=0;n<5;n++)
				{
					cout<<endl;
					cout<<"1. To take quiz!"<<endl;
					cout<<"2. To change your password!"<<endl;
					cout<<"3. To view the Analytics of class!"<<endl;
					cout<<"4. To view your Attendance of class!"<<endl;
					cout<<"5. To logout!"<<endl;
					int x;
					cout<<"Enter your choice : ";
					cin>>x;
					string n4;
					if(x==2)
					{
							for(int k=0;k<3;k++)
							{	
								cout<<endl<<"Enter your new password : ";
								cin>>n4;
								if(n4.length()>5)
								break;
								else
								cout<<"Your password is not strong. Try again!!"<<endl;	
							}
							p_t[i] = n4;
							data_write();
							data_t();
							cout<<"Your Password is updated!"<<endl;
							cout<<"1. To login again!"<<endl;
							cout<<"2. To logout!"<<endl;
							cout<<"Enter your choice : ";
							int y;
							cin>>y;
							if(y==1)
							display();
							if(y==2)
							break;	
					}
					else if(x==1)
					{
						q1.settle(course);
					}
					else if(x==3)
					{
						int zz=0, i=0;
						string line;
						ifstream o(("result.txt"));
						if(o.is_open())
						{
							while(getline(o,line))
							{
								if(line!="0")
									zz++;
								i++;
								if(i>215)
								break;
							}
						}
						o.close();
						cout<<"Student who gave exam are "<<zz<<endl;
						cout<<"Student who didn't gave exam are "<<216-zz<<endl;
					}
					else if(x==4)
					{
						int zz=0, i=0;
						string line;
						ifstream o(("attendance.txt"));
						if(o.is_open())
						{
							while(getline(o,line))
							{
								if(line=="P")
									zz++;
								i++;
								if(i>215)
								break;
							}
						}
						o.close();
						cout<<"Present Students : "<<zz<<endl;
						cout<<"Absent Students : "<<216-zz<<endl;
					}
					else if(x==5)
					break;
				}
				break;
			}
			else if(i==10)
			{
				cout<<"Wrong Password!"<<endl;
				cout<<"Wrong ID or Password!!"<<endl;
		        cout<<"1. To reset Password!!"<<endl;
				cout<<"2. Login Again!!"<<endl;
				int o;
				cout<<"Enter your choice : ";
				cin>>o;
				if(o==1)
					wrong(o, l);
				if(o==2)
					display();
				
				break;
			}
		}
	}
};








