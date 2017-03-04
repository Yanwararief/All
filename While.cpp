#include <iostream>
using namespace std;

//I.S Program menunggu memasukan data
//F.S Program menampilkan Data sesuai operasi logika

int main () {
	int a, b;

	cout << "Masukan NIlai untuk di ulang dan ditambah 1: ";
	cin >> a;
	cout << "Masukan batas pengulangan: ";
	cin >> b;

	while(a < b) {
		cout << "Nilai a: " << a << endl;
		a++;
	}
	//Perintah mengakhiri program
	return 0;
}