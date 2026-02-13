#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
 
using namespace std;
 
struct Nilai {
  string nama, nim, matkul, grade;
  double n_kehadiran, n_tugas, n_uts, n_uas, n_total, n_rataRata;
 
  void hitungNilai() {
    n_total = (0.4 * n_uas) + (0.3 * n_uts) + (0.2 * n_tugas) + (0.1 * n_kehadiran);
    n_rataRata = n_total;
  }
 
  void tentukanGrade() {
    if (n_rataRata >= 80) {
      grade = "A";
    } else if (n_rataRata >= 70) {
      grade = "B";
    } else if (n_rataRata >= 60) {
      grade = "C";
    } else {
      grade = "D";
    }
  }
 
  void printData() {
    cout << fixed << setprecision(2);
    cout << "Nama\t\t\t: " << nama << endl;
    cout << "NIM\t\t\t: " << nim << endl;
    cout << "Mata Kuliah\t\t: " << matkul << endl;
    cout << "Kehadiran\t\t: " << n_kehadiran << endl;
    cout << "Tugas\t\t\t: " << n_tugas << endl;
    cout << "UTS\t\t\t: " << n_uts << endl;
    cout << "UAS\t\t\t: " << n_uas << endl;
    cout << "Rata-Rata\t\t: " << n_rataRata << endl;
    cout << "Grade\t\t\t: " << grade;
 
    if (grade == "D") {
      cout << " (TIDAK LULUS)";
    }
    cout << endl;
  }
};
 
int main() {
  Nilai mhs;
  vector<Nilai> daftarMahasiswa;
  string lanjut;
 
  do {
    cout << "Masukkan Nama\t\t: "; getline(cin, mhs.nama);
    cout << "Masukkan NIM\t\t: "; getline(cin, mhs.nim);
    cout << "Masukkan MataKuliah\t: "; getline(cin, mhs.matkul);
    cout << "Masukkan Kehadiran\t: "; cin >> mhs.n_kehadiran;
    cout << "Masukkan Tugas\t\t: "; cin >> mhs.n_tugas;
    cout << "Masukkan UTS\t\t: "; cin >> mhs.n_uts;
    cout << "Masukkan UAS\t\t: "; cin >> mhs.n_uas; cin.ignore();
 
    mhs.hitungNilai();
    mhs.tentukanGrade();
    daftarMahasiswa.push_back(mhs);
 
    cout << "Apakah Anda Ingin Menginputkan Data Lagi? (Y/N): ";
    getline(cin, lanjut);
 
  } while (lanjut == "Y" || lanjut == "y");
 
  cout << "\n----------------------------------------" << endl;
  cout << "          Daftar Nilai:" << endl;
  cout << "----------------------------------------" << endl;
 
  for (int i = 0; i < daftarMahasiswa.size(); ++i) {
    cout << "Mahasiswa (" << (i + 1) << "):\n";
    daftarMahasiswa[i].printData();
    cout << "----------------------------------------" << endl;
  }
 
  return 0;
}
