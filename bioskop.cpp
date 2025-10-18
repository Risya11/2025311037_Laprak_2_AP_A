#include <iostream>
using namespace std;

int main (){
	int umur;
	
	// input umur
	cout << "masukan umur: " << endl;
	cin >> umur;
	
	// menentukan film sesuai kategori umur
	if (umur < 13 ){
		cout << " kategori SU (semua umur)" << endl;
	}else if (umur >= 13 && umur <= 16 ){
		cout << " kategori R13 (remaja 13 tahun)" << endl;
	}else if (umur >= 17 && umur <= 20 ) {
		cout << " kategori D17 (dewasa 17 tahun)" << endl;
	}else {
		cout << " kategori D21 (dewasa 21 tahun)" << endl;
	}
	
	return 0;
}



