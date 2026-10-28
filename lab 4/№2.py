a=float(input("Введите а "))
b=float(input("Введите b "))
c=float(input("Введите c "))
if a>=b and a>=c:
    print (a,"масимум")
elif b>=c and b>=a:
    print(b, "максимум")
else:
    print(c,"максимум")