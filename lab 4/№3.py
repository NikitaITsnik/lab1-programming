age=int(input("Введите возраст"))
if age<0:
    print("Неверный возраст")
elif age<=12:
    print("Ребенок")
elif age<=17:
    print("Подросток")
elif age<=64:
    print("Взрослый")
elif age>=65:
    print("Пожилой")