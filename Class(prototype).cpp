#include <iostream>
using namespace std;
//I.S Program Memasukan Data Sesuai Type
//F.S Program Menampilkan data sesuai type
	//Output 1
	void print(int i) {
	cout << "Printing int: " << i << endl;
	}
	//Output 1
	void print(double f) {
	cout << "Printing float: " << f << endl;
	}
	//Output 1
	void print(string c) {
	cout << "printing character: " << c << endl;
	}
//Prototype
void print(int i);
void print(double f);
void print(string c);

int main(void) {
	//Kamus
	//Input 1
	print(5);
	//Input 2
	print(500.263);
	//Input 3
	print("Hellp C++");

	return 0;
}