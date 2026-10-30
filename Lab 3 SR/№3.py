import string

text = input("Введите строку: ")

letters = 0
digits = 0
spaces = 0
punctuation = 0
other = 0

punctuation_chars = string.punctuation

for char in text:
    if char.isalpha():
        letters += 1
    elif char.isdigit():
        digits += 1
    elif char.isspace():
        spaces += 1
    elif char in punctuation_chars:
        punctuation += 1
    else:
        other += 1

print("\n--- Статистика строки ---")
print(f"Буквы:             {letters}")
print(f"Цифры:             {digits}")
print(f"Пробелы:           {spaces}")
print(f"Знаки препинания:  {punctuation}")
if other:
    print(f"Прочие символы:    {other}")
