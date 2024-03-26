#pragma once
#include "Object.h"
#include <iostream>
#include <sstream>

#pragma pack(1)

using namespace std;

class LongLong : public Object
{
public:
	double a, b;
public:
	
	double getA() const { return a; }
	double getB() const { return b; }

	void setA(double value) { a = value; }
	void setB(double value) { b = value; }


	LongLong();
	LongLong(double, double);
	LongLong(const LongLong&);

	friend ostream& operator << (ostream&, const LongLong&);
	friend istream& operator >> (istream&, LongLong&);

	operator string() const;
	LongLong& operator=(const LongLong& other);
	friend LongLong operator + (LongLong&, LongLong&);
	friend LongLong operator * (LongLong&, LongLong&);

	friend bool operator > (LongLong&, LongLong&);
	friend bool operator < (LongLong&, LongLong&);
	friend bool operator == (LongLong&, LongLong&);
	friend bool operator<=( LongLong& , LongLong& );
	friend bool operator!=(LongLong&, LongLong&);
	friend bool operator>=(LongLong&, LongLong&);

};
