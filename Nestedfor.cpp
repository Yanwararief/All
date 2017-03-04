#include <iostream>
using namespace std;

//I.S Program menunggu memasukan data
//F.S Program menampilkan Data sesuai operasi logika

int main () {
	//Kamus
	int a, b;

	//Mencari Nilai Prima Menggunakan For
	for(a = 2; a<100; a++) {
      for(b = 2; b <= (a/b); b++)
         if(!(a%b)) break; 
         if(b > (a/b)) cout << a << " Adalah Nilai Prima" << endl;
   }

	//Perintah mengakhiri program
	return 0;
}
