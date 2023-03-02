# Saya Hakasa Putri mengerjakan LP3 DPBO 2023 C2 
# dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan 
# kecurangan seperti yang telah dispesifikasikan. Aamiin 

from Human import Human

class SivitasAkademik(Human):
    
    __asalUniv = ""
    __emailEdu = ""
   

    def __init__(self): #Constructor

        # atribut
        self.__asalUniv = ""
        self.__emailEdu = ""
     
    # metode getter dam setter

    def getasalUniv(self):
        return self.asalUniv
    
    def setasalUniv(self, asalUniv):
        self.asalUniv = asalUniv
    
    def getemailEdu(self):
        return self.emailEdu
    
    def setemailEdu(self, emailEdu):
        self.emailEdu = emailEdu



    # untuk print atribut kelas Sivitas Akademik
    def getInfoSivitasAkademik(self):
        self.getInfoHuman()
        print("-------------------------------------------")
        print("Manusia ini berasal dari ")
        print("-------------------------------------------")
        print("Asal Univ      : " + self.getasalUniv())
        print("Email Edu      : " + self.getemailEdu())
        

    
