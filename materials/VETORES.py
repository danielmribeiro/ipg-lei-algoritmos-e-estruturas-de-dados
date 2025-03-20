#SomaVetores
def SomaDoisVetores():
    A=[]
    B=[]
    C=[]
    n=-1
    while(n<=0):
        n=eval(input("Indica a dimensão dos vetores?"))
    for i in range (n):
        A.append (eval(input("o valor do vetor A?")))
        B.append (eval(input("o valor do vetor B?")))
        C.append (A[i]+B[i])
    print (A)
    print ("+")
    print (B)
    print ("=")
    print (C)
    print (A,"+",B,"=",C)

SomaDoisVetores()
