#include <iostream>
using namespace std;

//I.S Program memasukan data
//F.S Program menampilkan Data sesuai operasi logika

int main () {
	//kamus
	int a = 10;
	
	//Perintah jika kondisi true (benar)
	if(a >= 1) {
		cout << "a lebih besar dari atau sama dengan 1" << endl;
	} //Perintah jika kondisi selain true 
	else {
		cout << "a kurang dari 1" << endl;
	}

	//Perintah mengakhiri program
	return 0;
}