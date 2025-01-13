#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
int main()
{
float a,b;
int z;
void Power(float,float);
void Sine(float);
void Square(float);
void Cos(float);
void Tan(float);
void Log(float);
cout<<"WHAT YOU WANT TO FIND: "<<endl;
cout<<"Press '1' for Power: "<<endl;
cout<<"Press '2' for Sin: "<<endl;
cout<<"Press '3' for Square: "<<endl;
cout<<"Press '4' for Cos: "<<endl;
cout<<"Press '5' for Tan: "<<endl;
cout<<"Press '6' for Log: "<<endl;

cin>>z;
switch(z)
{
case 1:
cout<<"Enter the Number for Calculating its Power: "<<endl;
cin>>a;
cout<<"Enter the power for a number: "<<endl;
cin>>b;
Power(a,b);
break;

case 2:
cout<<"Enter the number for calculating SIN: "<<endl;
cin>>a;
Sine(a);
break;

case 3:
cout<<"Enter the number for calculating Square: "<<endl;
cin>>a;
Square(a);
break;

case 4:
cout<<"Enter the number for calculating COS: "<<endl;
cin>>a;
Cos(a);
break;

case 5:
cout<<"Enter the number for calculating TAN: "<<endl;
cin>>a;
Tan(a);
break;

case 6:
cout<<"Enter the number for calculating LOG: "<<endl;
cin>>a;
Log(a);
break;
}
}

void Power(float x,float y)
{
float p;
p = pow(x,y);
cout<<"Power: "<<p;
}

void Sine(float x)
{
float s;
s = sin(x);
cout<<"Sin: "<<s;
}

void Square(float x)
{
float sq;
sq = sqrt(x);
cout<<"Square of a given value is: "<<sq;
}

void Cos(float x)
{
float c;
c = cos(x);
cout<<"COS: "<<c;
}

void Tan(float x)
{
float t;
t = tan(x);
cout<<"TAN: "<<t;
}

void Log(float x)
{
float l;
l = log(x);
cout<<"Logarithm: "<<l;
}
