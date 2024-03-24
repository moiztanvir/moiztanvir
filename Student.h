#include<iostream>
#include<fstream>
#include<sstream>
#include<unistd.h>
#include<stdlib.h>
#include<string>
using namespace std;

// STUDENT CLASS INHERITED FROM QUIZ CLASS
class Student: public Quiz
{
	// DATA MEMBERS
	string roll_num[216];
	string name[216];
	int PF[216];
	int OOP[216];
	int ITC[216];
	int DS[216];
	int AA[216];
	int SRE[216];
	int RM[216];
	int BDA[216];
	int AI[216];
	int DL[216];
	int DIP[216];
	int res[216];
	string *c;
	string q;
	char att[216];
	string id_s[216];
	string p_s[216];
public:
	Student() //CONSTRUCTOR
	{
		// READING DATA FROM PROVIDED CSV FILE
		ifstream inputFile("proj.csv");
	
		if(inputFile.is_open())
		{
			cout<<"";
		}
		else
		cout<<"Not Opened";
		string l;
	    string c;
	    const int main_rows = 1; // Maximum number of rows 
	    int row = 0;
	    int i=0,j=0,v=-2;
		while(getline(inputFile, l)) 
		{
	        if(row>=main_rows) 
			{
	            cout<<"Limit exceeded!"<<endl;
	            break;
	        }
	        stringstream lineStream(l);
	        string cell;
	        j=2;
	        while(getline(lineStream, cell, ',')) 
			{
				if(i>1)
				{
					if(j==3)
						roll_num[v]=cell;
					else if(j==4)
						name[v]=cell;
					else if(j==5)
						PF[v]=(int)(cell[0])-48;
					else if(j==6)
						OOP[v]=(int)(cell[0])-48;
					else if(j==7)
						ITC[v]=(int)(cell[0])-48;
					else if(j==8)
						DS[v]=(int)(cell[0])-48;
					else if(j==9)
						AA[v]=(int)(cell[0])-48;
					else if(j==10)
						SRE[v]=(int)(cell[0])-48;
					else if(j==11)
						RM[v]=(int)(cell[0])-48;
					else if(j==12)
					    BDA[v]=(int)(cell[0])-48;
					else if(j==13)
						AI[v]=(int)(cell[0])-48;
					else if(j==14)
						DL[v]=(int)(cell[0])-48;
					else if(j==15)
						DIP[v]=(int)(cell[0])-48;
					j++;
				}
	        }
	        v++;
	        i++;
	        if(i>217)
	        break;
	    }
	    inputFile.close();
	}
	// STUDENT LOGIN ID FUNCTION
	void login_id()
	{
		for(int i=0;i<216;i++)
		{
			string c = "i", n=roll_num[i], n2="      ";
			int k=0;
			for(int j=0;n[j]!='\0';j++)
			{
				if(n[j]>47 && n[j]<58)
				{
					n2[k] = n[j];
					k++;
				}
			}
			id_s[i] = c.append(n2);
			id_s[i] = id_s[i].append("@nu.edu.pk");
		}
	}
	void attendance()
	{
		// ofstream o;
		// o.open("attendance.txt");
		// for(int i=0;i<216;i++)
		// {
		// 	o<<'A'<<endl;
		// }
		// o.close();
		ofstream o;
		o.open("attendance.txt");
		for(int i=0;i<216;i++)
		{
			if(att[i]=='P')
			o<<'P'<<endl;
			else
			o<<'A'<<endl;
		}
		o.close();
	}
	void result()
	{
		// ofstream o;
		// o.open("result.txt");
		// for(int i=0;i<216;i++)
		// {
		// 	o<<0<<endl;;
		// }
		//  o.close();
		ofstream o;
		o.open("result.txt");
		for(int i=0;i<216;i++)
		{
			o<<res[i]<<endl;;
		}
		o.close();
	}
	void d_p()
	{
		ofstream o;
		o.open("student1.txt");
		for(int i=0;i<216;i++)
		{
			o<<p_s[i]<<endl;
		}
		o.close();
	}
	// STUDENT PASSWORD FUNCTION
	void pass()
	{
		// char aa = 'A', x = 47;
		// for(int i=0;i<216;i++)
		// {
		// 	string n, c = "$";
		// 	n = x;
		// 	n = n + aa;
		// 	n = n.append("0190");
		// 	aa++;
		// 	x++;
		// 	n = n + aa;
		// 	if(aa>91)
		// 		aa = 'A';
		// 	if(x>58)
		// 		x = 47;
		// 	p_s[i] = n.append(c);
		// }
		string line;
		int i=0;
		ifstream in("student1.txt");
		if(in.is_open())
		{
			while(getline(in, line))
			{
				p_s[i] = line;
				i++;
				if(i>215)
				break;
			}
		}
		in.close();
	}
	// STUDENT WRONG FUNCTION TO SET THE PASSWORD
	void wrong(int x, int j)
	{
		string n3,n4;
		if(x==1)
		{
			for(int k=0;k<3;k++)
			{
				n4 = "";
				cout<<"Enter your new password : ";
				cin>>n4;
				if(n4.length()>5)
				break;
				else
				cout<<"Your password is not strong. Try again!!"<<endl;	
			}
			p_s[j] = n4;
			data_write();
			d_p();
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
	// STUDENT DATA WRITE FUNCTION THAT WRITES THE DATA IN TEXT FILE
	void data_write()
	{
		// WRITING DATA
		ofstream o;
		o.open("student.txt");
		for(int i=0;i<216;i++)
		{
			o<<"ID : "<<id_s[i]<<endl;
			o<<"Password : "<<p_s[i]<<endl;
			o<<"Result : "<<res[i]<<endl;
			if(att[i]=='P')
			o<<"Attendance : "<<att[i]<<endl;
			else
			o<<"Attendance : A"<<endl;
		}
		o.close();
	}
	// MAIN DISPLAY FUNCTION
	void display()
	{
		// attendance();
		// result();
		cout<<"------------------------------------ LOGIN PAGE --------------------------------------"<<endl<<endl;
		string n1, n2, a, b;
		int n=0,y,flag=0;
		c = new string[10];
		cout<<"Enter your ID : ";
		cin.ignore();
		getline(cin, n1);
		
		cout<<"Enter your Password : ";
		getline(cin, n2);
		cout<<endl;
		
		ifstream st("course.txt");
		string str;
		if(st.is_open())
		{
			while(getline(st, str))
			q = str;
		}
		st.close();
		int l;
		for(int i=0;i<216;i++)
		{
			if(n1==id_s[i])
			l = i;
			if(n1==id_s[i] && n2==p_s[i])
			{
				cout<<"You are successfully logged in!!"<<endl<<endl;
				cout<<"---------------------------------- STUDENT PORTAL ------------------------------------"<<endl<<endl;
				cout<<"Name: "<<name[i]<<endl;
				cout<<"Roll no. "<<roll_num[i]<<endl<<endl;
				cout<<"1. To view your courses!"<<endl;
				cout<<"2. To change your password!"<<endl;
				cout<<"3. To give the quiz!"<<endl;
				cout<<"4. To logout!"<<endl;
				int x;
				cout<<"Enter your choice : ";
				cin>>x;
				
				// CONDITIONS FOR COURSES
				
				if(PF[i]==1)
				{
					c[n] = "Programming Fundamentals";
				n++;
				}
				if(OOP[i]==1)
				{
					c[n] = "Object Oriented Programming";
				n++;
				}
				if(ITC[i]==1)
				{
					c[n] = "Introduction to Computing";
				n++;
				}
				if(DS[i]==1)
				{
					c[n] = "Data Structures";
				n++;
				}
				if(AA[i]==1)
				{
					c[n] = "Analysis of Algorithm";
				n++;
				}
				if(SRE[i]==1)
				{
					c[n] = "Software Requirement Engineering";
				n++;
				}
				if(RM[i]==1)
				{
					c[n] = "Research Methodology";
				n++;
				}
				if(BDA[i]==1)
				{
					c[n] = "Big Data Analytics";
				n++;
				}
				if(AI[i]==1)
				{
					c[n] = "Artificial Intelligence";
				n++;
				}
				if(DL[i]==1)
				{
					c[n] = "Deep Learning";
				n++;
				}
				if(DIP[i]==1)
				{
					c[n] = "Digital Image Processing";
				n++;
				}
				
				if(x==1)
				{
					cout<<"Registered Courses : "<<endl;
					for(int k=0;k<n;k++)
					{
						cout<<c[k]<<endl;
					}
					cout<<"Press 3 to give the quiz!"<<endl;
					cout<<"Press 4 to logout!"<<endl;
					cout<<"Enter your choice : ";
					cin>>x;
				}
				if(x==2)
				{
					// TO UPDATE PASSWORD
					string n3,n4;
					cout<<"Enter your new password : ";
					cin>>n4;
					p_s[i] = n4;
					data_write();
					d_p();
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
				if(x==3)
				{
					// TIME READING
					int h=0,m=0,syc=0,g=0;
					string sy;
					ifstream is("time.txt");
					if(is.is_open())
					{
						while(getline(is, sy))
						{
						if(g==0)
						{
							if(sy[1]!='\0')
							{
								h = (int)(sy[0]) - 48;
								h = h*10 + ((int)(sy[1]) - 48);
							}
							else
							{
								h = (int)(sy[0]) - 48;
							}
						}
						if(g==1)
						{
							if(sy[1]!='\0')
							{
								m = (int)(sy[0]) - 48;
								m = m*10 + ((int)(sy[1]) - 48);
							}
							else
							{
								m = (int)(sy[0]) - 48;
							}
						}
						if(g==2)
						{
							if(sy[1]!='\0')
							{
								syc = (int)(sy[0]) - 48;
								syc = syc*10 + ((int)(sy[1]) - 48);
							}
							else
							{
								syc = (int)(sy[0]) - 48;
							}
						}
						g++;
						if(g>2)
						break;
						}
					}
					is.close();
					
					// COURSES MATCHING CONDITIONS
					
					if(q=="Programming Fundamentals") //1
					{
						int j=0;
						string line;
						ifstream in("quiz1.txt");
						if(in.is_open())
						{
							while(getline(in, line))
							{
								if(j==0)
								{
									for(int k=0;k<n;k++)
									{
										if(c[k]==line)
										{
											flag = 1;
											break;
										}
									}
									if(flag==0)
									{
										cout<<"You cannot give the exam because you are not registered in this course or else the teacher has not created any quiz!!"<<endl;
										break;
									}
									cout<<endl<<"Your time starts now!!"<<endl;
									cout<<"You have "<<h<<" hours "<<m<<" minutes and "<<syc<<" seconds "<<endl;
									cout<<endl<<"Answer the following question"<<endl<<endl;
								}
								if(j==1)
								{
									y = (int)(line[0])-48;
								}
								if(j==2)
								a = line;
								if(j>2)
								cout<<line<<endl;
								j++;
							}
						}
						in.close();
					}
					else if(q=="Object Oriented Programming") //2
					{
						int j=0;
						string line;
						ifstream in("quiz2.txt");
						if(in.is_open())
						{
							while(getline(in, line))
							{
								if(j==0)
								{
									for(int k=0;k<n;k++)
									{
										if(c[k]==line)
										{
											flag = 1;
											break;
										}
									}
									if(flag==0)
									{
										cout<<"You cannot give the exam because you are not registered in this course or else the teacher has not created any quiz!!!!"<<endl;
										break;
									}
									cout<<endl<<"Your time starts now!!"<<endl;
									cout<<"You have "<<h<<" hours "<<m<<" minutes and "<<syc<<" seconds "<<endl;
									cout<<endl<<"Answer the following question"<<endl<<endl;
								}
								if(j==1)
								{
									y = (int)(line[0])-48;
								}
								if(j==2)
								a = line;
								if(j>2)
								cout<<line<<endl;
								j++;
							}
						}
						in.close();
					}
					else if(q=="Introduction to Computing") //3
					{
						int j=0;
						string line;
						ifstream in("quiz3.txt");
						if(in.is_open())
						{
							while(getline(in, line))
							{
								if(j==0)
								{
									for(int k=0;k<n;k++)
									{
										if(c[k]==line)
										{
											flag = 1;
											break;
										}
									}
									if(flag==0)
									{
										cout<<"You cannot give the exam because you are not registered in this course or else the teacher has not created any quiz!!"<<endl;
										break;
									}
									cout<<endl<<"Your time starts now!!"<<endl;
									cout<<"You have "<<h<<" hours "<<m<<" minutes and "<<syc<<" seconds "<<endl;
									cout<<endl<<"Answer the following question"<<endl<<endl;
								}
								if(j==1)
								{
									y = (int)(line[0])-48;
								}
								if(j==2)
								a = line;
								if(j>2)
								cout<<line<<endl;
								j++;
							}
						}
						in.close();
					}
					else if(q=="Data Structures") //4
					{
						int j=0;
						string line;
						ifstream in("quiz4.txt");
						if(in.is_open())
						{
							while(getline(in, line))
							{
								if(j==0)
								{
									for(int k=0;k<n;k++)
									{
										if(c[k]==line)
										{
											flag = 1;
											break;
										}
									}
									if(flag==0)
									{
										cout<<"You cannot give the exam because you are not registered in this course or else the teacher has not created any quiz!!"<<endl;
										break;
									}
									cout<<endl<<"Your time starts now!!"<<endl;
									cout<<"You have "<<h<<" hours "<<m<<" minutes and "<<syc<<" seconds "<<endl;
									cout<<endl<<"Answer the following question"<<endl<<endl;
								}
								if(j==1)
								{
									y = (int)(line[0])-48;
								}
								if(j==2)
								a = line;
								if(j>2)
								cout<<line<<endl;
								j++;
							}
						}
						in.close();
					}
					else if(q=="Analysis of Algorithm") //5
					{
						int j=0;
						string line;
						ifstream in("quiz5.txt");
						if(in.is_open())
						{
							while(getline(in, line))
							{
								if(j==0)
								{
									for(int k=0;k<n;k++)
									{
										if(c[k]==line)
										{
											flag = 1;
											break;
										}
									}
									if(flag==0)
									{
										cout<<"You cannot give the exam because you are not registered in this course or else the teacher has not created any quiz!!"<<endl;
										break;
									}
									cout<<endl<<"Your time starts now!!"<<endl;
									cout<<"You have "<<h<<" hours "<<m<<" minutes and "<<syc<<" seconds "<<endl;
									cout<<endl<<"Answer the following question"<<endl<<endl;
								}
								if(j==1)
								{
									y = (int)(line[0])-48;
								}
								if(j==2)
								a = line;
								if(j>2)
								cout<<line<<endl;
								j++;
							}
						}
						in.close();
					}
					else if(q=="Software Requirements Engineering") //6
					{
						int j=0;
						string line;
						ifstream in("quiz6.txt");
						if(in.is_open())
						{
							while(getline(in, line))
							{
								if(j==0)
								{
									for(int k=0;k<n;k++)
									{
										if(c[k]==line)
										{
											flag = 1;
											break;
										}
									}
									if(flag==0)
									{
										cout<<"You cannot give the exam because you are not registered in this course or else the teacher has not created any quiz!!"<<endl;
										break;
									}
									cout<<endl<<"Your time starts now!!"<<endl;
									cout<<"You have "<<h<<" hours "<<m<<" minutes and "<<syc<<" seconds "<<endl;
									cout<<endl<<"Answer the following question"<<endl<<endl;
								}
								if(j==1)
								{
									y = (int)(line[0])-48;
								}
								if(j==2)
								a = line;
								if(j>2)
								cout<<line<<endl;
								j++;
							}
						}
						in.close();
					}
					else if(q=="Research Methodology") //7
					{
						int j=0;
						string line;
						ifstream in("quiz7.txt");
						if(in.is_open())
						{
							while(getline(in, line))
							{
								if(j==0)
								{
									for(int k=0;k<n;k++)
									{
										if(c[k]==line)
										{
											flag = 1;
											break;
										}
									}
									if(flag==0)
									{
										cout<<"You cannot give the exam because you are not registered in this course or else the teacher has not created any quiz!!"<<endl;
										break;
									}
									cout<<endl<<"Your time starts now!!"<<endl;
									cout<<"You have "<<h<<" hours "<<m<<" minutes and "<<syc<<" seconds "<<endl;
									cout<<endl<<"Answer the following question"<<endl<<endl;
								}
								if(j==1)
								{
									y = (int)(line[0])-48;
								}
								if(j==2)
								a = line;
								if(j>2)
								cout<<line<<endl;
								j++;
							}
						}
						in.close();
					}
					else if(q=="Big Data Analytics") //8
					{
						int j=0;
						string line;
						ifstream in("quiz8.txt");
						if(in.is_open())
						{
							while(getline(in, line))
							{
								if(j==0)
								{
									for(int k=0;k<n;k++)
									{
										if(c[k]==line)
										{
											flag = 1;
											break;
										}
									}
									if(flag==0)
									{
										cout<<"You cannot give the exam because you are not registered in this course or else the teacher has not created any quiz!!"<<endl;
										break;
									}
									cout<<endl<<"Your time starts now!!"<<endl;
									cout<<"You have "<<h<<" hours "<<m<<" minutes and "<<syc<<" seconds "<<endl;
									cout<<endl<<"Answer the following question"<<endl<<endl;
								}
								if(j==1)
								{
									y = (int)(line[0])-48;
								}
								if(j==2)
								a = line;
								if(j>2)
								cout<<line<<endl;
								j++;
							}
						}
						in.close();
					}
					else if(q=="Artificial Intelligence")  //9
					{
						int j=0;
						string line;
						ifstream in("quiz9.txt");
						if(in.is_open())
						{
							while(getline(in, line))
							{
								if(j==0)
								{
									for(int k=0;k<n;k++)
									{
										if(c[k]==line)
										{
											flag = 1;
											break;
										}
									}
									if(flag==0)
									{
										cout<<"You cannot give the exam because you are not registered in this course or else the teacher has not created any quiz!!"<<endl;
										break;
									}
									cout<<endl<<"Your time starts now!!"<<endl;
									cout<<"You have "<<h<<" hours "<<m<<" minutes and "<<syc<<" seconds "<<endl;
									cout<<endl<<"Answer the following question"<<endl<<endl;
								}
								if(j==1)
								{
									y = (int)(line[0])-48;
								}
								if(j==2)
								a = line;
								if(j>2)
								cout<<line<<endl;
								j++;
							}
						}
						in.close();
					}
					else if(q=="Deep Learning") //10
					{
						int j=0;
						string line;
						ifstream in("quiz10.txt");
						if(in.is_open())
						{
							while(getline(in, line))
							{
								if(j==0)
								{
									for(int k=0;k<n;k++)
									{
										if(c[k]==line)
										{
											flag = 1;
											break;
										}
									}
									if(flag==0)
									{
										cout<<"You cannot give the exam because you are not registered in this course or else the teacher has not created any quiz!!"<<endl;
										break;
									}
									cout<<endl<<"Your time starts now!!"<<endl;
									cout<<"You have "<<h<<" hours "<<m<<" minutes and "<<syc<<" seconds "<<endl;
									cout<<endl<<"Answer the following question"<<endl<<endl;
								}
								if(j==1)
								{
									y = (int)(line[0])-48;
								}
								if(j==2)
								a = line;
								if(j>2)
								cout<<line<<endl;
								j++;
							}
						}
						in.close();
					}
					else if(q=="Digital Image Processing") //11
					{
						int j=0;
						string line;
						ifstream in("quiz11.txt");
						if(in.is_open())
						{
							while(getline(in, line))
							{
								if(j==0)
								{
									for(int k=0;k<n;k++)
									{
										if(c[k]==line)
										{
											flag = 1;
											break;
										}
									}
									if(flag==0)
									{
										cout<<"You cannot give the exam because you are not registered in this course or else the teacher has not created any quiz!!"<<endl;
										break;
									}
									cout<<endl<<"Your time starts now!!"<<endl;
									cout<<"You have "<<h<<" hours "<<m<<" minutes and "<<syc<<" seconds "<<endl;
									cout<<endl<<"Answer the following question"<<endl<<endl;
								}
								if(j==1)
								{
									y = (int)(line[0])-48;
								}
								if(j==2)
								a = line;
								if(j>2)
								cout<<line<<endl;
								j++;
							}
						}
						in.close();
					}
					
					if(flag!=0)
					{
						cout<<"Enter the Answer : ";
						cin.ignore();
						getline(cin, b);
						if(y==3)
						{
							if(b.length()>20)
							res[i] = 9;
							else if(b.length()>15)
							res[i] = 7;
							else if(b.length()>10)
							res[i] = 5;
							else if(b.length()>5)
							res[i] = 2;
							else
							res[i] = 0;
						}
						else
						{
							if(a==b)
							res[i] = 10;
							else
							res[i] = 0;
						}
						att[i] = 'P';
						data_write();
						attendance();
						result();
						int m=0;
						for(int k=0;k<5;k++)
						{
						cout<<endl<<"1. To see the result of your quiz!"<<endl;
						cout<<"2. To see the answer key of the quiz!"<<endl;
						cout<<"3. To view your Attendance!"<<endl;
						cout<<"4. To view Analytics!"<<endl;
						cout<<"5. To Logout!!"<<endl;
						cout<<"Enter your choice : ";
						cin>>m;
						if(m==1)
						{
							cout<<"Your Marks in recent quiz is : "<<res[i]<<endl;
						}
						if(m==2 && y!=3)
						{
							cout<<"Answer : "<<a<<endl;
						}
						if(m==3)
						{
							cout<<"Attendance : "<<att[i]<<endl;
						}
						if(m==4)
						{
							int zz=0,yy=0;
							ofstream o;
							o.open("student.txt");
							for(int i=0;i<216;i++)
							{
								if(att[i]=='P')
								zz++;
								yy = yy + res[i];
							}
							o.close();
							cout<<"Student who gave exam are "<<zz<<endl;
							cout<<"Student who didn't gave exam are "<<216-zz<<endl;
							cout<<"Class Average is "<<yy/(float)(216)<<endl;
						}
						if(m==5)
						{
							break;
						}
						}
					}
				}
				if(x==4)
				{
					break;
				}
				
				break;
			}
			else if(i==215)
			{
				cout<<"Wrong Password!!"<<endl;
				cout<<"1. To reset it!!"<<endl;
				cout<<"2. To login again!!"<<endl;
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



