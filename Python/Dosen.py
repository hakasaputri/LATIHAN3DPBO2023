# Saya Hakasa Putri mengerjakan LP3 DPBO 2023 C2 
# dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan 
# kecurangan seperti yang telah dispesifikasikan. Aamiin 


#melakukan import class
from SivitasAkademik import SivitasAkademik
from Prodi import Prodi

class Dosen(SivitasAkademik):

    # atribut private
    __NIP = ""
    __Fakultas = ""
    __PendTerakhir = ""
    __Keahlian = ""

    def __init__(self): #Constructor

        # atribut
        self. __NIP = ""
        self.__Fakultas = ""
        self.__PendTerakhir = ""
        self.__Keahlian = ""

    # setter getter
    def getNIP(self):
        return self.NIP
    
    def setNIP(self, NIP):
        self.NIP = NIP

    def getFakultas(self):
        return self.Fakultas
    
    def setFakultas(self, Fakultas):
        self.Fakultas = Fakultas
    
    def getPendTerakhir(self):
        return self.PendTerakhir
    
    def setPendTerakhir(self, PendTerakhir):
        self.PendTerakhir = PendTerakhir
    
    def getKeahlian(self):
        return self.Keahlian
    
    def setKeahlian(self, Keahlian):
        self.Keahlian = Keahlian

    def getProdi(self):
        return self.Prodi
    
    def setProdi(self, Prodi):
        self.Prodi = Prodi


    # untuk print atribut kelas dosen
    def getInfoDosen(self):

        print("-------------------------------------------")
        print("yang merupakan seorang dosen dengan")
        print("-------------------------------------------")
        print("NIP            : " + self.getNIP())
        print("Fakultas       : " + self.getFakultas())
        print("Pend Terakhir  : " + self.getPendTerakhir())
        print("Keahlian       : " + self.getKeahlian())
        self.Prodi.getInfoProdi()

     
    
