#include<iostream>
using namespace std;
class Student
{ 
int usn;
float avg,m1,m2,m3;
char name[10];
public:
void read_data();
void compute();
void write_data();
};
void Student::read_data()
{
	cout<<"enter your usn:";
	cin>>usn;
	cout<<"enter your name:";
	cin>>name;	
	cout<<"enter marks of 3subjects:";
	cin>>m1>>m2>>m3;
}
void Student::compute()
{
	if((m1<m2)&&(m1<m3))
	{
		avg=(m2+m3)/2.0;
	}
	else if(m2<m3)
	{
		avg=(m1+m3)/2.0;
	}
	else
	{
		avg=(m1+m2)/2.0;
	}
}
void Student::write_data()
{
	cout<<"student details:\n";
	cout<<"student university number:"<<usn<<"\n";
	cout<<"mark1:"<<m1<<"\n";
	cout<<"mark2:"<<m2<<"\n";
	cout<<"mark3:"<<m3<<"\n";
	cout<<"average score:"<<avg<<"\n";
}
int main()
{
Student s[10];
int n,i;
cout<<"enter the no of students:";
cin>>n;
for(i=0;i<n;i++)
{
	s[i].read_data();
}
for(i=0;i<n;i++)
{
	s[i].compute();
}
for(i=0;i<n;i++)
{
	s[i].write_data();
}
return 0;
}

	
	








