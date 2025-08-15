#Parent class: atuIST
class atuIST():
    def __init__(self, fname, lname, position):
        self.fname = fname
        self.lname = lname
        self.position = position
    def showStaff(self):
        print("Staff name is: " , self.fname, " " ,self.lname)
        print("Position of staff: ", self.lname)

#Child class: staffIST
class staffIST():
    def __init__(self, fname, lname, position, age, salary):
        super().__init__(fname, lname, position)
        self.age = age
        self.salary = salary
    def staffSal(self):
        print(self.fname, " ", self.lname, "is " , self.age, "years")
        
