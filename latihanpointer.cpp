#include <iostream>
using namespace std;

//I.S Program menunggu memasukan angka
//F.S Program menampilkan angka yang sudah di proses

int main (){
	int A = 20;
	int *p;

	p = &A;

	cout << "Nilai dari A: ";
	cout << A << endl;

	cout << "Alamat Variabel A: ";
	cout << p << endl;

	cout << "Nilai dari *p: ";
	cout << *p << endl;
	return 0;
}