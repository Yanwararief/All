#include <iostream>
using namespace std;
/*
Program kalkulator
{T.S : Program menunggu masukan nilai}
{F.S : Hail perhitungan ditampilkan}
*/
//prototype
int hasilTambah (int a, int b);
int hasilKurang (int a, int b);
int hasilKali (int a, int b);
int hasilbagi (int a, int b);

int main () {
	//kamus
	int a, b;

	//algoritma
	// untuk input
	// tugas 1
	cout << "Masukan nilai a: ";
	cin >> a;
	cout << "Masukan nilai b: ";
	cin >> b;

	// tugas 2
	cout << endl; //enter
	cout << "Hasil pertambahan a dan b : " << hasilTambah (a, b);

	// tugas 3
	cout << endl; //enter
	cout << "Hasil Pengurangan a dan b : " << hasilKurang (a, b);

	// tugas 4 
	cout << endl; //enter
	cout << "Hasil Perkalian a dan b : " << hasilKali (a, b);

	// tugas 5
	cout << endl; //enter
	cout << "Hasil Pembagian a dan b : " << hasilbagi (a, b);

	return 0;
}

int hasilTambah (int a, int b){
	int hasil;
	hasil = a + b;
	return hasil;
}

int hasilKurang (int a, int b){
	return a - b;
}

int hasilKali (int a, int b){
	return a * b;
}

int hasilbagi (int a, int b){
	int hasil;
	hasil = a / b;
	return hasil;
}