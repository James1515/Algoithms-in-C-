//============================================
// Author: James Anthony Ortiz
// Purpose: Demonstrate the OOL analysis 
// behind the use of polymorphism in C++11 
// classes.
//============================================

class class1 {
	public:
	virtual void f()
	{
		std::cout << "Function f() in Class1 "<< std::endl;  
	}
	void g()
	{
		std::cout << "Function g() in Class1 " << std::endl;
	}
	
};

class Class2 {
	public:
	virtual void f()
	{
		std::cout << "Function f() in Class2" << std::endl;
	}
	void g()
	{
		std::cout << "Function g() in Class2" << std::endl;
	}
	
};

class Class3 {
	public: 
	virtual void h()
	{
		std::cout << "Function h() in Class3 " << std::endl;
	}
};

//--------------------------------
//Program Driver:
//--------------------------------

int main(void)
{
	//Declatarions:
	
	Class1 object1, *p;
	Class2 object2;
	Class3 object3;
	
	p = &object1;
	p->f();
	p->g();
	
	p = (Class1*) &object2;
	
	p->f();
	
	p->g();
	
	p = (Class1*) &object3;
	
	//p->f() Abnormal program termination:
	
	p->g();
	
	//p->h() h() is not a member of Class1:
	
	
	return 0;
}