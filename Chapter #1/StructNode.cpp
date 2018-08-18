//=======================================
// Author: James Anthony Ortiz
// Purpose: To display how pointers 
// and copy constructors work through
// the use of a struct in cpp.
//=======================================

#include <iostream>
#include <string.h>
//Struct of Type Node:
struct Node 
{
	//Variables:
	//Ptr-to-char to acess name array:
	//type int to hold age value:	
	char *name;
	int age;
	
	//Node Constructor:
	Node(char *n = "", int a = 0)
	{
		name = strdup(n);
		strcpy(name, n);
		age = a;
	}
	
	//Copy Constructor for node:
	Node (const Node &n) 
	{
		name = strdup(n.name);
		age = n.age;
		
	}//Copy-constructor:
	
	//Assignment Operator for class Node:
	Node& operator= (const Node& n)
	{
		//No Assignment to self:
		if(this  != &n)
		{
			//If name has a value, delete it
			if(name != 0)
			{
				delete [] name;
			}
			//then, re-assign the variables
			name = strdup(n.name);
			age = n.age;
		}
	
		return *this;
	}//Assignment Operator:
	
	//Destructor for Node:
	~Node()
	{
		if(name != 0)
		{
			delete [] name;
		}
	}//end Destructor:
	
};//Node struct

//Main Driver program to test struct Node:
int main(void)
{
	//Object declarations:
	Node node1("Roger", 20), node2(node1);
	
	//Copying Wendy to node2
	strcpy(node2.name, "Wendy");
	//Attempt to edit age:
	node2.age = 30;
	//Display results:
	std::cout << node1.name << ' ' << node1.age << ' ' << node2.name << ' ' << node2.age;
	
	
	
	return 0;
}//end main:
