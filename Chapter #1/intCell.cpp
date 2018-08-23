//======================================
// Author: James Ortiz
// File: intCell.cpp
// Purpose: Member Function implementation
// file for class "IntCell"
//======================================

#include "intCell.h"

//Constructor:
IntCell::IntCell(int initialValue = 0)
{
	storedValue = new int {initialValue};
}

//Destructor:
~IntCell::IntCell()
{
	delete storedValue;
}

//Copy Constructor:
IntCell::IntCell(const IntCell & rhs)
{
	storedValue = new int {rhs.storedValue};
	
}

//Move-constructor:
IntCell::IntCell(IntCell && rhs): storedValue{rhs.storedValue}
{
	rhs.storedValue = nullptr;
	
}

//Copy-Assignment:
IntCell::IntCell & operator = (const IntCell & rhs)
{
	if(this != &rhs)
	{
		*storedValue = *rhs.storedValue;
	}
	return *this;
}


//Move-Assignment:
IntCell:IntCell & operator =(const IntCell && rhs)
{
	std::swap(storedValue, rhs.storedValue);
	return *this;
}

void IntCell::read() const
{
	return *storedValue;
}

int IntCell::write(int x)
{
	*storedValue = x;
}


