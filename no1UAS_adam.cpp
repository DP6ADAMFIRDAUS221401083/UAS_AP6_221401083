/*  Nama:Adam M Firdaus
    Nim:221401083
    Lab:AP6   
    Deskripsi:Program penjumlahan elemen array  */
#include <iostream>

using namespace std;

void penjumlahan(){
int banyak,jumlah=0;
int elemen[100];
cout<<"berapa banyak elemen array yang ingin dijumlahkan=";
cin>>banyak;
    for(int i=0;i<banyak;i++){
        cout<<"masukkan elemen array ke-"<<i+1<<"=";
        cin>>elemen[i];
        jumlah+=elemen[i];
    }
    cout<<"jumlah seluruh elemen array adalah="<<jumlah;
}
void garis(){
    cout<<"----------------------------------------";
    cout<<endl;
}
int main(){
    garis();
    cout<<"program menghitung jumlah elemen array\n";
    garis();
    penjumlahan();
}