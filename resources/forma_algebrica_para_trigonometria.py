#forma_algebrica_para_trigonometria
#Permite ...
import math

def forma_algebrica_para_trigonometria():
    a=-1
    while ((a<0)or(a>999)):
        a=eval(input("parte real(cm)?"))
    b=-1
    while ((b<0)or(b>999)):
        b=eval(input("parte imaginaria(cm)?"))
    
    z=math.sqrt(a*a + b*b)
    ro=z
    teta= math.atan (b/a)
    if (a>=0 and b>=0):
        a=teta
    elif(a<=0 and b>=0):
        a=math.pi - teta
    elif(a<=0 and b<=0):
        a=math.pi + teta
    elif(a>=0 and b<=0):
        a=2*math.pi - teta
    print("distancia a origem: ",ro," cm")
    print("angulo com origem: ", a, " PIrad")



forma_algebrica_para_trigonometria()
