def medirTempoEscritaNoDisco():
    import time    
    start = time.time()
    with open("test.txt", 'w') as f:
        for i in range(10 000 000):
            # print('This is a speed test', file=f)
            f.write('This is a speed test\n')
    end = time.time()
    print(end - start)

medirTempoEscritaNoDisco()    
