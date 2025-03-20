def ReadPassagensTXT2BIN():
    import struct
    import datetime
    import time
    passagemFormato = struct.Struct('iifi')
    IDUtenteFK_procurar = eval(input('IDUtenteFK ? '))
    #IDUtenteFK_procurar = 2117
    f_bin = open("passagens.bin", "rb")   ## leitura, binário
    f_bin.seek(0, 2)
    r = int(f_bin.tell() / passagemFormato.size)
    f_bin.seek(0, 0)
    pos = -1
    i = 0
    s = time.time()
    for i in range(0, r):
        passagemBinario = f_bin.read(passagemFormato.size)
        IDCidade, IDUtenteFK, Data, EntradaSaida = passagemFormato.unpack(passagemBinario)
        Data = datetime.datetime.fromtimestamp(int(Data))
        if (IDUtenteFK_procurar == IDUtenteFK):
            pos = i
            #print(IDCidade, IDUtenteFK, Data, EntradaSaida)
        i = i + 1
        if ((i % 10000)==0):
            print (i, sep=' ', end='\n')            
    f_bin.close()
    if (pos != -1):
        print('Passou')  
    else:
        print('Não passou!')
    e = time.time()
    print (e - s)
ReadPassagensTXT2BIN()    
	
