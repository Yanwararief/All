#include <iostream>
using namespace std;

int main () { 

// kamus
int M [3] [3];
int M1 [3] [3];
int M2 [3] [3];

//perulangan input 
for (int i = 0; i < 3 ; i++) { 
	
	for (int j = 0; j <3; j++) {

		cout << "Masukan NIlai M1 ke pada baris ke = " << i << " Masukan Nilai M1 ke pada Kolom ke =  " << j << " : ";
		cin >> M1 [i] [j];
	}
}

for (int i = 0; i < 3 ; i++) { 
	
	for (int j = 0; j <3; j++) {

		cout << "Masukan NIlai M2 ke pada baris ke = " << i << " Masukan Nilai M2 ke pada Kolom ke =  " << j << " : ";
		cin >> M2 [i] [j];
	}
}

cout << "Hasil Pertambahan M : " << endl ;
for (int i = 0; i < 3; i++) {
cout << endl;
cout << "_________________" << endl;

	for (int j = 0; j < 3; j++ ) {
		M [i] [j] = M1 [i] [j] + M2 [i] [j];
		cout << "|" << M [i] [j] << "\t";
	}

}
cout << endl;
cout << "_________________";

return 0;

}