#include<iostream>
using namespace std;

class Employee
{
protected:
char name[20];
int exp,salary;
	
};

class Department:public Employee
{
public:
char dept_name[20];	
void read()
{
cout<<"Enter the name:";
cin>>name;	
cout<<"experience:";
cin>>exp;
cout<<"salary:";
cin>>salary;
cout<<"dept_name";
cin>>dept_name;	
}
};
class Senior:public Department
{
public:	
void senior1()
{
if(exp>10)	 
 {
 	cout<<"          the name: "<<name<<"  "<<"dept: "<<dept_name<<"  "<<"salary: "<<salary<<"  " ;
 }
	
}
};

int main()
{
Senior S[5];
for(int i=0;i<5;i++)	
	{
	 S[i].read();
	 
	}
for(int i=0;i<5;i++)	
	{ 
	 S[i].senior1();
	 
	}	
return 0;
}

