#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class Bank
{
int acno;
float bal;
char nm[100],acctype[100];
public:
Bank(int acc_no,char*name,char*acc_type,float balance)
{
acno=acc_no;
strcpy(nm,name);
strcpy(acctype,acc_type);
bal=balance;
}
void deposit();
void withdraw();
void display();
};
void Bank::deposit()
{	
	int damt1;
	cout<<"enter the deposit amount:";
	cin>>damt1;
	bal=bal+damt1;
}
void Bank::withdraw()
{
	int wamt1;
	cout<<"enter the withdraw amount:";
	cin>>wamt1;
	if(wamt1>bal)
	{
		cout<<"cannot withdraw amount";
	}
	bal=bal-wamt1;
}
void Bank::display()
{
	cout<<"your account details is here:\n";
	cout<<"account no:"<<acno<<"\n";
	cout<<"account name:"<<nm<<"\n";
	cout<<"account type:"<<acctype<<"\n";
	cout<<"account balance:"<<bal<<"\n";
}
int main()
{
int acc_no;
char name[100],acc_type[100];
float balance;
cout<<"enter account no:";
cin>>acc_no;
cout<<"enter name:";
cin>>name;
cout<<"entr account type:";
cin>>acc_type;
cout<<"enter the balance:";
cin>>balance;
Bank b1(acc_no,name,acc_type,balance);
b1.deposit();
b1.withdraw();
b1.display();
return 0;
}
