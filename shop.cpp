#include<iostream>
using namespace std;
#include<string>
class Items
{
int itemcode[50];
float itemprice[50];
int count;
public:
void cnt()
{
count=0;
}
void getitem()
{
cout<<"\nenter itemcode :";
cin>>itemcode[count];
cout<<"\nenter item cost :";
cin>>itemprice[count];
count++;
}
void displaysum()
{
float sum=0;
for(int i=0;i<count;i++)
sum=sum+itemprice[i];
cout<<"\n___________________________\n";
cout<<"\ntotal value :"<<sum;
cout<<"\n___________________________\n";
}
void remove()
{
int a;
cout<<"\nenter item code :";
cin>>a;
for(int i=0;i<count;i++)
 if(itemcode[i]==a)
    itemprice[i]=0;
}
void displayitem()
{
cout<<"code price";
for(int i=0;i<count;i++)
{
cout<<"\n___________________________\n";
cout<<"\nitem code:"<<itemcode[i];
cout<<"\nitem price: "<<itemprice[i];
cout<<"\n___________________________\n";
}
cout<<"\n";
}
};


int main()
{
int x;
Items order;
order.cnt();

do
{
cout<<"\n1.ADD\n2.DISPLAY TOTAL COST\n3.DELETE\n4.DISPLAY ITEM\n";
cin>>x;
switch(x)
{
case 1:order.getitem();
 break;
case 2:order.displaysum();
 break;
case 3:order.remove();
break;
case 4:order.displayitem();
break;

default:"error";
}
}while(x!=5);
return 0;
}

