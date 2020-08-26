for _ in range(int(input())):
    n=int(input())
    A=[]
    i=0
    while i<64 and n>0:
        if n&1:
            A.append(3**i)
        n>>=1
        i=i+1
    print(len(A))
    for i in range(len(A)):
        print(A[i],end=" ")
    print()