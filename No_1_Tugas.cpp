#include <iostream>
#include <string>
using namespace std;

class Event {
private:
    string detailEvent;
    int tanggal;
    int bulan;
    int tahun;

public:
    // Constructor
    Event(string detail, int tgl, int bln, int thn) {
        detailEvent = detail;
        tanggal = tgl;
        bulan = bln;
        tahun = thn;
    }

    // Method untuk menampilkan detail event
    void getEventDetails() const { // Menambahkan const karena metode ini tidak mengubah status objek
        cout << "Detail Event : " << detailEvent << endl;
        cout << "Tanggal      : " << tanggal << "-" << bulan << "-" << tahun << endl;
    }
};

int main() {
    // Membuat 3 event berbeda
    Event event1("Workshop Algoritma", 18, 6, 2025);
    Event event2("Ujian Tengah Semester", 24, 6, 2025);
    Event event3("Presentasi Proyek Akhir", 1, 7, 2025);

    cout << "Event 1:" << endl;
    event1.getEventDetails();
    cout << endl;

    cout << "Event 2:" << endl;
    event2.getEventDetails();
    cout << endl;

    cout << "Event 3:" << endl;
    event3.getEventDetails();
    cout << endl;

    return 0; // Menghapus karakter spasi yang tidak perlu
}

