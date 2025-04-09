letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
numbers = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
symbols = ['!', '#', '$', '%', '&', '(', ')', '*', '+']

import random

print("Welcome to the PyPassword Generator!")
nr_letters = int(input("How many letters would you like in your password?\n"))
nr_symbols = int(input(f"How many symbols would you like?\n"))
nr_numbers = int(input(f"How many numbers would you like?\n"))
l = []
nr_l = nr_numbers + nr_letters + nr_symbols

for i in range(nr_letters):
    print(random.choice(letters),end="")
    l.append(random.choice(letters))
for i in range(nr_symbols):
    print(random.choice(symbols),end="")
    l.append(random.choice(symbols))
for i in range(nr_numbers):
    print(random.choice(numbers),end="")
    l.append(random.choice(numbers))
print()
for i in range(nr_l):
    print(random.choice(l),end="")



