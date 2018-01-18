#############################################################################
#                    translator.py 
#                        ANEB
#   DOPLŇOVAČ HÁČKŮ A ČÁREK DO C PROGRAMŮ NA WINDOWS
#    v. 1.0 18.01.2018 by Jindřich Dušek
#   -písmena s háčky a čárkami nahradí vhodně tak, aby se we 
#   windowsím terminálu vytiskla správně
#   -zatím betaverze, takže je občas potřeba soubor 
#   zpracovat a výsledný soubor ještě jednou zpracovat
#   Použití: 
#   Do bashe: python3 translater.py <Z.py >Do.py
#   V hlavičce souboru.c je potřeba mít:
#   int aa=160;int cz=159;int ii=161;int uu=163;int ee=130;int ie=216;
#   int rz=253;int uk=133;int oo=162;int sz=231;int tj=156;int zs=167;
#   int yy= 236;int nj =229;   
#   int II = 214; int AA=181;int EE=144;int TJ=155;int ZS=166;int IE=183;
#   int SZ=230;int RZ=252;int CZ=428;int NJ = 213;
#   Při použití to řekne error o konci souboru, ale ten ničemu nevadí
#   printf v souboru musí začínat na nové řádce a za koncem printf nesmí 
#   nic být (protože by se to jinak smazalo)
############################################################################
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
        if radek[i] == 'ň' :
            radek.append(", nj")
            radek[i]='c'
            radek.insert(i,'%')
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
        if radek[i] == 'Ň' :
            radek.append(", NJ")
            radek[i]='c'
            radek.insert(i,'%')


    radek.append(')')
    radek.append(';')
    print(''.join(radek))





