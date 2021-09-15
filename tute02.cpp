/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/




#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

double salary,netsalary;
int etype,hours,otrate;

cout<<"enter ur salary:  ";
cin>>salary;

cout<<"enter the OT hours: ";
cin>>hours;

cout<<"enter etype:  ";
cin>>etype;

switch(etype){

case 1: otrate=1000;
        break;
case 2:otrate=1500;
        break;

case 3:otrate=1700;
        break;
defalt :cout<<"wrong input";
        break;
}




netsalary=salary+otrate*hours;
cout<<netsalary;

}