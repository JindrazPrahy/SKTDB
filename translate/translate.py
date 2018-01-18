import string



while True :
    radek = list(input())
    if radek == '' :
        break
    if radek[0:6] != ['p','r','i','n','t','f'] :
        print(''.join(radek))
        continue
    while radek[-1] != ')' :
        radek.pop()
    radek.pop()
    for i in range(len(radek)) :
        if radek[i] == 'á' :
            radek.append(", aa")
            radek[i]='c'
            radek.insert(i, '%') 
        if radek[i] == 'č' :
            radek.append(", cz")
            radek[i]='c'
            radek.insert(i, '%') 
        if radek[i] == 'í' :
            radek.append(", ii")
            radek[i]='c'
            radek.insert(i, '%') 
        if radek[i] == 'ú' :
            radek.append(", uu")
            radek[i]='c'
            radek.insert(i, '%') 
        if radek[i] == 'é' :
            radek.append(", ee")
            radek[i]='c'
            radek.insert(i, '%') 
        if radek[i] == 'ě' :
            radek.append(", ie")
            radek[i]='c'
            radek.insert(i, '%') 
        if radek[i] == 'ř' :
            radek.append(", rz")
            radek[i]='c'
            radek.insert(i, '%') 
        if radek[i] == 'ů' :
            radek.append(", uk")
            radek[i]='c'
            radek.insert(i, '%') 
        if radek[i] == 'ó' :
            radek.append(", oo")
            radek[i]='c'
            radek.insert(i, '%') 
        if radek[i] == 'š' :
            radek.append(", sz")
            radek[i]='c'
            radek.insert(i, '%') 
        if radek[i] == 'tj' :
            radek.append(", ť")
            radek[i]='c'
            radek.insert(i, '%') 
        if radek[i] == 'ž' :
            radek.append(", zs")
            radek[i]='c'
            radek.insert(i, '%') 
        if radek[i] == 'ý' :
            radek.append(", yy")
            radek[i]='c'
            radek.insert(i, '%') 
        if radek[i] == 'Í' :
            radek.append(", II")
            radek[i]='c'
            radek.insert(i, '%') 
        if radek[i] == 'Á' :
            radek.append(", AA")
            radek[i]='c'
            radek.insert(i, '%') 
        if radek[i] == 'É' :
            radek.append(", EE")
            radek[i]='c'
            radek.insert(i, '%') 
        if radek[i] == 'Ť' :
            radek.append(", TJ")
            radek[i]='c'
            radek.insert(i, '%') 
        if radek[i] == 'Ž' :
            radek.append(", ZS")
            radek[i]='c'
            radek.insert(i, '%') 
        if radek[i] == 'Ě' :
            radek.append(", IE")
            radek[i]='c'
            radek.insert(i, '%') 
        if radek[i] == 'Š' :
            radek.append(", SZ")
            radek[i]='c'
            radek.insert(i, '%') 
        if radek[i] == 'Ř' :
            radek.append(", RZ")
            radek[i]='c'
            radek.insert(i, '%') 
        if radek[i] == 'Č' :
            radek.append(", CZ")
            radek[i]='c'
            radek.insert(i, '%') 


    radek.append(')')
    radek.append(';')
    print(''.join(radek))





