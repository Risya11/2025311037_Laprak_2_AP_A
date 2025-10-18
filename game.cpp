#include <iostream>
using namespace std;

int main (){
	int skor;
	
	// input skor
	cin >> skor;
	
	// Menetukan peti hadiah sesuai skor kombo
	if (skor < 50){
		cout << "perunggu" << endl;
	}else if (skor >=50 && skor <= 99 ){
		cout << "perak" << endl;
	}else if (skor >= 100 && skor <=199) {
		cout << "emas" << endl;
	}else {
		cout << "mitos" << endl;
	}
	
	return 0;
}


