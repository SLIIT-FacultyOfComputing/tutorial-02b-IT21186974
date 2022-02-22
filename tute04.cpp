/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

//function prototyping
long Factorial(int no);
long nCr(int n, int r);

int main() {
 int n, r;

 std::cout << "Enter a value for n ";
 std::cin >> n;
 std::cout << "Enter a value for r ";
 std::cin >> r;

 std::cout << "nCr = ";

 std::cout << nCr(n,r);
 std::cout << std::endl;

return 0;
}

//implimentation of nCr function
long nCr (int n, int r)
{
	int x = (n-r);
	long nCr;
	
	Factorial(n);
	Factorial(r);
	Factorial(x);
	
	nCr = Factorial(n) / (Factorial(r)*Factorial(x));
	
	return nCr;
}

//implimentation of Factorial function
long Factorial(int no)
{
	int y=1;
	
 	for (no; no >= 1; no--) 
 		{
 			y = y * no; //factorial calculation
 		}
 		
 	return y;	
}