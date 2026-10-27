
choice = input("1. °C в °F, 2. °F в °C: ")
temp = float(input("Введите температуру: "))

if choice == "1":
    result = temp * 9 / 5 + 32
    print(f"Результат: {result:.2f} °F")
elif choice == "2":
    result = (temp - 32) * 5 / 9
    print(f"Результат: {result:.2f} °C")
else:
    print("Неверный выбор")
