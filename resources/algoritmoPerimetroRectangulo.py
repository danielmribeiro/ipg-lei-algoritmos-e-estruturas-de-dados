# Algoritmo : algoritmoPerimetroRetangulo
# Objetivo : Pertmite calcular o perímetro de um retângulo
# Variáveis
# Entrada :
# L ( Inteiro T2) - Largura (> 0, <= 99)
# C ( Inteiro T2) - Comprimento (> 0, <= 99)
# Saída :
# P ( Inteiro T5) - Perímetro (> 0, <= 99999)
# Data : 2016 -9 -26 13:46:11
# Autor : Paulo Nunes
# Versão : 1.0
# Obs :
def algoritmoPerimetroRetangulo():
    # Entrada de dados (INPUT)
    # L= eval(input(" Largura ?"))
    L=0
    while (L<=0):
        L= eval(input(" Largura ?"))
    print(" Comprimento ?")
    C= eval(input())
    # Processamento ( PROCESSING )
    P = 2 * L + 2 * C
    # Saída de resultados ( OUTPUT )
    print (" Perímetro : ", P)
algoritmoPerimetroRetangulo()    
