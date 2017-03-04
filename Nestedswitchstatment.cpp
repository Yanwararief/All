#include <iostream>
using namespace std;

//I.S Program menunggu memasukan data
//F.S Program menampilkan Data sesuai operasi logika

int main () {
	//Kamus
	int a, b = 2;

	cout << "Brapa 1 x 2? " << endl;
	cin >> a;

	//Tugas Pemilihan
	switch (a) {
		//Bila tidak ada yang cocok
	default : cout << "Salah" << endl;
	break;
	case 2: cout << "Benar" << endl;

		switch (b) {
			case 2: cout << "1 x 2 = 2 x 1" << endl;
				break;
		}
}
	//Perintah mengakhiri program
	return 0;
}