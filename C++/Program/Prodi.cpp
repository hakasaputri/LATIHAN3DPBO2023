#include <iostream>
#include <string>
#include "Course.cpp"

using namespace std;

class Prodi {
private:
    string NamaProdi;
    string KodeProdi;
    int banyakCourse;
    Course* course;

public:
    Prodi() {
        NamaProdi = "";
        KodeProdi = "";
        banyakCourse = 0;
        course = nullptr;
    }

    string getNamaProdi() {
        return NamaProdi;
    }

    void setNamaProdi(string NamaProdi) {
        this->NamaProdi = NamaProdi;
    }

    string getKodeProdi() {
        return KodeProdi;
    }

    void setKodeProdi(string KodeProdi) {
        this->KodeProdi = KodeProdi;
    }

    int getbanyakCourse() {
        return banyakCourse;
    }

    void setbanyakCourse(int banyakCourse) {
        this->banyakCourse = banyakCourse;
        this->course = new Course[banyakCourse];
    }

    Course* getCourse() {
        return course;
    }

    void setCourse(Course course, int nocourse) {
        this->course[nocourse] = course;
    }

    void getInfoProdi() {
        cout << "Prodi          : " << getNamaProdi() << endl;
        cout << "Kode Prodi     : " << getKodeProdi() << endl;
        cout << "-------------------------------------------" << endl;
        cout << "yang memiliki beberapa course :" << endl;
        cout << "-------------------------------------------" << endl;
        for (int i = 0; i < getbanyakCourse(); i++) {
            cout << "Course Ke " << i << endl;
            getCourse()[i].getInfoCourse();
            cout << endl;
        }
    }

     ~Prodi(){ //destruktor
    }
};
