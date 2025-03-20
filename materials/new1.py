def Estrutura():
    import struct
    carroFormato = struct.Struct('20s30s30sii');
    print(carroFormato.format)
    print(carroFormato.size)
	
	Matricula = 'Matricula'.encode()
	print (Matricula)
	
Estrutura();
