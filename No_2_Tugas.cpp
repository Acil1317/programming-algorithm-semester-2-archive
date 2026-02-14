#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Tanggal {
private:
    int dateOfMonth;
    int month;
    int year;

public:
    // Constructor
    Tanggal(int day, int mth, int yr) : dateOfMonth(day), month(mth), year(yr) {}

    // Method untuk mendapatkan tanggal dalam format string
    string getDate() const {
        stringstream ss;
        ss << dateOfMonth << "-" << month << "-" << year;
        return ss.str();
    }
};

class Event {
private:
    string detailEvent;
    Tanggal tanggal; // Menggunakan objek Tanggal

public:
    // Constructor
    Event(string detail, Tanggal tgl) : detailEvent(detail), tanggal(tgl) {}

    // Method untuk menampilkan detail event
    void getEventDetails() const {
        cout << "Detail Event : " << detailEvent << endl;
        cout << "Tanggal      : " << tanggal.getDate() << endl;
    }
};

int main() {
    // Membuat 5 event dengan aktivitas yang berbeda
    Event event1("Workshop Algoritma", Tanggal(18, 6, 2025));
    Event event2("Ujian Tengah Semester", Tanggal(24, 6, 2025));
    Event event3("Presentasi Proyek Akhir", Tanggal(1, 7, 2025));
    Event event4("Seminar Teknologi", Tanggal(15, 7, 2025));
    Event event5("Pameran Inovasi", Tanggal(30, 7, 2025));

    // Menampilkan detail setiap event
    cout << "Event 1:" << endl;
    event1.getEventDetails();
    cout << endl;

    cout << "Event 2:" << endl;
    event2.getEventDetails();
    cout << endl;

    cout << "Event 3:" << endl;
    event3.getEventDetails();
    cout << endl;

    cout << "Event 4:" << endl;
    event4.getEventDetails();
    cout << endl;

    cout << "Event 5:" << endl;
    event5.getEventDetails();
    cout << endl;

    return 0;
}


