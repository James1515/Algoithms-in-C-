//================================================
// Author: James Ortiz
// File: intCell.h
// Purpose: Simulate a value stored in memory:
//================================================

#ifndef INTCELL_H
#define  INTCELL_H

class IntCell
{
	//Public member functions/variables:
	public:
	explicit IntCell(int initialValue = 0); //Constructor:
	~IntCell() //Destructor:

	IntCell(const IntCell & rhs); //Copy-constructor:
	IntCell(IntCell &rhs);        //Move-Constructor:
	
	IntCell & operator=(const IntCell &rhs);  //Copy-Assignment:
	IntCell & operator=(const IntCell && rhs); //Move-Assignment:
	
	int read() const;
	void write(int x);
	
	//Private member functions/variables:
	private:
	int *storedValue;
	
};//Class IntCell

#endif
