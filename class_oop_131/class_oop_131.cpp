#include <iostream>
using namespace std;

class mahasiswa {
public:
	string nim;
	string nama;
public: void cetak() {
	cout << "NIM = " << nim;
	cout << "\nNamaM = " << nama;
	}
};

class matakuliah {
private:
	string kode;
	string nama;
	int sks;
public: 
	void input() {
		cout << "masukan kode matakuliah : ";
		cin >> kode;
		cout << "masukan nama matakuliah : ";
		cin >> NamaM;
		cout << "jumlah SkS : ";
		cin >> sks;
	}
};



int main()
{
   
}
