#include <iostream>
using namespace std;

typedef struct {

	string hari;
	string bulan;
	string tahun;
} tanggal;

typedef struct {

	int jam;
	int menit;
	int detik;
} jam;

typedef struct {

	int noKA;
	string KotaAsalKA;
	jam jamBerangkat;
	tanggal tanggalBerangkat;
	string kotatujuanKA;
	jam jamTiba;
	tanggal tanggalTiba;
} jadwalKA;

int main () {
	
jadwalKA jadwalKeretaApi;

jadwalKeretaApi.noKA = 1;
jadwalKeretaApi.KotaAsalKA = "Jogjakarta";
jadwalKeretaApi.jamBerangkat.jam = 10;
jadwalKeretaApi.jamBerangkat.menit = 20;
jadwalKeretaApi.jamBerangkat.detik = 5;
jadwalKeretaApi.tanggalBerangkat.hari = "Senin";
jadwalKeretaApi.tanggalBerangkat.bulan = "Januari";
jadwalKeretaApi.tanggalBerangkat.tahun = "2017";
jadwalKeretaApi.kotatujuanKA = "Makassar";
jadwalKeretaApi.jamTiba.jam = 12;
jadwalKeretaApi.jamTiba.menit = 10;
jadwalKeretaApi.jamTiba.detik = 6;
jadwalKeretaApi.tanggalTiba.hari = "Senin";
jadwalKeretaApi.tanggalTiba.bulan = "Januari";
jadwalKeretaApi.tanggalTiba.tahun = "2017";

cout << "----------------------------------------------" << endl;
cout << "-----------****JADWAL KERTA API****-----------" << endl;
cout << "----------------------------------------------" << endl;


cout <<" NOMER KEBERANGKATAN KERETA API = " << jadwalKeretaApi.noKA << endl;
cout << "----------------------------------------------" << endl;
cout <<" KEBERANGKATAN KOTA ASAL = " << jadwalKeretaApi.KotaAsalKA << endl;
cout <<" TIME = " << jadwalKeretaApi.jamBerangkat.jam << ":" 
	 << jadwalKeretaApi.jamBerangkat.menit << ":"
	 << jadwalKeretaApi.jamBerangkat.detik << endl;
cout <<" DATE = " << jadwalKeretaApi.tanggalBerangkat.hari << ", "
	 << jadwalKeretaApi.tanggalBerangkat.bulan << " "
	 << jadwalKeretaApi.tanggalBerangkat.tahun << endl;
cout << "----------------------------------------------" << endl;
cout <<" KEBERANGKATAN KOTA TUJUAN = " << jadwalKeretaApi.kotatujuanKA << endl;
cout <<" TIME = " << jadwalKeretaApi.jamTiba.jam << ":" 
	 << jadwalKeretaApi.jamTiba.menit << ":"
	 << jadwalKeretaApi.jamTiba.detik << endl;
cout <<" DATE = " << jadwalKeretaApi.tanggalTiba.hari << ", "
	 << jadwalKeretaApi.tanggalTiba.bulan << " "
	 << jadwalKeretaApi.tanggalTiba.tahun  << endl;
cout << "----------------------------------------------" << endl;



	return 0;
}