import math

class circle:
    def area(radius):
        return math.pi * radius ** 2

radius = float(input("Enter radius of circle: "))
print ("Area of circle is: ", circle.area(radius))
