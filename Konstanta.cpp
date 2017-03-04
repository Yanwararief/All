#include <iostream>

#define PHI 3.14 // konstanta

using namespace std;
//I.S Program menunggu memasukan angka
//F.S Program menampilkan angka yang sudah di proses
int main (){

	//Kamus
	float jari_jari, luas;

	//konstanta
	jari_jari = 25;

	//Algoritma

	//Rumus
	luas = 0.5 * PHI * jari_jari * jari_jari;
	cout<<"Data lingkaran";
	cout<<"\nJari-jari 	: "<<jari_jari;
	cout<<"\nLuas 		: "<<luas;
	cout<<"\n";
	return 0;
}