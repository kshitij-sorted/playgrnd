n = int(input())

#  # 1
# for i in range(n):
#     for j in range(n):
#         print("* ",end="")
#     print() #print statement already has next line (escape seq) "/n" so we just apply the function

# # 2
# for i in range(n):
#     for j in range(i+1):
#         print("* ",end="")
#     print()

# # 3
# for i in range(n):
#     for j in range(i+1):
#         print(j+1," ",end="")
#     print()

# # 4
# for i in range(n):
#     for j in range(i+1):
#         print(i+1," ",end="")
#     print()

# # 5
# for i in range(n):
#     for j in range(n-i):
#         print("* ",end="")
#     print()

# # 6
# for i in range(n):
#     for j in range(n-i):
#         print(j+1,end="")
#     print()

# 7
# for i in range(n):
    
#     for j in range(n-i-1):
#         print(" ",end="")
#     for l in range(2*i+1):
#         print("*",end="")
#     print()

# 8
# for i in range(n):
#     if i%2 == 0:
#         for j in range(i):
#             print(" ",end="")
#         for l in range(n-i):
#             print("* ",end ="")
#         print()

# 9
# for i in range(n):
#     if i%2 == 0:
#         for j in range(n-i-1):
#             print(" ",end="")
#         for l in range(n-(n-i-1)):
#             print("* ",end="")
#         print()
# for i in range(n):
#     if i%2 == 0:
#         for j in range(i):
#             print(" ",end="")
#         for l in range(n-i):
#             print("* ",end ="")
#         print()

# # 10
# for i in range(n):
#     for j in range(i+1):
#         print("* ",end="")
#     print()
# for i in range(n-1):
#     for l in range(n-(i+1)):
#         print("* ",end="")
#     print()

    