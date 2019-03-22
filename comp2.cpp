#include<iostream>
using namespace std;
class complex
{
int real,imag;
public:
void set()
{
cout<<"\nenter real&imag";
cin>>real>>imag;
cout<<"real value :"<<real<<"\n";
cout<<"imaginary value :"<<imag;
}
friend complex operator+(complex,complex);
void display()
{
cout<<"\n___________________________\n";
cout<<"\nthe sum of complex nos : "<<real<<"+"<<imag<<"i";
cout<<"\n___________________________\n";
}
};
complex operator+(complex t1,complex t2)
{
complex temp;
temp.real=t1.real+t2.real;
temp.imag=t1.imag+t2.imag;
return(temp);
}
int main()
{
complex t1,t2;
t1.set();
t2.set();
t1=t1+t2;
t1.display();
return(0);
}
