#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*       TODO: NOTED SYMBOL       */

/* české znaky */
int aa=160;int cz=159;int ii=161;int uu=163;int ee=130;int ie=216;int rz=253;int uk=133;int oo=162;int sz=231;int tj=156;int zs=167 ;int yy= 236;
int II = 214; int AA=181;int EE=144;int TJ=155;int ZS=166;int IE=183;int SZ=230;int RZ=252;int CZ=428;

int filtr(int bypass); int c;
char nahled(char boi[20]);


int main() {
/*Možnosti: */	 bool FAE= 1;

char input [20];

		/* Startup screen */
printf("      __/ ___ _    ___ _         _    __            ___ __     _/    _      ___      _   /   __ ___        _  _  \n"); printf("  \\  / |   | |_   | | |_   \\  / |_   (_  |/  /\\  | | | (_  |/ |_    | \\  /\\  |  /\\  |_)  /\\   /  |    |_| |_ |_) \n");printf("   \\/ _|_  | |_ \\_| | |_    \\/  |_   __) |\\ /--\\ |_| | __) |\\ |_    |_/ /--\\ | /--\\ |_) /--\\ /_ _|_   | | |_ | \\ \n");
printf("\nZadejte %c%cslo, nebo jm%cno hry, kterou chcete zobrazit.\n", cz, ii, ee);   printf("Nejste-li si jisti, zkuste napsat help\n");
		/*Dostávání inputu od uživatele */
LOOP:scanf("%s", input);    int g;
while ( (g = getchar()) != EOF && g != '\n') { }
printf("Napsali jste: %s \n", input);

if(strcmp(input, "help") == 0 || strcmp(input, "pomoc", 1) == 0){ 	/*nápovìda*/
	printf("Seznam p%c%ckaz%c:\n help  --> pomoc\n konec --> ukon%cit program\n hry   --> zobraz%c seznam v%cech her\n filtr --> vyhled%cv%cn%c \n cisto --> vy%cist%c obrazovku\n", rz, ii, uk, cz, ii, sz, aa, aa, ii, cz, ii); goto LOOP;
}
if(strcmp(input, "konec") == 0|| strcmp(input, "k", 1) == 0){  /*ukonèení programu*/
	printf("		Nashledanou");
	goto END;
}
if(strcmp(input, "FML") == 0 || strcmp(input, "overwatch") == 0 ){ /*Lul dis */
 	printf(" -    -  -         -  -----------  \n");printf("!-!  !-!!-!       !-!!-----------! \n");printf("!-! !-! !-!       !-!!-----------  \n");printf("!-!!-!  !-!       !-!!-!           \n");printf("!-!-!   !-----------!!-----------  \n");printf("!--!    !-----------!!-----------! \n");printf("!-!-!    -----------  -----------! \n");printf("!-!!-!       !-!               !-! \n");printf("!-! !-!      !-!      -----------! \n");printf("!-!  !-!     !-!     !-----------! \n");
  	printf("-    -       -       -----------  \n");}

 if(strcmp(input, "clr")==0 || strcmp(input,"cisto") ==0){
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	goto LOOP;
	}

if(strcmp(input, "filtr") == 0 || strcmp(input, "fl") == 0){  /*odkaz na vyhledávací funkci */
	filtr(0);
	goto LOOP;
}
if(strcmp(input, "hry") == 0 || strcmp(input, "ls") == 0){  /*zobrazí seznam všech her */
	filtr(1);
	goto LOOP;
}


if(strncmp(input,"#", 1)==0){
   nahled(input);
	goto LOOP;
}
if(strncmp(input,"dementball", 9)==0 || (strncmp(input,"najelena", 9)==0 )){
   nahled(input);
	goto LOOP;
}

if(strcmp(input,"menu") == 0){    /*Menu, options  			18+10 */
printf("		    _____________________________ \n");
printf("		   |                             |\n");
printf("		   |    ASCII EFFECTS:");   if( FAE==1){ printf("ZAPNUTO    ");} else{printf("");} printf("|\n");
printf("		   |                             |\n");
printf("		   |                             |\n");
printf("		   |_____________________________|\n \n");
}


else{  /* Když zadaj nìco náhodnýho */
	printf("Toto nen%c validn%c p%c%ckaz, zkuste to znovu\n", ii, ii , rz, ii);

}
	goto LOOP;
	END : return 0;
}

int filtr(int bypass){ /* funkce na vytvoøení filtrovaného seznamu */
	char temp[BUFSIZ];int mint = -1; int maxt = 100; int t; char input[6];
		/* Symboly pro filtry  */
	bool h=0; bool z=0;bool vyzv=0;
	bool b=0;bool p=0;bool m=0;bool sp=0;
	bool ch=0;bool l=0;bool lk=0;bool kl=0;bool vlak =0;
	bool zsch=0;bool psch=0;bool ksch=0;bool vsch=0;
	bool bez=0;bool srek=0;bool nic=0;
	bool noc=0;

	/* ptací se fáze*/
	if(bypass == 0){
FILTROVANI:printf("Zadejte va%ce po%cadovan%c vyhled%cvac%c krit%cria:\n", sz, zs, aa, aa, ii, ee);
	scanf("%s", input);    int c; 			while ( (c = getchar()) != EOF && c != '\n') { }
		/*  Zadávání kritérií  */
		/* normální kritéria */
		if(strcmp(input, "h", 1) == 0){ h=1; goto FILTROVANI;}else if(strcmp(input, "z", 1) == 0){ z=1; goto FILTROVANI;}else if(strcmp(input, "vyzv", 1) == 0){ vyzv=1; goto FILTROVANI;}
		else if(strcmp(input, "b") == 0){ b=1; goto FILTROVANI;}else if(strcmp(input, "p") == 0){ p=1; goto FILTROVANI;}else if(strcmp(input, "m") == 0){ m=1; goto FILTROVANI;}else if(strcmp(input, "sp") == 0){ sp=1; goto FILTROVANI;}
		else if(strcmp(input, "ch") == 0){ ch=1; goto FILTROVANI;}else if(strcmp(input, "l") == 0){ l=1; goto FILTROVANI;}else if(strcmp(input, "lk") == 0){ lk=1; goto FILTROVANI;}else if(strcmp(input, "kl") == 0){ kl=1; goto FILTROVANI;}else if(strcmp(input, "vlak") == 0){ vlak=1; goto FILTROVANI;}
		else if(strcmp(input, "zsch") == 0){ zsch=1; goto FILTROVANI;}else if(strcmp(input, "psch") == 0){ psch=1; goto FILTROVANI;}else if(strcmp(input, "ksch") == 0){ ksch=1; goto FILTROVANI;}else if(strcmp(input, "vsch") == 0){ vsch=1; goto FILTROVANI;}
		else if(strcmp(input, "bez") == 0){ bez=1; goto FILTROVANI;}else if(strcmp(input, "srek") == 0){ srek=1; goto FILTROVANI;}else if(strcmp(input, "nic") == 0){ nic=1; goto FILTROVANI;}
		else if(strcmp(input, "noc") == 0){ noc=1; goto FILTROVANI;}
		/*  èas */
		else if(strcmp(input, "cas", 1) == 0){
			printf("Zadejte minim%cln%c %cas v minut%cch:", aa, ii, cz, aa);
			if (fgets(temp, sizeof(temp), stdin) != NULL){
				mint = atoi(temp);
			}
			printf("Zadejte maxim%cln%c %cas v minut%cch:", aa, ii, cz, aa);
			if (fgets(temp, sizeof(temp), stdin) != NULL){
				maxt = atoi(temp);
			}	goto FILTROVANI;
		}

	/*  Misc. pøíkazy  */
		if(strcmp(input, "konec", 1) == 0 || strcmp(input, "k", 1) == 0) {
			printf("Mission aborted \n");
			goto BACK;
		}
		else if(strcmp(input, "help", 1) == 0 || (strcmp(input, "ls", 1) == 0)){
			printf("Toto jsou dostupn%c krit%cria: \n", aa, ee);
			printf("hry (h), z%cvody (z), v%czvy (vyzv)\n", aa, yy);
			printf("brut%cln%c a n%cro%cn%c (b), p%cem%c%clec%c (m), pohodov%c (p), speci%cln%c (sp) \n", aa, ii, aa, cz, ee, rz, yy, sz, ii, ee, aa, ii);
			printf("za pochodu (ch), do lesa (l), na louku nebo pl%ccek (lk), do m%cstnosti (kl), do vlaku (vlak)\n", aa, ii);
			printf("na za%c%ctek sch%czky (zsch), doprost%ced sch%czky (psch), na konec sch%czky (ksch), na ven na sch%czce (vsch) \n", cz, aa, uk, rz, uk, uk, uk);
			printf("bez speci%cln%cich rekvizit (bez), s rekvizitami (srek), bez %cehokoliv (nic) \n", aa, ii, cz);
			printf("no%cn%c hry (noc) \n", cz, ii);
			goto FILTROVANI;
		}
		else if(strcmp(input, "hledat", 1) == 0 || strcmp(input, "hl", 1) == 0) {
			goto ZOBRAZ;
		}
		else{
			printf("Toto nen%c validn%c p%c%ckaz, zkuste to znovu\n", ii, ii , rz, ii);
				goto FILTROVANI;
		}
	}

	if(bypass ==1){ /* Zobrazí celý seznam  */
		bool h=1; bool z=1;bool vyzv=1;bool b=1;bool p=1;bool m=1;bool sp=1;bool ch=1;bool l=1;bool lk=1;bool kl=1;bool zsch=1;bool psch=1;bool ksch=1;bool vch=1;bool noc=1;
		goto ZOBRAZ;
	}

	/* Procesovací fáze */
bool dementball =0;bool najelena=0;bool chaos=0;


ZOBRAZ: printf("________________________________________________________________________________________________________________ \n");
	printf("		>>> SEZNAM ");
		if(b == true){printf("BRUT%cLN%cCH ", AA, II);} if(m == true){printf("P%cEMíSLEC%cCH ", RZ, II);} if(p == true){printf("POHODOVÍCH ");} if(sp == true){printf("SPECI%cLN%cCH ", AA, II);}
		if(noc == true){printf("NO%cN%cCH ", CZ, II);} printf("HER ");
		if(ch == true){printf("ZA POCHODU ");} if(l == true){printf("DO LESA ");} if(lk == true){printf("NA LOUKU ");} if(kl == true){printf("DO M%cSTNOSTI ", II);} if(vlak == true){printf("DO VLAKU ");}
		if(zsch == true){printf("NA ZA%c%cTEK SCH. ", CZ, AA);} if(psch == true){printf("DOPROST%cED SCH. ", RZ);} if(ksch == true){printf("NA KONEC SCH. ", CZ, AA);} if(vsch == true){printf("NA VEN NA SCH. ", CZ, AA);}
		if(mint != -1){ printf("TRVAJ%cC%cCH OD %dmin DO %dmin", 214, 214, mint, maxt);} printf("<<< \n");
		if(bez == true){printf("BEZ SP. REKVIZIT ", CZ, AA);} if(srek == true){printf("S REKVIZITAMI ", CZ, AA);} if(nic == true){printf("NA KTER%c NIC NEPOT%cEBUJETE ", EE, RZ);}

	/* èasový filtr, který nejdøív hodí všechny hry true */
	for (t = mint; t <= maxt; t++) {
	if (t == 10 ){
		dementball = true;
	}
	if (t == 10){
		najelena = true;
	}
	if ( t == 30){
		chaos = true;
	}
}
		/* Co nezobrazovat */
	if(h == true){
		;
		}
	if(z == true){
		dementball = 0; najelena=0; chaos =0;
	}
	if(vyzv == true){
		dementball = 0; najelena=0; chaos =0;
	}
	if(b == true){
		dementball = 0; najelena=0;
	}
	if(p == true){
		chaos =0;
	}
	if(m == true){
		dementball = 0; najelena=0; chaos =0;
	}
	if(sp == true){
		dementball = 0; najelena=0; chaos =0;
	}
	if(ch == true){
		dementball = 0; najelena=0; chaos =0;
	}
	if(l == true){
		dementball = 0; najelena=0; chaos =0;
	}
	if(lk == true){
		dementball = 0; najelena=0; chaos =0;
	}
	if(kl == true){
		;
	}
	if(vlak == true){
		dementball = 0; najelena=0; chaos =0;
	}
	if(zsch == true){
		chaos =0;
	}
	if(psch == true){
		;
	}
	if(ksch == true){
		dementball = 0; najelena=0; chaos =0;
	}
	if(vsch == true){
		dementball = 0; chaos =0;
	}
	if(bez == true){
		dementball = 0;
	}
	if(srek == true){
		najelena=0; chaos =0;
	}
	if(nic == true){
		dementball = 0; najelena = 0;
	}
	if(noc == true){
		dementball = 0; najelena=0; chaos =0;
	}




		/* Zobrazovací fáze (2 taby a mezera)*/
		int counter = 1;
	if(dementball == 1){ printf("%d...#01..........DEMENTBALL\n", counter); counter++;}
	if(najelena == 1){ printf("%d...#02..........NA JELENA\n", counter); counter++;}
	if(chaos == 1){ printf("%d...#03..........CHAOS\n", counter); counter++;}

	BACK:return 0;
}


char nahled(char boi[20]){
	if(strcmp(boi,"#01")==0 || strncmp(boi,"dementbal", 9)==0){ /* dementball */
		printf("________________________________________________________________________________________________________________ \n");printf("________________________________________________________________________________________________________________ \n");
		printf("   _____                                        _   __               __   __ 	 	 \n ");
		printf(" |_   _`.         10 minut                    / |_[  |             [  | [  | 		 HRA\n ");
  		printf("   | | `.\\  .---.  _ .--..--.  .---.  _ .--. `| |-'| |.--.   ,--.   | |  | | 		 POHODOV%c\n ", AA);
  		printf("   | |  | |/ /__\\ [ `.-. .-. |/ /__\\\\[ `.-. | | |  | '/'`\\\\  '_\\ :  | |  | |		 DO M%cSTNOSTI\n ", II);
 		printf("  _| |_.' /| \\__., | | | | | || \\__., | | | | | |, |  \\__/ |// | |, | |  | |  	NA ZA%c%cTEK SCH., DOPROST%CED SCH.\n ", CZ, AA, RZ);
		printf(" |______.'  '.__.'[___||__||__]'.__.'[___||__]\\__/[__;.__.' \\'-;__/[___][___] 	   	 S REKVIZITAMI\n \n");
		printf("REKVIZITY: Tenis%ck, klubko vlny, nebo jin%c mal%c m%c%cek                ,-'''-,   ", aa, yy, yy, ii, cz); printf("OMEZEN%c: -m%c%ce se lze dot%ckat  \n", II, ii, cz, yy);
        printf("PRAVIDLA: Z%cklad je podobn%c jako vyb%cjen%c - c%clem je trefit         /\\     /\\  ", aa, yy, ii, aa, ii); printf("jen jednou rukou najednou\n");
        printf("ostatn%c m%c%cem a neb%ct s%cm trefen (kdo je trefen vypadl).            | |   | |  ", ii, ii, cz, yy, aa); printf("-m%c%c se odpaluje JEN nadhozen%cm \n", ii, cz, ii);
        printf("Je%cto se v%cak hra jmenuje Dementball, maj%c hr%c%ci ur%cit%c omezen%c.    \\/     \\/  ", zs, sz, ii, aa, cz, cz, aa, ii); printf("jednou rukou a %cderem druhou \n", uu);
        printf("Roleplay 'dement%c' je v%ct%cn. Kdo vyhraje, m%c titul vrchn%cho dementa. '-...-'", uk, ii, aa, aa, ii); printf("-mus%cte se dot%ckat 3 kon%cetinami zem%c \n \n", ii, yy, cz, ie);
		printf("ALTERNATIVN%C PRAVIDLA: M%c%cete podle pot%ceby zm%cnit omezen%c. Nap%c. je%ct%c hor%c%c omezen%c pohybu a odpalov%cn%c m%c%ce \npouze hlavou. \n", II, uk, zs, rz, ie, ii, rz, sz, ie, sz, ii, ii, aa, ii, ii, cz);
		printf("POZN.: U n%cs celkem popul%crn%c hra. Je t%ceba hru urychlit, aby posledn%ch p%cr hr%c%c%c nebojovalo zbyte%cn%c dlouho a lidi \nse nenudili. Koment%c%c z role sportovn%cho koment%ctora m%c%ce b%ct vtipn%c. \n", aa, aa, ii, rz, ii, aa, aa,cz, uk, cz, ie, aa, rz, ii, aa, uk, zs, yy, yy);
	}
	else if(strcmp(boi,"#02")==0 || strcmp(boi,"najelena")==0){
	printf("________________________________________________________________________________________________________________ \n");printf("________________________________________________________________________________________________________________ \n");
	printf(" __    _  _______        ___  _______  ___      _______  __    _  _______  \n");
	printf("|  |  | ||   _   |      |   ||       ||   |    |       ||  |  | ||   _   |  HRA        \n");
	printf("|   |_| ||  |_|  | 10   |   ||    ___||   |    |    ___||   |_| ||  |_|  |  POHODOV%c\n", AA);
	printf("|       ||       |minut |   ||   |___ |   |    |   |___ |       ||       |  DO M%cSTNOSTI\n", II);
	printf("|  _    ||   _   |   ___|   ||    ___||   |___ |    ___||  _    ||   _   |  NA ZA%c%cTEK SCH., DOPROST%CED SCH.\n", CZ, AA, RZ);
	printf("| | |   ||  | |  |  |       ||   |___ |       ||   |___ | | |   ||  | |  |  BEZ SPEC. REKVIZIT\n");
	printf("|_|  |__||__| |__|  |_______||_______||_______||_______||_|  |__||__| |__|  \n \n");
	printf("REKVIZITY:%c%ctek na zav%cz%cn%c o%c%c, st%cl                                                     (             )  \n", sz, aa, aa, aa, ii, cz, ii, uk);
 	printf("PRAVIDLA:Jeden %clov%ck je myslivec, ostatn%c jsou jeleni. C%clem myslivce je dotykem chytit   `--(_   _)--'     \n", cz, ie, ii, ii);
	printf("a vy%cadit jeleny a jeleni se sna%c%c se mu vyhnout a z%cstat posledn%c. Jeleni i myslivci se        Y-Y          \n", rz, zs, ii, uk, ii);
    printf("mohou pohybovat pouze v lese, co%c je st%cl, kter%cho se mus%c v%cichni st%cle dot%ckat. Stolu        /@@ \\         \n",zs, uk, ee, ii, sz, aa, yy); 
    printf("se lid%c mohou dot%ckat pouze zeshora.                                                          /     \\          \n", ee, yy);
    printf("ALTERNATIVN%c PRAVIDLA:Zak%czat/povolit h%cb%cn%c stoly.                                           `--'.  \\             ,\n", II, aa, yy, aa, ii	);
    printf("                                                                                                   |   `.__________/)     \n");
	}

	else{
	printf("Toto ID neexistuje \n");
	}
}






// if(counter % 2 == 0){printf("          ");} else{printf("..........");}
