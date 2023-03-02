# Saya Hakasa Putri mengerjakan LP3 DPBO 2023 C2 
# dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan 
# kecurangan seperti yang telah dispesifikasikan. Aamiin 


class Human:


    __NIK = ""
    __nama = ""
    __gender = ""

    def __init__(self): #Constructor

        # atribut
        self.__NIK = ""
        self.__nama = ""
        self.__gender = ""

    # metode getter dam setter

    def getNIK(self):
        return self.NIK
    
    def setNIK(self, NIK):
        self.NIK = NIK
    
    def getNama(self):
        return self.nama
    
    def setNama(self, nama):
        self.nama = nama

    def getGender(self):
        return self.Gender
    
    def setGender(self, Gender):
        self.Gender = Gender

    # untuk print atribut kelas human
    def getInfoHuman(self):

        print("NIK            : " + self.getNIK())
        print("Nama           : " + self.getNama())
        print("Gender         : " + self.getGender())

    
