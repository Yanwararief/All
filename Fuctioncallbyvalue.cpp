#include <iostream>
using namespace std;
//I.S Program Memasukan Data
//F.S Program Menampilkan data yang sudah di proses

//Prototype
void swap(int x, int y);

int main () {

	//Kamus
	int a = 100;
	int b = 200;

	//Output 1
	cout <<"before swap,value of a :" << a << endl;
	cout <<"before swap,value of b :" << b << endl;

	//Tugas 1
	swap (a, b);

	// Output 2
	cout <<"after swap,value of a :" << a << endl;
	cout <<"after swap,value of b :" << b << endl;
	return 0;
}

void swap(int x, int y) {
	//Kamus
	int temp;

	//Proses Tugas 1
	temp = x;
	x = y;
	y = temp;
	return;
}