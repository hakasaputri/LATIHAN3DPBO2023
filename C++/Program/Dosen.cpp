// Saya Hakasa Putri mengerjakan LP3 DPBO 2023 C2
// dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan
// kecurangan seperti yang telah dispesifikasikan. Aamiin

#include <iostream>


using namespace std;

class Dosen {
private:
string NIP;
string Fakultas;
string PendTerakhir;
string Keahlian;
Prodi prodi;

public:
//Constructor
Dosen(){
NIP = "";
Fakultas = "";
PendTerakhir = "";
Keahlian = "";
}

// setter getter
string getNIP(){
    return NIP;
}

void setNIP(string nip){
    NIP = nip;
}

string getFakultas(){
    return Fakultas;
}

void setFakultas(string fakultas){
    Fakultas = fakultas;
}

string getPendTerakhir(){
    return PendTerakhir;
}

void setPendTerakhir(string pendTerakhir){
    PendTerakhir = pendTerakhir;
}

string getKeahlian(){
    return Keahlian;
}

void setKeahlian(string keahlian){
    Keahlian = keahlian;
}

Prodi getProdi(){
    return prodi;
}

void setProdi(Prodi prodi){
    this->prodi = prodi;
}

// untuk print atribut kelas dosen
void getInfoDosen(){

    cout << "-------------------------------------------" << endl;
    cout << "yang merupakan seorang dosen dengan" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "NIP            : " << getNIP() << endl;
    cout << "Fakultas       : " << getFakultas() << endl;
    cout << "Pend Terakhir  : " << getPendTerakhir() << endl;
    cout << "Keahlian      : " << getKeahlian() << endl;

    prodi.getInfoProdi();

    }
};
