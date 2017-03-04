#include <iostream>
using namespace std;

//I.S Program menunggu memasukan data
//F.S Program menampilkan Data sesuai operasi logika

int main () {
	//Kamus
	int a, b;

	//Meminta user untuk memasukan nilai
	cout << "Masukan Nilai untuk di ulang: ";
	cin >> a; //Nilai ditampung di int "a"
	cout << "Berapakali batas pengulangan: ";
	cin >> b;

	for(a; a<b; a++){
		cout << "Nilai a adalah: " << a << endl;
	}
	//Perintah mengakhiri program
	return 0;
}