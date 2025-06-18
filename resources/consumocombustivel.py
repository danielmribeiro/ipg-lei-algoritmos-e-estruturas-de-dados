# Algoritmo: algoritmoconsumocombustivel
def consumocombustivel():
    L=0
    while (L<=0):
        L= eval(input(" litros de combustivel ?"))
    P=0
    while (P<=0):
        P= eval(input(" Preço por litros?"))
    D=0
    while (D<=0):
        D= eval(input(" Distancia percorida ?"))
    # Processamento ( PROCESSING )
    C = (L/D) * 100
    V =P*C
    print("consumo de combustivel:", C,"l/100km")
    print("valor gasto:", V,"E/km")
consumocombustivel()
