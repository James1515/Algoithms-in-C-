//========================================
// Author: James Anthony Ortiz
// Purpose: Illustrate pointers and their 
// as well as reference variables in a 
// program.
//========================================

#include <iostream>

void f1 (int i, int *j, int &k)
{
	i = 1; 
	*j = 2;
	k = 3;
}

int& f2(int a[], int i)
{
	return a[i];
}

int *f3(int a[], int i)
{
	return &a[i];
}
int main(void)
{
	int n = 5, *p = &n, &r = n;
	
	std::cout << n << ' ' << *p << ' ' << r << std::endl;
	
	n = 7;
	
	std::cout << n << ' ' << *p << ' ' << r << std::endl;
	
	*p = 9;
	
	std::cout << n << ' ' << *p << ' ' << r << std::endl;
	
	r = 10; 
	
	std::cout << n << ' ' << *p << ' ' << r << std::endl;
	
	
	//----------------------------------------
	
	int n1 = 4, n2 = 5, n3 = 6;
	
	f1(n1, &n2, n3);
	
	//n1 = 4, n2 = 2, n3 = 3 now
	
	//Consider such array
	int a[] = {1, 2, 3, 4, 5};
	
	//Prints element in index 3
	n = f2(a,3);
	
	std::cout << n << std::endl;
	
	//Changes the value of index 3 to 6:
	f2(a, 3) = 6;
	
	//Similarly,  we can accomplish the same 
	//by de-referenceing pointers, but de-referenceing
	//would need to be explicit.
	
	*f3(a,3) = 6;
	
	
	
	
	
	return 0;
}