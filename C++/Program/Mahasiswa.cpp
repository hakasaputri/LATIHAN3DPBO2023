// Saya Hakasa Putri mengerjakan LP3 DPBO 2023 C2
// dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan
// kecurangan seperti yang telah dispesifikasikan. Aamiin

#include <iostream>
// #include "SivitasAkademik.cpp" // Change file extension from .cpp to .h
// #include "Prodi.cpp" // Change file extension from .cpp to .h

class Mahasiswa{
private:
string NIM;
string Fakultas;
Prodi prodi; // Change variable name to lowercase
public:
// Constructor
Mahasiswa() {
NIM = "";
Fakultas = "";
}

// Getter dan setter
string getNIM() {
    return NIM;
}
void setNIM(string NIM) {
    this->NIM = NIM;
}

string getFakultas() {
    return Fakultas;
}
void setFakultas(string Fakultas) {
    this->Fakultas = Fakultas;
}

Prodi getProdi() {
    return prodi; // Change variable name to lowercase
}
void setProdi(Prodi prodi) { // Change variable name to lowercase
    this->prodi = prodi; // Change variable name to lowercase
}

// Print atribut kelas Mahasiswa
void getInfoMahasiswa() {
    cout << "-------------------------------------------" << endl;
    cout << "yang merupakan seorang mahasiswa dengan" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "NIM            : " << getNIM() << endl;
    cout << "Fakultas       : " << getFakultas() << endl;

    prodi.getInfoProdi(); // Change variable name to lowercase
}

};