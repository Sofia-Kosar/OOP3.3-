#include "LongLong.h"

LongLong::LongLong() : Object() { a = 0, b = 0; }
LongLong::LongLong(double a = 0, double b = 0) : Object()
{
	this->a = a;
	this->b = b;
}
LongLong::LongLong(const LongLong& A) : Object()
{
	a = A.getA();
	b = A.getB();
}
ostream& operator << (ostream& out, const LongLong& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, LongLong& A)
{
	cout << " Cтаршу частину = "; in >> A.a;
	cout << " Mолодшу частину = "; in >> A.b;
	return in;
}
LongLong& LongLong::operator=(const LongLong& other) {
	if (this != &other) { 
		this->a = other.a;
		this->b = other.b;
	}
	return *this;
}
LongLong::operator string() const
{
	stringstream ss;
	ss << " Старша частина: " << a << endl;
	ss << " Mолодша частина: " << b << endl;
	return ss.str();
}
LongLong operator +(LongLong& A, LongLong& B)
{
	LongLong t(A.a + B.a, A.b + B.b);
	return t;
}
LongLong operator *(LongLong& A, LongLong& B)
{
	LongLong t(A.a * B.a, A.b * B.b);
	return t;
}


bool operator > (LongLong& A, LongLong& B)
{
	return ((A.a > B.a) || (A.a == B.a && A.b > B.b));
}
bool operator < (LongLong& A, LongLong& B)
{
	return ((A.a < B.a) || (A.a == B.a && A.b < B.b));
}
bool operator == (LongLong& A, LongLong& B)
{
	return (A.a == B.a && A.b == B.b);
}
bool operator >= (LongLong& A, LongLong& B)
{
	return !((A.a < B.a) || (A.a == B.a && A.b < B.b));
}
bool operator <= (LongLong& A, LongLong& B)
{
	return ((A.a < B.a) || (A.a == B.a ));
}
bool operator != (LongLong& A, LongLong& B)
{
	return !(A.a == B.a && A.b == B.b);
}
