n = input("number: ")
l = list(n)
sum = 0
for i in range(len(l)):
    sum = sum + (int(l[i])**len(l))
if sum == int(n):
    print("Armstrong")
else:
    print("Not Armstrong")