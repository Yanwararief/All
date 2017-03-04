#include <iostream>
using namespace std;

//I.S Program memasukan data
//F.S Program menampilkan Data sesuai operasi logika

int main () {
	//kamus
	int a, b;

	cout << "Masukan Angka Pertama Untuk di bandingkan: ";
	cin >> a;
	cout << endl;

	cout << "Masukan Angka Kedua Untuk di bandingkan: ";
	cin >> b;
	cout << endl;
	
	//Perintah jika kondisi true (benar)
	if(a >= 0, b >= 0) {
		if(a >= b) {
			cout << a << " lebih besar dari atau sama dengan " << b << endl;
		} else if(a > b){
			cout << a << " lebih kecil dari atau sama dengan " << b << endl;
		} else {
		cout << "Selain Angka Tidak Bisa di bandingkan" << endl;
		}
	} //Perintah jika kondisi selain true 
	else {
		cout << "Selain Angka Tidak Bisa di bandingkan" << endl;
	}

	//Perintah mengakhiri program
	return 0;
}