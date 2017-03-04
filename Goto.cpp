#include <iostream>
using namespace std;

//I.S Program menunggu memasukan data
//F.S Program menampilkan Data sesuai operasi logika

int main () {
	int a, b;

	cout << "Masukan Nilai awal (a) Untuk di ulang: ";
	cin >> a;
	cout << "Masukan Nilai (b) Untuk batas pengulangan: ";
	cin >> b;

	start :
	cout << "\n" << ++a;
	if(a < b)
	//Perintah mengakhiri program
	goto start;
}