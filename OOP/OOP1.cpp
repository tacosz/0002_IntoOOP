#include <iostream>
using namespace std;

class BangunDatar {

	//akses modifier
private:
	float panjang, lebar;
public:
	float luas;

	void input() {
		cout << "Masukkan Panjangnya = ";
		cin >> panjang;
		cout << "Masukkan Lebarnya = ";
		cin >> lebar;
	}
};