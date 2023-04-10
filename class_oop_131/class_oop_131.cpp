#include <iostream>
using namespace std;

class mahasiswa {
public:
	string nim;
	string nama;
public: void cetak() {
	cout << "NIM = " << nim;
	cout << "\nNama = " << nama;
	}
};

class matakuliah {
private:
	string kode;
	string namaM;
	int sks;
public: 
	void input() {
		cout << "masukan kode matakuliah : ";
		cin >> kode;
		cout << "masukan nama matakuliah : ";
		cin >> namaM;
		cout << "jumlah SkS : ";
		cin >> sks;
	}
	void tampil() {
		cout << "kode matakuliah : " << kode;
		cout << "nama matakuliah : " << namaM;
		cout << "jumlah sks : " << sks;
	}
};

int main()
{
	mahasiswa mhs1;
	matakuliah mk;

	cout << "masukan NIM : ";
	cin >> mhs1.nim;
	cout << "masukan nama :";
	cin >> mhs1.nama;
	mhs1.cetak();

	mk.input();
}
