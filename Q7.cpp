//load the library
#include<iostream>
#include<math.h>
using namespace std;
//starting main function
int main(){
//defining variable
float a;
double area;
cout <<"to find area of an equilateral triangle containing side 'a'"<<endl;
cout<<"a=";
cin>>a;
cout<<"a="<<a<<"units"<<endl;
area=(sqrt(3)/4)*a*a;
//showing result
cout<<"area of the triangle with side "<<a<<"units="<<area<<"sq units"<<endl;
//closing program
return 0;
}
