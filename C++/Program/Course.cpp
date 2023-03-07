// # Saya Hakasa Putri mengerjakan LP3 DPBO 2023 C2 
// # dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan 
// # kecurangan seperti yang telah dispesifikasikan. Aamiin 


#include <iostream>
#include <string>


class Course {
private:
    std::string NamaMatkul;
    
public:
    // Constructor
    Course() {
        NamaMatkul = "";
    }

    // Getter and setter methods
    std::string getNamaMatkul() {
        return NamaMatkul;
    }
    
    void setNamaMatkul(std::string NamaMatkul) {
        this->NamaMatkul = NamaMatkul;
    }
    
    // Print the attributes of the Course class
    void getInfoCourse() {
        std::cout << "Nama Matkul    : " << getNamaMatkul() << std::endl;
    }

     ~Course(){ 
        }//destruktor
};


    
