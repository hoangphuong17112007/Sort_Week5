print("Nhap vao so phan tu n: ")
n = int(input())
A = []
for i in range(n):
    A.append(int(input()))
for i in range(n-1):
    min = i
    for j in range(i+1, n): 
        if A[j] < A[min]:
            min = j
    if min != i: 
        temp = A[i]
        A[i] = A[min]
        A[min] = temp
    for j in range(n):
        print(A[j], end = " ")
    print()