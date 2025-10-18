#include <iostream>
using namespace std;

int main (){
	int umur;
	
	// input umur
	cin >> umur;
	
	// menentukan film sesuai umur
	if (umur < 13 ){
		cout << "SU(semua umur)" << endl;
	}else if (umur >= 13 && umur <= 16 ){
		cout << "R13 (remaja 13 tahun)" << endl;
	}else if (umur >= 17 && umur <= 20 ) {
		cout << "D17 (dewasa 17 tahun)" << endl;
	}else {
		cout << "D21 (dewasa 21 tahun)" << endl;
	}
	
	return 0;
}
