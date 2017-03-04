#include <iostream>
using namespace std;
//I.S Program Memproses data sesuai type
//F.S Program menampilkan ukuran dari tiap type
int main () {
	//Algoritma

	//Menampilkan Data yang bisa di tampung setiap type
	cout << " Ukuran char : " << sizeof(char) << endl;
	cout << " Ukuran int : " << sizeof(int) << endl;
	cout << " Ukuran short int : " << sizeof(short int) << endl;
	cout << " Ukuran long int : " << sizeof(long int) << endl;
	cout << " Ukuran float : " << sizeof(float) << endl;
	cout << " Ukuran double : " << sizeof(double) << endl;
	cout << " Ukuran wchar_t : " << sizeof(wchar_t) << endl;
	return 0;
}