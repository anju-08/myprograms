#include<iostream>
#include<stdlib.h>

using namespace std;

class Count
{
	public:
		int count;
		Count():count(5)
		{}
		void operator ++()
		{
			++count;
		}
		
		void operator --()
		{
			--count;
		}
		void getcount()
		{
			cout<<"\nNo. of people in bank = "<<count<<" \n";
		}
};

int main()
{
	int op;
	Count c;
	cout<<"no of people in bank now: 5\n";
	while(1)
	{
		
		cout<<"0.Exit\n1.enters\n2.leaves\nEnter option : ";
		cin>>op;
		switch(op)
		{
			case 0: exit(0);
			case 1:{
						++c;
						c.getcount();
						break;
				   }
			case 2:{
						--c;
						c.getcount();
						break;
				   }
			default : cout<<"\nInvalid option chosen\n";					
		}
	}
	return 0;
}
