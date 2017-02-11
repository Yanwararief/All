#include <iostream>
using namespace std;
// {i.s : Program Menunggu Masukan Angka}
// {f.s : Program Menampilkan Angka}
main () {
    // kamus
    int a = 21;
    int b = 10;
    int c ;

    if( a == b ) {
  cout << "a sama dengan b" << endl ;
    }
    else {
    cout << "a tidak sama dengan b" << endl ;
    }

if ( a < b ) {    cout << "a lebih kecil dari b" << endl ;
} else {
    cout << "a tidak lebih kecil dari b" << endl ;
}

if ( a > b ) {    cout << "a lebih besar dari b" << endl ;
} else {
    cout << "a tidak lebih besar dari b" << endl ;
}

/* Ganti nilai a dan nilai b */
    a = 5;
    b = 20;

if ( b <= a ) {
cout << "a kurang dari b" << endl ;
}
if ( b >= a ) {
cout << "b lebih besar dari a" << endl ;
}
    return 0;
}
