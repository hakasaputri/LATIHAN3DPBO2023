# Saya Hakasa Putri mengerjakan LP3 DPBO 2023 C2 
# dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan 
# kecurangan seperti yang telah dispesifikasikan. Aamiin 

#melakukan import class
from Course import Course

class Prodi:


    # atribut private
    __NamaProdi = ""
    __KodeProdi = ""

    def __init__(self): #Constructor

        # atribut
        self.__NamaProdi = ""
        self.__KodeProdi = ""
        self.banyakCourse = 0
        # self.course =  Course()
        

    # metode getter dam setter

    def getNamaProdi(self):
        return self.NamaProdi
    
    def setNamaProdi(self, NamaProdi):
        self.NamaProdi = NamaProdi
    
    def getKodeProdi(self):
        return self.KodeProdi
    
    def setKodeProdi(self, KodeProdi):
        self.KodeProdi = KodeProdi
    
    def getbanyakCourse(self):
        return self.banyakCourse
    
    def setbanyakCourse(self, banyakCourse):
        self.banyakCourse = banyakCourse
        self.course = [Course() for i in range(self.banyakCourse)]

    def getCourse(self):
        return self.course
    
    def setCourse(self, course, nocourse):
        self.course[nocourse] = course

 
    # untuk print atribut kelas 
    def getInfoProdi(self):

        print("Prodi          : " + self.getNamaProdi())
        print("Kode Prodi     : " + self.getKodeProdi())
        print("-------------------------------------------")
        print("yang memiliki beberapa course :")
        print("-------------------------------------------")
        for i in range(self.banyakCourse):
            print("Course Ke " + str(i))
            self.course[i].getInfoCourse() 
            print('\n')

    
