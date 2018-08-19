//====================================
// Author: James Anthony Ortiz
// Purpose: Illinstrate how pointers 
// to functions work in a cpp program
//====================================

#include <iostream>
#include <cmath>

double f(double x)
{
	//Returns twice the value of the number:
	return 2 * x;
}//f function:

//f is a pointer to the function f(),
//*f is a function itself, and (*f)(7)
//is a call to the function

double sum (double (*f) (double), int n, int m)
{
	double result  = 0;
	
	//For-loop:
	
	for(int i = n; i <= m; i++)
	{
		result += f(i);
	}
	
	return result;
}//Sum function:

double root(double (*f) (double), double a, double b, double epsilon)
{
	double middle = (a + b) / 2;
	while (f(middle) != 0 && fabs(b - a) > epsilon)
	{
		if(f(a) * f (middle) < 0)
		{
			b = middle;
		}			
		else
			a = middle;
		middle = (a + b) / 2;
	}
	
	return middle;
}	//root-function 



int main(void)
{
	//The function sum can be called now with any built-in
	//user defined double function.
	
	std::cout << sum(f, 1, 5) << std::endl;
	
	
	std::cout << root(f, 1, 2, 3) << std::endl;
	return 0;
}//end main
