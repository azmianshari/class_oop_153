#include <iostream>
using namespace std;

class Mahasiswa {
public:
	int nim;
	string nama;
	void tampil() {
		cout << "Nim = " << nim;
		cout << "Nama = " << nama;
	}
};
class Matakuliah {
private:
	int sks;
	string kode;
	string namaMk;
public :
	void inputMk() {
		cout << "\nMasukan jumlah SKS : ";
		cin >> sks;
		cout << "\nMasukan Kode MK : ";
		cin >> kode;
		cout << "\nMasukan nama matakuliah : ";
		cin >> namaMk;
	}
	void tampil() {
		cout << "\nJumlah SKS = " << sks;
		cout << "\nKode MK = " << kode;
		cout << "\nNama MK = " << namaMk;
	}
};

int main() {
	Mahasiswa mhs;
	Matakuliah mk;

	cout << "\nMasukan NIM = ";
	cin >> mhs.nim;
	cout << "\nMasukan Nama = ";
	cin >> mhs.nama;

	mk.inputMk();
	mhs.tampil();
	mk.tampil();

	system("pause");
	
}


