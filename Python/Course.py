# Saya Hakasa Putri mengerjakan LP3 DPBO 2023 C2 
# dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan 
# kecurangan seperti yang telah dispesifikasikan. Aamiin 


class Course:
    
    __NamaMatkul = ""


    def __init__(self): #Constructor

        # atribut
        self.__NamaMatkul = ""

    # metode getter dam setter
    
    def getNamaMatkul(self):
        return self.NamaMatkul
    
    def setNamaMatkul(self, NamaMatkul):
        self.NamaMatkul = NamaMatkul
    
  

    # untuk print atribut kelas course
    def getInfoCourse(self):
        
        print("Nama Matkul    : " + self.getNamaMatkul())
     


    
