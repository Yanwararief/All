#include  <iostream>
using namespace std;
//I.S Program Memasukan Data
//F.S Program Menampilkan data yang sudah di proses berdasarkan logika

main () {

	//Kamus
	int a = 5;
	int b = 20;
	int c ;

	//Tugas 1
	if ( a && b ) {
	cout << "TRUE"<< endl ;
	}

	//Tugas 2
	if ( a || b ) {
	cout << "TRUE"<< endl ;
	}
	/* Pergantian nilai */

	//Kamus 2
	a = 0;
	b = 10;

	//Tugas 3
	if ( a && b ) {
	cout << "TRUE"<< endl ;
	} else {
	cout << "FALSE"<< endl ;
	}

	//Tugas 4
	if ( !(a && b) ) {
		cout << "TRUE"<< endl ;
	}
	return 0;
}