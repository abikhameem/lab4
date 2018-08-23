//load the library
#include<iostream>
using namespace std;
//using main function
int main(){
//displaying operation
cout <<endl<<"the triangle ABC contains angles 'a','b','c' respectively"<<endl;
//declaring variable
float a,b,c,t;
//saving a from terminal
cout <<"define 'a' from 0 to 180:";
cin >>a;
cout <<"a="<<a<<"degrees"<<endl;
//saving 'b' from terminal
t=180-a;
//t is the maximum value b can take to define c
cout<<"define 'b' from 0 to 180:";
cin >>b;
cout <<"b="<<b<<"degrees"<<endl;
//operating and showing the result on c
c=180-a-b;
cout<<"c="<<c<<"degrees"<<endl;
//closing program
return 0;
}
