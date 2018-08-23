//load the library
#include<iostream>
using namespace std;
//using main function
int main(){
//displaying operation
cout <<"triangle has height 'h' and base 'b'.find area?"<<endl;
//declaring variable
float h,b;
cout<<"define 'b':";
cin >>b;
cout<<"b="<<b<<"units"<<endl;
cout<<"define 'h':";
cin >>h;
cout <<"h="<<h<<"units"<<endl;
//operation starting
float area=(b*h)/2;
cout<<"area of triangle with base:"<<b<<" units and height:"<<h<<"units="<<area<<"sq units"<<endl;
//closing program
return 0;
}
