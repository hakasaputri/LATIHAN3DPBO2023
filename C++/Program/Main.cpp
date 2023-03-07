#include <iostream>
#include "Prodi.cpp"
#include "Dosen.cpp"
#include "Mahasiswa.cpp"
#include "SivitasAkademik.cpp"

int main() {
    SivitasAkademik SivitasAkademik;
    SivitasAkademik.setNIK("20313910391");
    SivitasAkademik.setNama("Hakasa Putri");
    SivitasAkademik.setGender("Perempuan");
    SivitasAkademik.setasal_univ("UPI");
    SivitasAkademik.setemail_edu("hakasa@upi.edu");

    Mahasiswa mahasiswa1;
    mahasiswa1.setNIM("2007698");
    mahasiswa1.setFakultas("FPMIPA");

    Prodi prodi1;
    prodi1.setNamaProdi("Ilmu Komputer");
    prodi1.setKodeProdi("IK");
    prodi1.setbanyakCourse(2);

    Course course1[2];
    course1[0].setNamaMatkul("Data Visualization");
    course1[1].setNamaMatkul("Big Data Platform");

    mahasiswa1.setProdi(prodi1);
    prodi1.setCourse(course1[0], 0);
    prodi1.setCourse(course1[1], 1);

    std::cout << "===========================================" << std::endl;
    std::cout << "            Data Mahasiswa Pertama" << std::endl;
    std::cout << "===========================================" << std::endl;

    SivitasAkademik.getInfoHuman();
    SivitasAkademik.getInfoSivitasAkademik();
    mahasiswa1.getInfoMahasiswa();



    // ---------------------------------------------------------------------------------------------
    std::cout << std::endl;

    SivitasAkademik.setNIK("20313987365");
    SivitasAkademik.setNama("Sunoo");
    SivitasAkademik.setGender("Laki-laki");
    SivitasAkademik.setasal_univ("UPI");
    SivitasAkademik.setemail_edu("sunoo@upi.edu");

    Dosen dosen1;
    dosen1.setNIP("2007678");
    dosen1.setPendTerakhir("S1");
    dosen1.setKeahlian("Big Data");
    dosen1.setFakultas("Ilmu Komputer");

    Prodi prodi2;
    prodi2.setNamaProdi("Ilmu Komputer");
    prodi2.setKodeProdi("IK");
    prodi2.setbanyakCourse(2);

    Course course2[2];
    course2[0].setNamaMatkul("Data Visualization");
    course2[1].setNamaMatkul("Big Data Platform");

    dosen1.setProdi(prodi2);
    prodi2.setCourse(course2[0], 0);
    prodi2.setCourse(course2[1], 1);

    std::cout << "===========================================" << std::endl;
    std::cout << "            Data Dosen Pertama" << std::endl;
    std::cout << "===========================================" << std::endl;

    SivitasAkademik.getInfoHuman();
    SivitasAkademik.getInfoSivitasAkademik();
    dosen1.getInfoDosen();

    std::cout << std::endl;

    return 0;
}
