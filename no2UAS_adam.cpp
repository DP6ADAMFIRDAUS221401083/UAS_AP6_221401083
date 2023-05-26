/*  Nama:Adam M Firdaus
    Nim:221401083
    Lab:AP6   
    Deskripsi:Program CRUD untuk kontak telepon */
#include <iostream>
#include <vector>

using namespace std;

struct Kontak {
    string nama;
    string nomorTelepon;
};

vector<Kontak> daftarKontak;

void tambahKontak() {
    Kontak kontak;
    cout << "Masukkan nama kontak: ";
    cin.ignore();
    getline(cin, kontak.nama);
    cout << "Masukkan nomor telepon: ";
    getline(cin, kontak.nomorTelepon);

    daftarKontak.push_back(kontak);
    cout << "Kontak berhasil ditambahkan!\n";
}

void tampilkanKontak() {
    if (daftarKontak.empty()) {
        cout << "Daftar kontak kosong.\n";
        return;
    }

    cout << "Daftar Kontak:\n";
    for (const auto& kontak : daftarKontak) {
        cout << "Nama: " << kontak.nama << "\n";
        cout << "Nomor Telepon: " << kontak.nomorTelepon << "\n\n";
    }
}

void perbaruiKontak() {
    string nama;
    cout << "Masukkan nama kontak yang ingin diperbarui: ";
    cin.ignore();
    getline(cin, nama);

    bool ditemukan = false;
    for (auto& kontak : daftarKontak) {
        if (kontak.nama == nama) {
            cout << "Masukkan nomor telepon baru: ";
            getline(cin, kontak.nomorTelepon);
            cout << "Kontak berhasil diperbarui!\n";
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "Kontak dengan nama tersebut tidak ditemukan.\n";
    }
}

void hapusKontak() {
    string nama;
    cout << "Masukkan nama kontak yang ingin dihapus: ";
    cin.ignore();
    getline(cin, nama);

    for (auto it = daftarKontak.begin(); it != daftarKontak.end(); ++it) {
        if (it->nama == nama) {
            daftarKontak.erase(it);
            cout << "Kontak berhasil dihapus!\n";
            return;
        }
    }

    cout << "Kontak dengan nama tersebut tidak ditemukan.\n";
}

int main() {
    int pilihan;
    char ulang;
        b:
        cout << "Menu:\n";
        cout << "1. Tambah Kontak\n";
        cout << "2. Tampilkan Kontak\n";
        cout << "3. Perbarui Kontak\n";
        cout << "4. Hapus Kontak\n";
        cout << "Pilihan Anda: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tambahKontak();
                break;
            case 2:
                tampilkanKontak();
                break;
            case 3:
                perbaruiKontak();
                break;
            case 4:
                hapusKontak();
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
                goto b;
        }
    cout<<"apakah anda ingin mengulangi program?(Y/N):";
    cin>>ulang;
    if(ulang=='Y' or ulang=='y'){
        goto b;
    }
    cout<<endl;


    return 0;
}