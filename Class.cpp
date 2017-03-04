#include <iostream>
using namespace std;
//I.S Program Memasukan Data Sesuai Type
//F.S Program Menampilkan data sesuai type
//Class
class printData {
	public:
	//Output 1
	void print(int i) {
	cout << "Printing int: " << i << endl;
	}

	//Output 2
	void print(double f) {
	cout << "Printing float: " << f << endl;
	}

	//Output 3
	void print(string c) {
	cout << "printing character: " << c << endl;
	}
};

int main(void) {
	//Kamus
	printData pd;

	//Input 1
	pd.print(5);

	// Input 2
	pd.print(500.263);

	// Input 3
	pd.print("Hellp C++");

	return 0;
}