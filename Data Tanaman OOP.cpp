#include <iostream>
#include <cstring>
						// ini tanda air
using namespace std;	// Maftuh Faisal
						// 202431163
// membuat class tanaman  						
class Tanaman {
private:
    string nama, jenis;
    int usia;
    bool status_penyiraman;

public:
    Tanaman() {
        nama = "";
        jenis = "";
        usia = 0;
        status_penyiraman = false;
    }

	// meminta user untuk memasukkan data
    void inputData() {
        cout << "Nama Tanaman: ";
        cin.ignore();
        getline(cin, nama);

        cout << "Jenis Tanaman (sayuran, buah, hias, dll): ";
        getline(cin, jenis);

        cout << "Umur Tanaman (hari): ";
        cin >> usia;

        string status_input;	// status dari penyiraman
        while (true) {
            cout << "Status Penyiraman (sudah/belum): ";
            cin >> status_input;
            if (status_input == "sudah") {
                status_penyiraman = true;
                break;
            } else if (status_input == "belum") {
                status_penyiraman = false;
                break;
            } else {
                cout << "Input tidak valid, masukkan 'sudah' atau 'belum'.\n";
            }
        }
    };
    
    // function untuk menampilkan data 
    void tampilkanData(int index) {
        cout << index << ". Nama Tanaman       : " << nama << "\n";
        cout << "   Jenis Tanaman      : " << jenis << "\n";
        cout << "   Umur Tanaman       : " << usia << " hari\n";
        cout << "   Status Penyiraman  : " << (status_penyiraman ? "Sudah disiram" : "Belum disiram") << "\n";
        cout << "----------------------------------------\n";
    }
};

// meminta user untuk menginput berapa jumlah tanaman yang akan di data
int main() {
    cout << "=== Sistem Data Tanaman di Kebun ===\n";
    int jumlah;
    cout << "Masukkan jumlah tanaman yang ingin dicatat: "; 
    cin >> jumlah;

    // Membuat array dinamis untuk menyimpan data tanaman
    Tanaman* daftar_tanaman = new Tanaman[jumlah];

    for (int i = 0; i < jumlah; ++i) {
        cout << "\nInput data tanaman ke-" << (i + 1) << ":\n";
        daftar_tanaman[i].inputData();
    }
    
    cout << "\n=== Data Tanaman di Kebun ===\n";
    for (int i = 0; i < jumlah; ++i) {
        daftar_tanaman[i].tampilkanData(i + 1);
    }

    // Jangan lupa hapus memori yang sudah dialokasikan
    delete[] daftar_tanaman;

    return 0;
}

