# Saya Hakasa Putri mengerjakan LP3 DPBO 2023 C2 
# dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan 
# kecurangan seperti yang telah dispesifikasikan. Aamiin 

#melakukan import class

from SivitasAkademik import SivitasAkademik 
from Prodi import Prodi 
from Course import Course
from Dosen import Dosen 
from Mahasiswa import Mahasiswa 
from Human import Human 


SivitasAkademik = SivitasAkademik() # membuat array objek 


SivitasAkademik.setNIK("20313910391")
SivitasAkademik.setNama("Hakasa Putri")
SivitasAkademik.setGender("Perempuan")
SivitasAkademik.setasalUniv("UPI")
SivitasAkademik.setemailEdu("hakasa@upi.edu")


mahasiswa1 = Mahasiswa() # membuat array objek 

mahasiswa1.setNIM("2007698")
mahasiswa1.setFakultas("FPMIPA")


prodi1 = Prodi()

prodi1.setNamaProdi("Ilmu Komputer")
prodi1.setKodeProdi("IK")
prodi1.setbanyakCourse(2)


course1 = [Course() for i in range(2)]
course1[0].setNamaMatkul("Data Visualization")
course1[1].setNamaMatkul("Big Data Platform")


mahasiswa1.setProdi(prodi1)
prodi1.setCourse(course1[0], 0)
prodi1.setCourse(course1[1], 1)

print("===========================================")
print("            Data Mahasiswa Pertama")
print("===========================================")

SivitasAkademik.getInfoSivitasAkademik()
mahasiswa1.getInfoMahasiswa()

print('\n')

# # ----------- Input SivitasAkademik Kedua -------------
SivitasAkademik.setNIK("20313987391")
SivitasAkademik.setNama("Sunoo")
SivitasAkademik.setGender("Laki-laki")
SivitasAkademik.setasalUniv("UPI")
SivitasAkademik.setemailEdu("sunoo@upi.edu")


dosen1 = Dosen() # membuat array objek 

dosen1.setNIP("2007678")
dosen1.setPendTerakhir("S1")
dosen1.setKeahlian("Big Data")
dosen1.setFakultas("Ilmu Komputer")


prodi2 = Prodi()

prodi2.setNamaProdi("Ilmu Komputer")
prodi2.setKodeProdi("IK")
prodi2.setbanyakCourse(2)


course2 = [Course() for i in range(2)]
course2[0].setNamaMatkul("Data Visualization")
course2[1].setNamaMatkul("Big Data Platform")


dosen1.setProdi(prodi2)
prodi2.setCourse(course2[0], 0)
prodi2.setCourse(course2[1], 1)

print("===========================================")
print("            Data Dosen Pertama")
print("===========================================")

SivitasAkademik.getInfoSivitasAkademik()
dosen1.getInfoDosen()

print('\n')