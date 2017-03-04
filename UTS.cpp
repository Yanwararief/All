#include <iostream>
using namespace std;

//I.S Program Kalkulator "Aritmatika dan Relasional"
//F.S Menampilkan Hasil Dari Perhitungan Kalkulator "Aritmatika dan Relasional"

//Prototype

int hasiltambah (int a, int b);
int hasilkurang (int a, int b);
int hasilkali (int a, int b);
int hasilbagi (int a, int b);
int hasilModulus (int a, int b);
    
    
int main () {

    //Kamus    
    int a,b ;
    
    cout << "____________________Aplikasi Kalkulator____________________" << endl;
    cout << endl;
    
    //Program Meminta Memasukan Data A
    cout << "Masukan Nilai A: ";
    cin >> a;
    
    //Program Meminta Memasukan Data B
    cout << "Masukan Nilai B: "; 
    cin >> b;
    cout << endl;
    
    cout << "________________Hasil Perhitungan Aritmatika________________" << endl;
    cout << endl;
    
    //Tugas Pertambahan
    cout << "Hasil Pertambahan Antara A dengan B adalah = " << hasiltambah (a, b) << endl; 

    //Tugas Pengurangan
    cout << "Hasil Pengurangan Antara A dengan B adalah = " << hasilkurang (a, b) << endl;

    //Tugas Perkalian
    cout << "Hasil Perkalian Antara A dengan B adalah = " << hasilkali (a, b) <<endl;

    //Tugas Pembagian (tanpa sisa)
    cout << "Hasil Pembagian Antara A dengan B adalah = " << hasilbagi (a, b) <<endl;

    //Tugas Pembagian (Modulus/Mod)
    cout << "Hasil Pembagian (Modulus) Antara A dengan B adalah = " << hasilModulus (a, b) <<endl;
    cout << endl;
    
    //RELASIONAL
    cout << "____________________Hasil Relasional____________________" << endl;
    cout << endl;
    
    //Hasil Logika Jika Nilai A Sama dengan B
    if (a == b) {
    	cout << "Nilai A sama dengan B " << endl; 
	} else {
		cout << "Nilai A Tidak sama dengan B " << endl; 
	}
    
    //Hasil Logika Jika Nilai A Tidak sama dengan B
    if (a != b) {
     	cout << "Nilai A Tidak sama dengan B " << endl; 
 	} else {
 		cout << "Nilai A sama dengan B " << endl; 
 	}
    
    //Hasil Logika Jika Nilai A Kurang dari sama dengan B
    if (a <= b) {
    	cout << "Nilai A Kurang dari B " << endl; 
    } else {
    	cout << "Nilai A Lebih Besar dari  " << endl; 
    }
    
    //Hasil Logika Jika Nilai B Lebih dari sama dengan A
    if (a >= b) {
    	cout << "Nilai A Lebih Besar dari B " << endl;
    } else {
    	cout << "Nilai A Kurang dari B " << endl;
    }
    
    //Hasil Logika Jika Nilai A Kurang dari B
    if (a < b) {
    	cout << "Nilai A Lebih Kecil dari B " << endl;
    } else {
    	cout << "Nilai A Tidak Lebih Kecil dari B " << endl;
    }
    
    //Hasil Logika Jika Nilai A Lebih dari B
    if (a > b) {
		cout << "Nilai A Lebih Besar dari B " << endl;
	} else {
		cout << "Nilai A Tidak Lebih Besar dari B " << endl;
	}
     

return 0;
}

//Rumus Fungsi Aritmatika

//Pertambahan
int hasiltambah (int a, int b) {
    int hasil;

    hasil = a + b;
    return hasil;
}

//Pengurangan
int hasilkurang (int a, int b) {
    return a - b;
}

//Perkalian
int hasilkali (int a, int b) {
    int hasil;

    hasil = a * b;
    return hasil;
}

//Pembagian Div
int hasilbagi (int a, int b) {
    return a / b;
}

//Pembagian Modulus
int hasilModulus (int a, int b) {
    return a % b;
}