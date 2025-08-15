try:
    x = int(input("X = "))
    y = int(input("Y = "))
    result = x/y
except ZeroDivisionError:
    print("Error!!!")
else:
    print(result)
finally:
    print("Game Over!")
