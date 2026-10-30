#ввод 
number = int(input("Введите целое число в десятичной системе: "))

binary = bin(number)[2:]
octal = oct(number)[2:]
hexadecimal = hex(number)[2:]

print(f"Десятичное:         {number}")
print(f"Двоичное:           {binary}")
print(f"Восьмеричное:       {octal}")
print(f"Шестнадцатеричное: {hexadecimal}")
