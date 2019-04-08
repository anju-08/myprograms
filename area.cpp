
#include<iostream>
#include<math.h>
using namespace std;

class Area
{
float a,b,c;
float area;
public:
void read(int x,int y)
{
a=x; 	
b=y;
area=0.5*a*b;
cout<<"\nThe area of right triangle is:  "<<area;	
}
void read(float x)
{
a=x;
area=(1.73*a*a)/2;	
cout<<"  \nThe area of equilateral traingle is:  "<<area;	
}
void read(float x,float y,float z)
{
a=x;
b=y;
c=z;
float semi=(float)(a+b+c)/2;
area=sqrt(semi*(semi-a)*(semi-b)*(semi-c));	
cout<<"  \nThe area of scalene traingle "<<area;
}	
};

int main()
{
float w,e,r;
Area a;
cout<<"Enter the base and height of right triangle";
cin>>w>>r;	
a.read(w,r);	
cout<<"Enter the side of equi. triangle";
cin>>w;	
a.read(w);
cout<<"Enter the sides of a scalene traingle";
cin>>w>>e>>r;	
a.read(w,e,r);
return 0;		
}

