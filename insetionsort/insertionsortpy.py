print("Nhap vao so phan tu n: ")
n = int(input())
A = []
for i in range (n):
    A.append(int(input()))
for i in range(n):
    if i > 0:
        d = A[i]
        j = i -1
        while(j>=0 and A[j] > d):
           A[j+1] = A[j]
           j = j-1
        A[j+1] = d
    for k in range(n):
       print(A[k], end = " ")
    print()