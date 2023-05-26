/*  Nama:Adam M Firdaus
    Nim:221401083
    Lab:AP6   
    Deskripsi:Program struct untuk data siswa  */
#include<iostream>
using namespace std;

void garis(){
    cout<<"----------------------------------------------------------------";
    cout<<endl;
}
struct identitas{
    string nama;
    int skor;
    string rumpun_ilmu;
    string univ;
    string prodi;
};
int main(){
    system("cls");
    garis();
    cout<<"Data pilihan universitas dan prodi siswa kelas 12 SMA Swasta KomC\n";
    garis();
    identitas siswa[5];
    siswa[0].nama="Adam ";
    siswa[0].skor=679;
    siswa[0].rumpun_ilmu="soshum";
    siswa[0].univ="Universitas Brawijaya";
    siswa[0].prodi="Psikologi";

    siswa[1].nama="Bayu";
    siswa[1].skor=583;
    siswa[1].rumpun_ilmu="Saintek";
    siswa[1].univ="Universitas Indonesia";
    siswa[1].prodi="Teknik Mesin";

    siswa[2].nama="Naufal";
    siswa[2].skor=609;
    siswa[2].rumpun_ilmu="Saintek";
    siswa[2].univ="Universitas Gajah Mada";
    siswa[2].prodi="Arsitektur";

    siswa[3].nama="Putri";
    siswa[3].skor=700;
    siswa[3].rumpun_ilmu="Saintek";
    siswa[3].univ="Universitas Sumatera Utara";
    siswa[3].prodi="Kedokteran";

    siswa[4].nama="Daffa";
    siswa[4].skor=630;
    siswa[4].rumpun_ilmu="Soshum";
    siswa[4].univ="Universitas Airlangga";
    siswa[4].prodi="Ilmu Hukum";

    
    

    for(int i=0;i<5;i++){
        cout<<"Nama siswa = "<<siswa[i].nama;
        cout<<endl;
        cout<<"Rata-rata skor TO = "<<siswa[i].skor;
        cout<<endl;
        cout<<"Rumpun ilmu = "<<siswa[i].rumpun_ilmu;
        cout<<endl;
        cout<<"Pilihan unversitas = "<<siswa[i].univ;
        cout<<endl;
        cout<<"Pilihan prodi = "<<siswa[i].prodi;
        cout<<endl;
        garis();
        
    }
    
}