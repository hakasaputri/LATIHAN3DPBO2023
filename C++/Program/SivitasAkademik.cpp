/* Saya Hakasa Putri mengerjakan Latihan 2 DPBO 2023 C2 
dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin */

#include <iostream>
#include <string>
#include "Human.cpp"

using namespace std;

class SivitasAkademik : public Human{  //class sivitas akademik turunan dari class Human

    private:

        // atribut kelas sivitas akademik
        string asal_univ;
        string email_edu;


    public:

        SivitasAkademik(){ //constructor
        }

        //metode getter dan setter

        string getasal_univ(){
            return this->asal_univ;
        }

        void setasal_univ(string asal_univ){
            this->asal_univ = asal_univ;
        }

        string getemail_edu(){
            return this->email_edu;
        }

        void setemail_edu(string email_edu){
            this->email_edu = email_edu;
        }

        //Tampilkan atribut kelas sivitas akademik
        void getInfoSivitasAkademik(){
            cout << "-------------------------------------------" << endl;
            cout << "manusia ini berasal dari" << endl;
            cout << "-------------------------------------------" << endl;
            cout << "Asal Universitas  : " << getasal_univ() << endl;
            cout << "Email Edu         : " << getemail_edu() << endl;
        }

        ~SivitasAkademik(){ //destructor
        }
};

