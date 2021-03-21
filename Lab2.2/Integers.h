#pragma once
#pragma pack(1)
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Integers
{
private:
	int x, y;

public:
	Integers();
	Integers(int x);
	Integers(const Integers& v);
	~Integers();

	int GetX() const { return x; }
	void SetX(int value) { x = value; }

	Integers& operator --();
	Integers operator --(int);
	friend Integers& operator ++(Integers& a);
	friend Integers operator ++(Integers& a, int);

	Integers& operator =(const Integers&);
	operator string() const;

	friend ostream& operator <<(ostream& out, const Integers& a);
	friend istream& operator >>(istream& in, Integers& a);
};