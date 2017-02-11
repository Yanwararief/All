#include <iostream>
using namespace std;
// {i.s : Program Menunggu Masukan Angka}
// {f.s : Program Menampilkan Angka}
int main () {
    // kamus
    int a = 5;
    int b = 20;
    int c ;

    if ( a && b ) {
  cout << "TRUE" << endl ;
    }
    if ( a || b ) {
  cout << "TRUE" << endl ;
    }

  /* Pergantian nilai */
  a = 0;
  b = 10;

  if ( a && b ) {
cout << "TRUE" << endl ;
  } else {
  cout << "FALSE" << endl ;
  }
  if ( ! (a && b) ) {
cout << "TRUE" << endl ;
  }

    return 0;
}
