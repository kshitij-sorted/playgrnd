rock = '''
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
'''

paper = '''
    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
'''

scissors = '''
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
'''
import random
l = [rock,paper,scissors]
c = random.choice(l)

i = int(input(" 0 - rock || 1 - paper || 2 - scissors "))
if i == 0:
    print(rock)
    if c == rock:
        print(rock)
        print("Draw")
    elif c == paper:
        print(paper)
        print("Lost")
    elif c == scissors:
        print(scissors)
        print("Win")

if i == 1:
    print(paper)
    if c == rock:
        print(rock)
        print("Win")
    if c == paper:
        print(paper)
        print("Draw")
    if c == scissors:
        print(scissors)
        print("Lost")

if i == 2:
    print(scissors)
    if c == rock:
        print(rock)
        print("Lost")
    if c == paper:
        print(paper)
        print("Win")
    if c == scissors:
        print(scissors)
        print("Draw")
