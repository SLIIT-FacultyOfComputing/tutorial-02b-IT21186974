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


#include <iostream>
using namespace std;
 
int main()
{
 double salary, netSalary;
 int etype, otHrs, otRate;
 
 //printf("Enter Employee Type : ");
 cout << "Enter Employee Type : ";
 //scanf("%d", &etype);
 cin >> etype ;
 
 //printf("Enter Salary : ");
 cout << "Enter Salary : " ;
 //scanf("%f", &salary);
 cin >> salary ;
 
 //printf("Enter OtHrs : ");
 cout << "Enter OT Hours : " ;
 //scanf("%d", &otHrs); 
 cin >> otHrs ;
 
 switch (etype) {
 					case 1 :
						otRate = 1000;
 						break;
					case 2 :
 						otRate = 1500;
 						break;
 					default :
 						otRate = 1700;
 						break;
 				}
 				
 netSalary = salary + otHrs* otRate;
 
 //printf("Net Salary is %f ", netSalary);
 cout << "Net Salary is : " << netSalary << endl ;
 
 return 0;
}