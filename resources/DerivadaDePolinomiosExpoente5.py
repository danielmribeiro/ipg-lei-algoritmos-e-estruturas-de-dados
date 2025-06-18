#DerivadaDePolinomiosExpoente5
# Permite calcular a derivada de polinomios até ao grau 5

def DerivadaDePolinomiosExpoente5():
    c1=-100
    while((c1<=-99.99)or (c1>=99.99)):
        c1=eval(input("Coeficiente do termo de grau 5"))

    c2=-100
    while((c2<=-99.99)or (c2>=99.99)):
        c2=eval(input("Coeficiente do termo de grau 4"))

    c3=-100
    while((c3<=-99.99)or (c3>=99.99)):
        c3=eval(input("Coeficiente do termo de grau 3"))

    c4=-100
    while((c4<=-99.99)or (c4>=99.99)):
        c4=eval(input("Coeficiente do termo de grau 2"))

    c5=-100
    while((c5<=-99.99)or (c5>=99.99)):
        c5=eval(input("Coeficiente do termo de grau 1"))

    c6=-100
    while((c6<=-99.99)or (c6>=99.99)):
        c6=eval(input("Termo Independente"))

    r1=5*c1
    r2=4*c2
    r3=3*c3
    r4=2*c4
    r5=1*c5
    r6=0*c6
    if r1>0:
        print("+")
    else:
        if r1<0:
            print("-")
        else:
            if r2>0:
                print("+")
            else:
                if r2<0:
                    print("-")
                else:
                    if r3>0:
                        print("+")
                    else:
                        if r3<0:
                            print("-")  
                        else:
                            if r4>0:
                                print("+")
                            else:
                                if r4<0:
                                    print("-")
                                else:
                                    if r5>0:
                                        print("+")
                                    else:
                                        if r5<0:
                                            print("-")


DerivadaDePolinomiosExpoente5()
    
