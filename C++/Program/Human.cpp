// Saya Hakasa Putri mengerjakan LP3 DPBO 2023 C2
// dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan
// kecurangan seperti yang telah dispesifikasikan. Aamiin

#include <iostream>
#include <string>

using namespace std;

class Human {
private:
string __NIK;
string __nama;
string __gender;

public:
Human() { // Constructor
__NIK = "";
__nama = "";
__gender = "";
}

// Metode getter dan setter
string getNIK() {
    return __NIK;
}

void setNIK(string NIK) {
    __NIK = NIK;
}

string getNama() {
    return __nama;
}

void setNama(string nama) {
    __nama = nama;
}

string getGender() {
    return __gender;
}

void setGender(string Gender) {
    __gender = Gender;
}

// untuk print atribut kelas human
void getInfoHuman() {
    cout << "NIK            : " << getNIK() << endl;
    cout << "Nama           : " << getNama() << endl;
    cout << "Gender         : " << getGender() << endl;
}

 ~Human(){ //destruktor
    }

};
