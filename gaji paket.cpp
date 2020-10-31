#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int b, g=1000000, cuan, uang;
	
	cout << " Masukan Jumlah Barang Yang Telah Di Antar  : ";
	cin >> b;
	cout << endl;
	
	if(b >= 200){
		cout << "Selamat anda mendapatkan bonus Rp 2.500.000";
		cout << endl;
		uang = g + 2500000;
		cout << "Anda mendapatkan gaji sebesar " << uang;
	}
	else if(b >= 100){
		cout << "Selamat anda mendapatkan bonus Rp 500.000";
		cout << endl;
		cuan = g + 500000;
		cout << "Ansa mendapatkan gaji sebesar " << cuan;
	}
	else if(b < 100){
		cout << "Gaji yang anda terima hari ini adalah " << g;
	}
	
	
	return 0;
}
