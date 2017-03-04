#include <iostream>
using namespace std;

//I.S Program menunggu memasukan data
//F.S Program menampilkan Data sesuai operasi logika

int main () {
	int a = 0, b = 0;

	 //Melakukan Perulangan Di dalam Perulangan
	do {
		do {
			cout << "a = " << a << ", b = " << b << endl;
			b++;
		}
		while (b < 3);
		a++;
	} 
	while(a < 4);
	

	/* Kenapa hasilnya nanti menjadi
	a = 0, b = 0
	a = 0, b = 1
	a = 0, b = 2
	a = 1, b = 3
	a = 2, b = 4
	a = 3, b = 5

	kenapa a = 0 keluar 3x?
	karena saat perulangan "b" terjadi variabel "a" masih keadaan 0
	dan perulangan b di ulang 3 kali, lalu kenapa "b" bisa sampai 4?
	karena saat perulangan "a" berlangsung	"b" sudah terisi sampai 2
	maka saat "a" melakukan perulangan samapai 3 "b" akan terisi lagi
	karena "b++" masih berlangsung tapi tidak meyebabkan "a = 1" menjadi 3x
	karena "b" sudah lebih dari 3 */

	//Perintah mengakhiri program
	return 0;
}