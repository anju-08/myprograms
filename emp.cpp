#include<iostream>
using namespace std;
class Employee
{ 

int emp_num,emp_basic,sal,emp_da,net_sal,gs,emp_it;
char emp_name[20];
public:
void get_details();
void find_net_sal();
void show_emp_details();
};
void Employee::get_details()
{
	cout<<"enter your employee code:";
	cin>>emp_num;
	cout<<"enter employee name:";
	cin>>emp_name;
	cout<<"enter employee basic:";
	cin>>emp_basic;
}
void Employee::find_net_sal()
{
	emp_da=0.52*emp_basic;
	gs=emp_da+emp_basic;
	emp_it=0.30*gs;
	net_sal=gs-emp_it;
}
void Employee::show_emp_details()
{
	cout<<"employee details:\n";
	cout<<"employee code:"<<emp_num<<"\n";
	cout<<"employee name:"<<emp_name<<"\n";
	cout<<"employee basic:"<<emp_basic<<"\n";
	cout<<"employee da:"<<emp_da<<"\n";
	cout<<"employee it:"<<emp_it<<"\n";
	cout<<"employee net salary:"<<net_sal<<"\n";
}
int main()
{
Employee e[10];
int i,num;
cout<<"enter no of employees:";
cin>>num;
for(i=0;i<num;i++)
{
	e[i].get_details();
}
for(i=0;i<num;i++)
{
	e[i].find_net_sal();
}
for(i=0;i<num;i++)
{
	e[i].show_emp_details();
}
return 0;
}


