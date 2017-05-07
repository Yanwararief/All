#include <iostream>
using namespace std;

int main () { 

// kamus
int M [3] [3];

//perulangan input 
for (int i = 0; i < 3 ; i++) {
 
 for (int j = 0; j < 3 ; j++) {
 	
 	cout << "Masukan NIlai ke pada baris ke = " << i << " Masukan Nilai ke pada Kolom ke =  " << j << " : ";
 	cin >> M [i] [j];
 }

}

cout << endl;
// perulangan output
for (int i = 0; i < 3 ; i++) {
 
 for (int j = 0; j < 3 ; j++) {
 	
 	cout << "Tampilkan NIlai ke pada baris ke = " << i << " Tampilkan Nilai ke pada Kolom ke =  " << j << " : ";
 	cout << M [i] [j] << endl;
 }

}

return 0;

}