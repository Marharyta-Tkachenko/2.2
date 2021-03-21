#include "Integers.h"

int main()
{
	cout << "initialization of A" << endl;
	Integers A(4), B;
	cout << "A: " << endl;
	cout << A << endl;

	cout << "Size of class: " << sizeof(A) << endl;

	cout << "initialization of B" << endl;
	cin >> B;
	cout << "B: " << endl;
	cout << B << endl;

	cout << "++A: " << ++A << endl;
	cout << "A++: " << A++ << endl;
	cout << "--B: " << --B << endl;
	cout << "B--: " << B-- << endl << endl;
}