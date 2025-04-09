student_scores = [150, 142, 185, 120, 171, 184, 149, 24, 59, 68, 199, 78, 65, 89, 86, 55, 91, 64, 89]
print(range(1, 10))
print(sum(student_scores))
summ = 0
for i in range(len(student_scores)):
    summ = summ + student_scores[i]
print(summ)
print(max(student_scores))
print(min(student_scores))
m = 0
for i in range(len(student_scores)):
    if m < student_scores[i]:
        m = student_scores[i]
    else:
        m = m
print(m)
for i in range(len(student_scores)):
    if m > student_scores[i]:
        m = student_scores[i]
    else:
        m = m
print(m)