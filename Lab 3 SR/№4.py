from datetime import date

day = int(input("Введите день рождения (1-31): "))
month = int(input("Введите месяц рождения (1-12): "))
year = int(input("Введите год рождения: "))

# Сегодняшняя дата
today = date.today()

# Вычисляем возраст
age = today.year - year

# Если день рождения в этом году ещё не наступил — вычитаем год
if (today.month, today.day) < (month, day):
    age -= 1

print(f"\nВаш возраст: {age} лет")
