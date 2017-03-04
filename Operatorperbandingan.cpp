#include <iostream>
using namespace std;

//I.S Program Memasukan Data
//F.S Program menampilkan data yang telah di proses berdasarkan logika "if"

main() {

	//Kamus
	int a = 21;
	int b = 10;
	int c ;

	// Tugas 1
	if( a == b) {
	cout << "a sama dengan b" << endl ;
	} else {
	cout << "a tidak sama dengan b" << endl ;
	}

	//Tugas 2
	if ( a < b ) {
	cout << "a lebih kecil dari b" << endl ;
	} else {
	cout << "a tidak lebih kecil dari b" << endl ;
	}

	//Tugas 3
	if ( a > b ) {
	cout << "a lebih besar dari b" << endl ;
	} else {
	cout << "a tidak lebih besar dari b" << endl ;
	}

/* Ganti nilai a dan nilai b*/

	//Kamus 2
	a = 5;
	b = 20;

	//Tugas 4
	if ( a <= b ) {
	cout << "a kurang dari b" << endl ;
	}

	//Tugas 5
	if ( b >= a ) {
	cout << "b lebih besar dari a" << endl ;
	}

	return 0;
}