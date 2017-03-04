#include <iostream>

using namespace std;

// Program Kalkulator
// I.S : Program menghitung angka untuk di operasikan
// F.S : Program menampilkan hasil

int main () {
	typedef int nomor;
	typedef float decimal;
	// Kamus
	// int a, b, c
	// float f

	nomor a, b;
	nomor c;
	decimal f;

	// Algoritma
	// c = a+b
	// cout << c
	// f = 70/3
	// cout << f

	a = 10;
	b = 20;
	c = a + b;

	cout << c << endl ;
	f = 70.0/3.0;
	cout << f << endl ;
	return 0;
}