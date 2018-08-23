//load the library
#include<iostream>
using namespace std;
//using main function
int main(){
//displaying operation
cout<<"converting 'd' from centimeter to meter and kilometer"<<endl;
//declaring variable
double d;
cin >>d;
cout <<"d="<<d<<"cm"<<endl;
//operation in 'd' to convert it into m and km
double dm=(d/100);
double dkm=(d/100000);
//displaying results
cout <<"d="<<dm<<"m"<<endl;
cout <<"d="<<dkm<<"km"<<endl;
//closing program
return 0;
}
