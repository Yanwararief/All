#include <iostream>
using namespace std;

//I.S Program menunggu memasukan angka
//F.S Program menampilkan angka yang sudah di proses

//Prototype
int double_it (int *x, int *y);

int main () {
	int x, y;

	cout << "Masukan dua angka (Pisahkan dengan spasi ex: 1 2) : " << endl;
	cin >> x >> y;

	cout << "Sebelum melewati fungsi double_it " << endl;

	cout << "\tx \t = \t" << x << endl;
	cout << "\ty \t = \t" << y << endl;

	double_it(&x, &y);
	cout << "setelah melewati fungsi double_it " << endl;

	cout << "\tx \t = \t" << x << endl;
	cout << "\ty \t = \t" << y << endl;

	return 0;
}

int double_it (int *x, int *y) {

	*x *= 2;
	*y *= 2;
	return 0;
}