#classificação do ar CO2
def classificacaodoarCO2():
    CO2= -1
    while (CO2<0):
        CO2=eval(input("O valor de CO2? "))
    if(CO2>=10000):
        classificacao = "Mau"
    elif(CO2>=8500):
        classificacao = "Fraco"
    elif(CO2>=7000):
        classificacao = "Medio"
    elif(CO2>=5000):
        classificacao = "Bom"
    elif(CO2>=0):
        classificacao = "Muito Bom"
    print(classificacao)


classificacaodoarCO2()        
        
