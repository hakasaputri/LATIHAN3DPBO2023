# Saya Hakasa Putri mengerjakan LP3  DPBO 2023 C2 
# dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan 
# kecurangan seperti yang telah dispesifikasikan. Aamiin 

#melakukan import class
from SivitasAkademik import SivitasAkademik
from Prodi import Prodi

class Mahasiswa(SivitasAkademik):

    # atribut private
    __NIM = ""
    __Fakultas = ""


    def __init__(self): #Constructor

        # atribut
        self. __NIM = ""
        self.__Fakultas = ""

    # setter getter
    def getNIM(self):
        return self.NIM
    
    def setNIM(self, NIM):
        self.NIM = NIM

    def getFakultas(self):
        return self.Fakultas
    
    def setFakultas(self, Fakultas):
        self.Fakultas = Fakultas

    def getProdi(self):
        return self.Prodi
    
    def setProdi(self, Prodi):
        self.Prodi = Prodi

    # untuk print atribut kelas mahasiswa
    def getInfoMahasiswa(self):

        print("-------------------------------------------")
        print("yang merupakan seorang mahasiswa dengan")
        print("-------------------------------------------")
        print("NIM            : " + self.getNIM())
        print("Fakultas       : " + self.getFakultas())
       
        self.Prodi.getInfoProdi()

