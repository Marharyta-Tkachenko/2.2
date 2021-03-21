#include "Integers.h"

Integers::Integers()
{
	x = 0;
}

Integers::Integers(int X = 0)
{
	x = X;
}

Integers::Integers(const Integers& v)
{
	x = v.x;
}

Integers::~Integers()
{}

Integers& Integers::operator --()
{
	--x;
	return *this;
}

Integers Integers::operator --(int)
{
	Integers a(*this);
	x--;
	return a;
}

Integers& operator ++(Integers& a)
{
	++(a.x);
	return a;
}

Integers operator ++(Integers& a, int)
{
	Integers b(a.x);
	(a.x)++;
	return b;
}

Integers::operator string () const
{
	stringstream ss;
	ss << "x = " << x << endl;
	return ss.str();
}

Integers& Integers::operator = (const Integers& r)
{
	x = r.x;
	return *this;
}

ostream& operator <<(ostream& out, const Integers& a)
{
	return out << string(a);
}

istream& operator >>(istream& in, Integers& a)
{
	cout << "x = "; in >> a.x;
	return in;
} 