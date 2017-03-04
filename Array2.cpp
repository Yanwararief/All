#include <iostream>
using namespace std;

//I.S Program menunggu memasukan angka
//F.S Program menampilkan angka yang sudah di proses

int main (){
	int n[ 10 ];

	for ( int i = 0; i < 10; i++) {
		n[ i ] = i + 100;
	}
	for (int j = 0; j < 10; j++) {
		cout << "Elemen ke " << j << " : " << n[ j ] << endl;
	}

	return 0;
}