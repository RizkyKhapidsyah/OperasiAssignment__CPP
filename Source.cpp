#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	//Assignment
	int a = 10;
	cout << "Nilai Awal dari a adalah: " << a << endl;

	/*	Operasi Assignment:
		[Variabel] = [Variabel][Operator][Ekspresi]
			 a     =      a         -        3
	*/

	a += 3;
	cout << "ditambah 3 menjadi : " << a << endl;

	a -= 3;
	cout << "dikurangi 3 menjadi " << a << endl;

	a /= 3;
	cout << "dibagi 3 menjadi: " << a << endl;

	a *= 3;
	cout << "dikali 3 menjadi " << a << endl;

	a %= 3;
	cout << "dimodulus 3 menjadi : " << a << endl;

	cin.get();
	_getch();
	return 0;
}