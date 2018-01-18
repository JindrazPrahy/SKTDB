#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

/*  čeština */
int aa=160;int cz=159;int ii=161;int uu=163;int ee=130;int ie=216;int rz=253;int uk=133;int oo=162;int sz=231;int tj=156;int zs=167 ;int yy= 236;int nj =229;int NJ = 213;
int II = 214; int AA=181;int EE=144;int TJ=155;int ZS=166;int IE=183;int SZ=230;int RZ=252;int CZ=428;



/*       TODO: - responsivní tagy u každé hry */
		/* Symboly pro filtry  */
	bool h=false; bool z=false; bool vyzv=false;
	bool beh = false; bool b=false; bool p=false; bool m=false; bool sp=false;
	bool ch=false; bool l=false;bool lk=false;bool kl=false; bool vlak =false;
	bool zsch=false; bool psch=false; bool ksch=false; bool vsch=false;
	bool bez=false; bool srek=false; bool nic=false;
	bool noc=false;


int filtr(int bypass); int c;
char nahled(char nahledinput[20]);

char input [20];

int main() {
/*Možnosti: */	 bool FAE= 1;


		/* Startup screen */
printf("      __/ ___ _    ___ _         _    __            ___ __     _/    _      ___      _   /   __ ___        _  _  \n");
printf("  \\  / |   | |_   | | |_   \\  / |_   (_  |/  /\\  | | | (_  |/ |_    | \\  /\\  |  /\\  |_)  /\\   /  |    |_| |_ |_) \n");
printf("   \\/ _|_  | |_ \\_| | |_    \\/  |_   __) |\\ /--\\ |_| | __) |\\ |_    |_/ /--\\ | /--\\ |_) /--\\ /_ _|_   | | |_ | \\ \n");
printf("\nTento program slou%c%c k pomoci s p%c%cpravou programu na             /\\       P%c%ckazy, kter%c m%c%cete zkusit: \n", zs, ii, rz, ii, rz, ii, ee, uk, zs);
printf("skautsk%c dru%cinovky %ci v%cpravy, jmenovit%c s p%c%cpravou            (  )      help --> n%cpov%cda      \n", ee, zs, cz, yy, ie, rz, ii, aa, ie);
printf("kr%ctk%cch her s r%czn%cm %c%celem. Obsahuje datab%czi her,          .--.\\/.--.   hry --> seznam v%cech her  \n", aa, yy, uk, yy, uu, cz, aa, sz);
printf("ve kter%c lze vyhled%cvat podle nejr%czn%cj%c%cch krit%cri%c.        (/`\\_\\/_/`\\)  filtr --> vyhled%cv%cn%c     \n", ee, aa, uk, ie, sz, ii, ee, ii, aa, aa, ii);
printf("Narozd%cl od v%ct%ciny jin%cch hern%ck%c se zde vyskytuj%c hry      '  {____}  '  #ID --> hashtag a %c%cslo zobraz%c hru\n", ii, ie, sz, yy, ii, uk, ii, cz, ii, ii);
printf("ozkou%cen%c, a tak se nemus%cte prob%crat haldou necht%cn%cch her.   ,_//\\\\_,    cisto --> vy%cist%c obrazovku\n", sz, ee, ii, ii, ie, yy, cz, ii);
printf("Program se ovl%cd%c psan%cm p%c%ckaz%c, my%c V%cm bohu%cel nepom%c%ce.     '-\\/-'          \n", aa, aa, ii, rz, ii, uk, sz, aa, zs, uk, zs);
printf("Zde pi%cte p%c%ckazy: \n", sz, rz, ii);


		/*Dostávání­ inputu od uživatele */
LOOP: scanf("%s", input);    int g;
while ( (g = getchar()) != EOF && g != '\n') { }
printf("Napsali jste: %s \n", input);

if(strcmp(input, "help") == 0 || strcmp(input, "pomoc") == 0){ 	/*nápověda*/
printf("Seznam p%c%ckaz%c:\n help  --> pomoc\n konec --> ukon%cit program\n hry   --> zobraz%c seznam v%cech her\n filtr --> vyhled%cv%cn%c \n cisto --> vy%cist%c obrazovku\n", rz, ii, uk, cz, ii, sz, aa, aa, ii, cz, ii);
printf("Zde pi%cte p%c%ckazy: \n", sz, rz, ii);
 goto LOOP;
} 
if(strcmp(input, "konec") == 0 || strcmp(input, "k") == 0 || strcmp(input, "exit") == 0|| strcmp(input, ":q") == 0){  /*ukončení­ programu*/
printf("	Nashledanou \n");
	goto END;
}
if(strcmp(input, "FML") == 0 || strcmp(input, "overwatch") == 0 ){ /*Lul dis */
printf(" -    -  -         -  -----------  \n");
printf("!-!  !-!!-!       !-!!-----------! \n");
printf("!-! !-! !-!       !-!!-----------  \n");
printf("!-!!-!  !-!       !-!!-!           \n");
printf("!-!-!   !-----------!!-----------  \n");
printf("!--!    !-----------!!-----------! \n");
printf("!-!-!    -----------  -----------! \n");
printf("!-!!-!       !-!               !-! \n");
printf("!-! !-!      !-!      -----------! \n");
printf("!-!  !-!     !-!     !-----------! \n");
printf("-    -       -       -----------  \n");
}

 if(strcmp(input, "clr")==0 || strcmp(input,"cisto")==0 || strcmp(input,"cisto") == 0){
printf("________________________________________________________________________________________________________________ \n");
printf("________________________________________________________________________________________________________________ \n");
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	goto LOOP;
	}

if(strcmp(input, "filtr") == 0 || strcmp(input, "fl") == 0){  /*odkaz na vyhledávací­ funkci */
	filtr(0);
	goto LOOP;
}
if(strcmp(input, "hry") == 0 || strcmp(input, "ls") == 0){  /*zobrazí­ seznam všech her */
	filtr(1);
	goto LOOP;
}

/* Zobrazování her podle ID */
if(strncmp(input,"#",1)==0){
   nahled(input);
	goto LOOP;
}
/* Zobrazování her podle názvu */
if(strcmp(input,"dementball")== 0 || (strcmp(input,"najelena")== 0 ) || (strcmp(input,"chaos")== 0 ) || strcmp(input,"indianskyfotbal") == 0 || (strcmp(input,"komar") == 0 ) || strcmp(input,"kikikokokeke") == 0  || strcmp(input,"maso") == 0 || strcmp(input,"talismanek") == 0 || strcmp(input,"kralmidoriyamy") ==0 || strcmp(input, "aliby") == 0 || strcmp(input,"improvizace") == 0 || strcmp(input,"fotbika") == 0 || strcmp(input,"komandohopsando") == 0 || strcmp(input,"elektrika") == 0 || strcmp(input,"cinkacka") == 0 || strcmp(input,"paserak") == 0 || strcmp(input,"evilmultitasking") == 0 || strcmp(input,"placacka") == 0 || strcmp(input,"tramvaj") == 0 || strcmp(input,"australskyfotbal") == 0 || strcmp(input,"csr") == 0) {
   nahled(input);
	goto LOOP;
}

if(strcmp(input,"autor") == 0 || strcmp(input, "author") == 0 ){    /* o autorovi  			18+10 */
printf("		    _____________________________ \n");
printf("		   |                             |\n");
printf("		   |    SKTDB 2.1    18. 1. 2018 | \n");
printf("		   |                             |\n");
printf("		   |       JIND%cICH DU%cEK        |\n", RZ, SZ);
printf("		   |_____________________________|\n \n");
}


else{  /* Když zadaj něco náhodnýho */
printf("Toto nen%c validn%c p%c%ckaz, zkuste to znovu\n", ii, ii, rz, ii);
printf("Zde pi%cte p%c%ckazy: \n", sz, rz, ii);
}
	goto LOOP;
	END : return 0;
}

int filtr(int bypass){ /* funkce na vytvoření filtrovaného seznamu    ZNAK FUNKCE FILTR */
	char temp[BUFSIZ];int mint = -1; int maxt = 120; int t; char input[6];

	/* ptací se fáze*/
	if(bypass == 0){
FILTROVANI:
printf("Zadejte va%ce po%cadovan%c vyhled%cvac%c krit%cria a potom 'hledat' (nebo help pro zobrazen%c mo%cn%cch krit%cri%c):\n", sz, zs, ee, aa, ii, ee, ii, zs, yy, ee, ii);
	scanf("%s", input);    int c; 			while ( (c = getchar()) != EOF && c != '\n') { }
		/*  Zadávání­ kritérií­  */
		/* normální­ kritéria */
		if(strcmp(input, "h") == false){ h=1; goto FILTROVANI;}else if(strcmp(input, "z") == false){ z=1; goto FILTROVANI;}else if(strcmp(input, "vyzv") == false){ vyzv=1; goto FILTROVANI;}
		else if(strcmp(input, "b") == false){ b=1; goto FILTROVANI;}else if(strcmp(input, "p") == false){ p=1; goto FILTROVANI;}else if(strcmp(input, "m") == false){ m=1; goto FILTROVANI;}else if(strcmp(input, "sp") == false){ sp=1; goto FILTROVANI;}
		else if(strcmp(input, "ch") == false){ ch=1; goto FILTROVANI;}else if(strcmp(input, "l") == false){ l=1; goto FILTROVANI;}else if(strcmp(input, "lk") == false){ lk=1; goto FILTROVANI;}else if(strcmp(input, "kl") == false){ kl=1; goto FILTROVANI;}else if(strcmp(input, "vlak") == false){ vlak=1; goto FILTROVANI;}
		else if(strcmp(input, "zsch") == false){ zsch=1; goto FILTROVANI;}else if(strcmp(input, "psch") == false){ psch=1; goto FILTROVANI;}else if(strcmp(input, "ksch") == false){ ksch=1; goto FILTROVANI;}else if(strcmp(input, "vsch") == false){ vsch=1; goto FILTROVANI;}
		else if(strcmp(input, "bez") == false){ bez=1; goto FILTROVANI;}else if(strcmp(input, "srek") == false){ srek=1; goto FILTROVANI;}else if(strcmp(input, "nic") == false){ nic=1; goto FILTROVANI;}
		else if(strcmp(input, "noc") == false){ noc=1; goto FILTROVANI;}

		/* ukončení */
		else if(strcmp(input, "konec") == 0 || strcmp(input, "k") == 0) {
printf("Zp%ct do hlavn%c nab%cdky \n", ie, ii, ii);
			goto BACK;
		}
		/*  čas */
		else if(strcmp(input, "cas") == 0 || strcmp(input, "čas") == 0){
printf("Zadejte minim%cln%c %cas v minut%cch:", aa, ii, cz, aa);
			if (fgets(temp, sizeof(temp), stdin) != NULL){
				mint = atoi(temp);
			}
printf("Zadejte maxim%cln%c %cas v minut%cch:", aa, ii, cz, aa);
			if (fgets(temp, sizeof(temp), stdin) != NULL){
				maxt = atoi(temp);
			}	goto FILTROVANI;
		}
		/* přibližný čas */
		else if(strcmp(input, "pčas") == 0 || strcmp(input,"pcas") == 0 ){
printf("Zadejte p%cibli%cn%c %cas hry v minut%cch:", rz, zs, yy, cz, aa);
			if (fgets(temp, sizeof(temp), stdin) != NULL){
			         mint = atoi(temp) - 5;
				 maxt = atoi(temp) + 5;
				 goto FILTROVANI;
			}  
		}

	/*  Ostatní příkazy  */
		if(strcmp(input, "konec") == 0 || strcmp(input, "k") == 0) {
printf("Zp%ct do hlavn%c nab%cdky \n", ie, ii, ii);
			goto BACK;
		}
		else if(strcmp(input, "help") == 0 || (strcmp(input, "ls") == 0)){
printf("Toto jsou dostupn%c krit%cria: \n", aa, ee);
printf("hry (h), z%cvody (z), v%czvy (vyzv)\n", aa, yy);
printf("vy%cerp%cvaj%cc%c - b%cha%cky (beh), brut%cln%c a n%cro%cn%c (b), p%cem%c%clec%c (m), pohodov%c (p), speci%cln%c (sp) \n", cz, aa, ii, ii, ie, cz, aa, ii, aa, cz, ee, rz, yy, sz, ii, ee, aa, ii);
printf("za pochodu (ch), do lesa (l), na louku nebo pl%ccek (lk), do m%cstnosti (kl), do vlaku (vlak)\n", aa, ii);
printf("na za%c%ctek sch%czky (zsch), doprost%ced sch%czky (psch), na konec sch%czky (ksch), na ven na sch%czce (vsch) \n", cz, aa, uk, rz, uk, uk, uk);
printf("bez speci%cln%cch rekvizit (bez), s rekvizitami (srek), bez %cehokoliv (nic) \n", aa, ii, cz);
printf("no%cn%c hry (noc) \n", cz, ii);
printf("doba trv%cn%c hry (cas) nebo jen p%c%cbli%cn%c (pcas)\n", aa, ii, rz, ii, zs, ie);
printf("PRO HLED%cN%c NAPI%cTE: hledat \n", AA, II, SZ);
printf("Zde pi%cte p%c%ckazy: \n", sz, rz, ii);
	  		goto FILTROVANI;
		}
		else if(strcmp(input, "hledat") == 0 || strcmp(input, "hl") == 0) {
			goto ZOBRAZ;
		}
		else{
printf("Toto nen%c validn%c p%c%ckaz, zkuste to znovu\n", ii, ii, rz, ii);
printf("Zde pi%cte p%c%ckazy: \n", sz, rz, ii);
				goto FILTROVANI;
		}
	}

	if(bypass ==1){ /* Zobrazí celý seznam  */
		bool h=1; bool z=1;bool vyzv=1; bool beh = 1; bool b=1;bool p=1;bool m=1;bool sp=1;bool ch=1;bool l=1;bool lk=1;bool kl=1;bool zsch=1;bool psch=1;bool ksch=1;bool vsch=1;bool vlak=1;bool bez=1; bool srek=1; bool nic=1;bool noc=1;

		goto ZOBRAZ;  // jsme připraveni zobrazit seznam her
	}




	/* Procesovací fáze */
	// deklarace proměnných všech her
bool dementball = false;      bool najelena = false;
bool chaos = false;           bool indball = false; 
bool komar = false;           bool kikikokokeke = false;
bool maso = false;            bool talismanek = false;
bool kralnidoriamy = false;   bool aliby = false;
bool impro = false;           bool fotbika = false;
bool komhops = false;         bool elektrika = false;
bool cink = false;            bool paserak = false;
bool evmul  = false;          bool placacka = false;
bool tramvaj = false;         bool ausfot = false;
bool csr = false;

ZOBRAZ: 
printf("________________________________________________________________________________________________________________ \n");
printf("________________________________________________________________________________________________________________ \n");
printf("		>>> SEZNAM ");
		if(b == true){
printf("BRUT%cLN%cCH ", AA, II);
		} 
		if(m == true){
printf("P%cEMÝ%cLEC%cCH ", RZ, SZ, II);
		} 
		if(p == true){
printf("POHODOVÝCH ");
		} 
		if(sp == true){
printf("SPECI%cLN%cCH ", AA, II);
		}
		if(noc == true){
printf("NO%cN%cCH ", CZ, II);
		} 
printf("HER ");
		if(beh == true){
printf(" \' B%cHA%cEK \'", IE, CZ);
		}
		if(ch == true){
printf("ZA POCHODU ");
		} 
		if(l == true){
printf("DO LESA ");
		} 
		if(lk == true){
printf("NA LOUKU ");
		} 
		if(kl == true){
printf("DO M%cSTNOSTI ", II);
		} 
		if(vlak == true){
printf("DO VLAKU ");
		}
		if(zsch == true){
printf("NA ZA%c%cTEK SCH. ", CZ, AA);
		} 
		if(psch == true){
printf("DOPROST%cED SCH. ", RZ);
		} 
		if(ksch == true){
printf("NA KONEC SCH. ");
		} 
		if(vsch == true){
printf("NA VEN NA SCH. ");
		}
		if(mint != -1){ 
printf("OD %dmin DO %dmin", mint, maxt);
		} 
printf("<<< \n");
		if(bez == true){
printf("BEZ SP. REKVIZIT ");
		} 
		if(srek == true){
printf("S REKVIZITAMI ");
		} 
		if(nic == true){
printf("NA KTER%c NIC NEPOT%cEBUJETE ", EE, RZ);
		}

	/* časový filtr, který nejdřív hodí­všechny hry s ok časem true */
	for (t = mint; t <= maxt; t++) {
	if ( (16 >= t) && (t >= 9 ) ){
		komar = true; najelena = true; kikikokokeke = true; dementball = true; maso = true; kralnidoriamy = true; fotbika = true; komhops = true; elektrika = true; cink = true; evmul = true; placacka = true; tramvaj = true; ausfot = true; csr = true;
	}
	if ( (31 >= t) && (t >= 9) ){
		 talismanek = true; indball = true; aliby = true; impro = true;
	}
	if (( 41 >= t) && (t >= 19 ) ){
		chaos = true; paserak = true;
	}
}
		/* V této fázi se vyhodí z filtru všechny hry, které nesplňují požadavky. */
	if(h == true){ /* hra */
           	  ;
      	}
	if(z == true){ /* závod */
		dementball = false; najelena=false; chaos =false;indball = false; kikikokokeke = false; aliby = false; kralnidoriamy = false;csr = false;
	}
	if(beh == true){ /* běhačka */
	dementball = false; najelena=false; chaos =false;indball = false;komar = false; kikikokokeke = false; aliby = false; impro = false; komhops = false; elektrika = false; cink = false; evmul = false; ausfot = false;csr = false;
	}
	if(vyzv == true){ /* výzva */
		dementball = false; najelena=false; chaos =false;indball = false;komar = false; kikikokokeke = false; maso = false; talismanek = false; aliby = false; kralnidoriamy = false; impro = false; fotbika = false; komhops = false; elektrika = false; cink = false; paserak = false; evmul = false; placacka = false; tramvaj = false; ausfot = false;csr = false;
	}
	if(b == true){/* brutální */
		dementball = false; najelena=false;indball = false;indball = false;komar = false; kikikokokeke = false; aliby = false; impro = false; fotbika = false; komhops = false; elektrika = false; cink = false; paserak = false; evmul = false; placacka = false; ausfot = false;csr = false;


	}
	if(p == true){/* pohodový */
		chaos =false;indball = false; kikikokokeke = false; maso = false; talismanek = false; kralnidoriamy = false; fotbika = false; elektrika = false; cink = false; paserak = false; evmul = false; tramvaj = false; ausfot = false;csr = false;

	}
	if(m == true){ /* přemýšlecí */
		dementball = false; najelena=false; chaos =false;indball = false;komar = false; kikikokokeke = false; maso = false; talismanek = false; kralnidoriamy = false; fotbika = false; elektrika = false; paserak = false; evmul = false; placacka = false; tramvaj = false; ausfot = false;
	}
	if(sp == true){ /* speciální  */
		dementball = false; najelena=false; chaos =false;indball = false;komar = false; kikikokokeke = false; maso = false; talismanek = false; kralnidoriamy = false; aliby = false; impro = false; fotbika = false; komhops = false; elektrika = false; cink = false; paserak = false; evmul = false; placacka = false; tramvaj = false; ausfot = false;
	}
	if(ch == true){ /* za pochodu */
		dementball = false; najelena=false; chaos =false;indball = false;komar = false; kikikokokeke = false; maso = false; talismanek = false; kralnidoriamy = false; aliby = false; impro = false; fotbika = false; komhops = false; elektrika = false; cink = false; paserak = false; evmul = false; placacka = false; tramvaj = false; ausfot = false;csr = false;

	}
	if(l == true){ /* do lesa */
		dementball = false; najelena=false; chaos =false;indball = false;komar = false; maso = false; talismanek = false; kralnidoriamy = false; aliby = false; impro = false; fotbika = false; komhops = false; elektrika = false; cink = false; evmul = false; placacka = false; tramvaj = false; ausfot = false;csr = false;
 
	}
	if(lk == true){ /* na louku */
		dementball = false; najelena=false; chaos =false;komar = false; talismanek = false; aliby = false; fotbika = false; komhops = false; elektrika = false; cink = false; evmul = false; placacka = false; tramvaj = false; ausfot = false;csr = false;

	}
	if(kl == true){ /* do místnosti */
		indball = false; kikikokokeke = false; talismanek = false; kralnidoriamy = false; paserak = false; evmul = false; placacka = false; tramvaj = false;
	}
	if(vlak == true){ /* ve vlaku */
		dementball = false; najelena=false; chaos =false;indball = false;komar = false; kikikokokeke = false; maso = false; talismanek = false; kralnidoriamy = false; impro = false; fotbika = false; komhops = false; elektrika = false; cink = false; paserak = false; evmul = false; placacka = false; tramvaj = false; ausfot = false;csr = false;

	} 
	if(zsch == true){ /* začátek schůzky */
		chaos =false;indball = false; kikikokokeke = false; aliby = false; kralnidoriamy = false; paserak = false; evmul = false; placacka = false; tramvaj = false;

	}
	if(psch == true){ /* doprostřed schůzky */
		 ;

	}
	if(ksch == true){ /* konec schůzky */
		dementball = false; najelena=false; chaos =false;indball = false; kikikokokeke = false; maso = false; talismanek = false; aliby = false; kralnidoriamy = false; paserak = false; evmul = false; placacka = false; tramvaj = false; ausfot = false;
	}
	if(vsch == true){ /* na ven na schůzku */
		dementball = false; chaos =false;komar = false; maso = false; aliby = false; impro = false; fotbika = false; komhops = false; elektrika = false; cink = false; ausfot = false;
	}
	if(bez == true){ /* bez speciálních rekvizit */
		dementball = false;indball = false;komar = false; maso = false; talismanek = false;csr = false;
	}
	if(srek == true){ /* s rekvizitami */
		najelena=false; chaos =false;komar = false; kikikokokeke = false; aliby = false; kralnidoriamy = false; impro = false; komhops = false; placacka = false;
	}
	if(nic == true){ /* bez ničeho */
		dementball = false; najelena = false;chaos=false;indball = false; maso = false; talismanek = false; fotbika = false; elektrika = false; cink = false; paserak = false; evmul = false; tramvaj = false; ausfot = false;

	}
	if(noc == true){ /*noční hry */
		dementball = false; najelena=false; chaos =false;indball = false;komar = false; kikikokokeke = false; maso = false; talismanek = false; aliby = false; kralnidoriamy = false; impro = false; fotbika = false; komhops = false; elektrika = false; cink = false; paserak = false; evmul = false; placacka = false; tramvaj = false; ausfot = false;csr = false;

	}




		/* Zobrazovací fáze (2 taby a mezera)*/
		int counter = 1;
    if(dementball == 1   ){ 
printf("%d",counter);
      if(counter<=9){
printf(".");
      }
printf("............#01-DEMENTBALL\n");
    counter++;
    }
    if(najelena == 1     ){ 
printf("%d",counter);
      if(counter<=9){
printf(".");
      }
printf("............#02-NA JELENA\n" );
    counter++;
    }
    if(chaos == 1        ){ 
printf("%d",counter);
      if(counter<=9){
printf(".");
      }
printf("............#03-CHAOS\n" );
    counter++;
    }
    if(indball == 1      ){ 
printf("%d",counter);
      if(counter<=9){
printf(".");
      }
printf("............#04-INDBALL\n" );
    counter++;
    }
    if(komar == 1        ){ 
printf("%d",counter);
      if(counter<=9){
printf(".");
      }
printf("............#05-KOM%cR\n" , AA);
    counter++;
    } 
    if(kikikokokeke == 1 ){ 
printf("%d",counter);
      if(counter<=9){
printf(".");
      }
printf("............#06-KIKIKOKOKEKE\n" );
    counter++;
    } 
    if(maso == 1         ){ 
printf("%d",counter);
      if(counter<=9){
printf(".");
      }
printf("............#07-MASO\n" );
    counter++;
    }
    if(talismanek == 1   ){ 
printf("%d",counter);
      if(counter<=9){
printf(".");
      }
printf("............#08-TALISM%cNEK\n" , AA);
    counter++;
    }
    if(kralnidoriamy == 1){ 
printf("%d",counter);
      if(counter<=9){
printf(".");
      }
printf("............#09-KR%cL MIDORIYAMY\n", AA);
    counter++;
    }
    if(aliby == 1        ){ 
printf("%d",counter);
      if(counter<=9){
printf(".");
      }
printf("............#10-ALIBY\n" );
    counter++;
    } 
    if(impro == 1        ){ 
printf("%d",counter);
      if(counter<=9){
printf(".");
      }
printf("............#11-IMPROVIZACE\n" );
    counter++;
    } 
    if(fotbika == 1      ){ 
printf("%d",counter);
      if(counter<=9){
printf(".");
      }
printf("............#12-FOTBIKA\n" );
    counter++;
    } 
    if(komhops == 1  ){ 
printf("%d",counter);
      if(counter<=9){
printf(".");
      }
printf("............#13-KOMANDO HOPSANDO\n" );
    counter++;
    } 
    if(elektrika == 1    ){ 
printf("%d",counter);
      if(counter<=9){
printf(".");
      }
printf("............#14-ELEKTRIKA\n" );
    counter++;
     } 
    if(cink == 1         ){ 
printf("%d",counter);
      if(counter<=9){
printf(".");
      }
printf("............#15-CINKA%cKA\n" , CZ);
    counter++;
    } 
    if(paserak == 1      ){ 
printf("%d",counter);
      if(counter<=9){
printf(".");
      }
printf("............#16-PA%cER%cK\n" , SZ, AA);
    counter++;
    } 
    if(evmul == 1    ){ 
printf("%d",counter);
      if(counter<=9){
printf(".");
      }
printf("............#17-EVIL MULTITASKING\n");
    counter++;
    } 
    if(placacka == 1     ){ 
printf("%d",counter);
      if(counter<=9){
printf(".");
      }
printf("............#18-PL%cCA%cKA\n" , AA, CZ);
    counter++;
    } 
    if(tramvaj == 1      ){ 
printf("%d",counter);
      if(counter<=9){
printf(".");
      }
printf("............#19-TRAMVAJ\n" );
    counter++;
    } 
    if(ausfot == 1       ){ 
printf("%d",counter);
      if(counter<=9){
printf(".");
      }
printf("............#20-AUSTRALSKÝ FOTBAL\n" );
    counter++;
    } 
    if(csr == 1          ){ 
printf("%d",counter);
      if(counter<=9){
printf(".");
      }
printf("............#21-OBSAZOV%cN%c %cESKA\n" , AA, II, CZ);
    counter++;
    } 
printf("Zde pi%cte p%c%ckazy: \n", sz, rz, ii);
		      BACK: return 0;
}
/* Zde jsou pouze zápisy her */

char nahled(char nahledinput[20]){
	if(strcmp(nahledinput,"#01")==0 || strncmp(nahledinput,"dementbal", 9)==0){ /* dementball */
printf("________________________________________________________________________________________________________________ \n");
printf("________________________________________________________________________________________________________________ \n");
printf("   _____                                        _   __               __   __ 	 	 \n");
printf(" |_   _`.         10 minut                    / |_[  |             [  | [  | 		 HRA\n");
printf("   | | `.\\  .---.  _ .--..--.  .---.  _ .--. `| |-'| |.--.   ,--.   | |  | | 		 POHODOV%c\n", AA);
printf("   | |  | |/ /__\\ [ `.-. .-. |/ /__\\\\[ `.-. | | |  | '/'`\\\\  '_\\ :  | |  | |		 DO M%cSTNOSTI\n", II);
printf("  _| |_.' /| \\__., | | | | | || \\__., | | | | | |, |  \\__/ |// | |, | |  | |  	NA ZA%c%cTEK SCH., DOPROST%cED SCH.\n", CZ, AA, RZ);
printf(" |______.'  '.__.'[___||__||__]'.__.'[___||__]\\__/[__;.__.' \\'-;__/[___][___] 	   	 S REKVIZITAMI\n \n");
printf("REKVIZITY: Tenis%ck, klubko vlny, nebo jin%c mal%c m%c%cek                ,-'''-,   ", aa, yy, yy, ii, cz);
printf("OMEZEN%c: -m%c%ce se lze dot%ckat  \n", II, ii, cz, yy);
printf("PRAVIDLA: Z%cklad je podobn%c jako vyb%cjen%c - c%clem je trefit         /\\     /\\  ", aa, yy, ii, ee, ii);
printf("jen jednou rukou najednou\n");
printf("ostatn%c m%c%cem a neb%ct s%cm trefen (kdo je trefen vypadl).            | |   | |  ", ii, ii, cz, yy, aa);
printf("-m%c%c se odpaluje JEN nadhozen%cm \n", ii, cz, ii);
printf("Je%cto se v%cak hra jmenuje Dementball, maj%c hr%c%ci ur%cit%c omezen%c.    \\/     \\/  ", zs, sz, ii, aa, cz, cz, ee, ii);
printf("jednou rukou a %cderem druhou \n", uu);
printf("Roleplay 'dement%c' je v%ct%cn. Kdo vyhraje, m%c titul vrchn%cho dementa. '-...-'", uk, ii, aa, aa, ii);
printf("-mus%cte se dot%ckat 3 kon%cetinami zem%c \n \n", ii, yy, cz, ie);
printf("ALTERNATIVN%c PRAVIDLA: M%c%cete podle pot%ceby zm%cnit omezen%c. Nap%c. je%ct%c hor%c%c omezen%c pohybu a odpalov%cn%c m%c%ce \npouze hlavou. \n", II, uk, zs, rz, ii, ii, rz, sz, ie, sz, ii, ii, aa, ii, ii, cz);
printf("POZN.: U n%cs celkem popul%crn%c hra. Je t%ceba hru urychlit, aby posledn%cch p%cr hr%c%c%c nebojovalo zbyte%cn%c dlouho a lidi \n", aa, aa, ii, rz, ii, aa, aa, cz, uk, cz, ie);
printf("se nenudili. Koment%c%c z role sportovn%cho koment%ctora m%c%ce b%ct vtipn%c. \n", aa, rz, ii, aa, uk, zs, yy, yy);
printf("Zde pi%cte p%c%ckazy: \n", sz, rz, ii);
	}

	else if(strcmp(nahledinput,"#02")==0 || strcmp(nahledinput,"najelena")==0){
	printf("________________________________________________________________________________________________________________ \n");printf("________________________________________________________________________________________________________________ \n");
printf(" __    _  _______        ___  _______  ___      _______  __    _  _______  \n");
printf("|  |  | ||   _   |      |   ||       ||   |    |       ||  |  | ||   _   |  HRA        \n");
printf("|   |_| ||  |_|  | 10   |   ||    ___||   |    |    ___||   |_| ||  |_|  |  POHODOV%c \n", AA);
printf("|       ||       |minut |   ||   |___ |   |    |   |___ |       ||       |  DO M%cSTNOSTI\n", II);
printf("|  _    ||   _   |   ___|   ||    ___||   |___ |    ___||  _    ||   _   |  NA ZA%c%cTEK SCH., DOPROST%cED SCH.\n" , CZ, AA, RZ);
printf("| | |   ||  | |  |  |       ||   |___ |       ||   |___ | | |   ||  | |  |  BEZ SPEC. REKVIZIT\n");
printf("|_|  |__||__| |__|  |_______||_______||_______||_______||_|  |__||__| |__|  \n \n");
printf("REKVIZITY:%c%ctek na zav%cz%cn%c o%c%c, st%cl                                                     (             )  \n", sz, aa, aa, aa, ii, cz, ii, uk);
printf("PRAVIDLA:Jeden %clov%ck je myslivec, ostatn%c jsou jeleni. C%clem myslivce je dotykem chytit   `--(_   _)--'     \n", cz, ie, ii, ii);
printf("a vy%cadit jeleny a jeleni se sna%c%c se mu vyhnout a z%cstat posledn%c. Jeleni i myslivci se        Y-Y          \n", rz, zs, ii, uk, ii);
printf("mohou pohybovat pouze v lese, co%c je st%cl, kter%cho se mus%c v%cichni st%cle dot%ckat. Stolu        /@@ \\         \n", zs, uk, ee, ii, sz, aa, yy);
printf("se lid%c mohou dot%ckat pouze zeshora.                                                          /     \\          \n", ee, yy);
printf("ALTERNATIVN%c PRAVIDLA: zak%czat/povolit h%cb%cn%c stoly.                                          `--'.  \\              ,\n", II, aa, yy, aa, ii);
printf("                                                                                                   |   `.__________/)     \n");
printf("Zde pi%cte p%c%ckazy: \n", sz, rz, ii);
	}

	else if(strcmp(nahledinput,"#03")==0 || strcmp(nahledinput,"chaos")==0){
printf("________________________________________________________________________________________________________________ \n");
printf("________________________________________________________________________________________________________________ \n");
printf("          _             _       _    _                   _            _                       \n");
printf("        /\\ \\           / /\\    / /\\ / /\\                /\\ \\         / /\\               HRA   \n");
printf("       /  \\ \\         / / /   / / // /  \\   30 min     /  \\ \\       / /  \\                N%cSILN%c    \n", AA, AA);
printf("      / /\\ \\ \\       / /_/   / / // / /\\ \\            / /\\ \\ \\     / / /\\ \\__         DO M%cSTNOSTI\n ", II);
printf("    / / /\\ \\ \\     / /\\ \\__/ / // / /\\ \\ \\          / / /\\ \\ \\   / / /\\ \\___\\    DOPROST%cED SCH.\n ", RZ);
printf("   / / /  \\ \\_\\   / /\\ \\___\\/ // / /  \\ \\ \\        / / /  \\ \\_\\  \\ \\ \\ \\/___/  BEZ SPEC. REKVIZIT\n");
printf("   / / /    \\/_/  / / /\\/___/ // / /___/ /\\ \\      / / /   / / /   \\ \\ \\                 \n");
printf("  / / /          / / /   / / // / /_____/ /\\ \\    / / /   / / /_    \\ \\ \\   ROLE:          \n");
printf(" / / /________  / / /   / / // /_________/\\ \\ \\  / / /___/ / //_/\\__/ / /  -Julie: zp%cv%c dojemn%c pod oknem  \n", ii, aa, ie);
printf("/ / /_________\\/ / /   / / // / /_       __\\ \\_\\/ / /____\\/ / \\ \\/___/ / -Romeo: sna%c%c se dostat k Julii           \n", zs, ii);
printf("\\/____________/\\/_/    \\/_/ \\_\\___\\     /____/_/\\/_________/   \\_____\\/  -Matka: br%cn%c Romeovi, aby se dostal k Julii\n", aa, ii);
printf("                                                                        -Den: sna%c%c se, aby bylo rozsv%cceno\n", zs, ii, ii);
printf("REKVIZITY:pap%crky s n%czvy rol%c a n%cco, z %ceho mohou hr%c%ci losovat (klobouk atd.) \n", ii, aa, ii, ie, cz, aa, cz);
printf("PRAVIDLA:Ze za%c%ctku se v%cem rozdaj%c role, kter%c budou plnit.  .( * .   -Noc: sna%c%c se, aby bylo zhasnuto\n", cz, aa, sz, ii, ee, zs, ii);
printf("Ujist%cte se, %ce v%cichni svoje role ch%cpou a potom    	   .*  .  ) .  ", ie, zs, sz, aa);
printf("-Antigrav. pras%ctko: sna%c%c se b%ct co nejv%c%c\n", aa, zs, ii, yy, yy, sz);
printf("m%c%cete hru odstartovat. C%clem ka%cd%cho je plnit sv%cj %ckol   . . POOF .* . ", uk, zs, ii, zs, ee, uk, uu);
printf("-Permon%ck: stav%c barik%cdu skrz klubovnu\n", ii, ii, aa);
printf("do konce %casov%cho limitu. Na konci ka%cd%cho kola ud%clejte    '* . (  .) ' ", cz, ee, zs, ee, ie);
printf("-Policista: udr%cuje po%c%cdek; nesnese barik%cdy \n", zs, rz, aa, aa);
printf("zhodnocen%c, kde ka%cd%c %cekne, kdo byl a jak mu to %clo. 	      ` ( . *   ", ii, zs, yy, rz, sz);
printf("-Komik: n%ckoho si vybere a vypr%cv%c mu vtipy \n", ie, aa, ii);
printf("Jeden %clov%ck m%c%ce m%ct i v%cce rol%c. Role se nesm%c nikomu %c%ckat.          dokud se nezasm%cje  \n", cz, ie, uk, zs, ii, ii, ii, ii, rz, ii, ie);
printf("POZN.: Lid%c se mohou p%c%cli%c v%c%ct do sv%c role. P%cipravte se proto       -D%ct%c: zlob%c a za ka%cdou cenu nesm%c dostat d%crek\n", ee, rz, ii, sz, zs, ii, ee, rz, ii, ie, ii, zs, ii, aa);
printf("na p%c%cpadn%c pranice. Tak%c si nechte po h%ce %cas na %cklid.              ", rz, ii, ee, ee, rz, cz, uu);
printf("-Santa: d%cv%c d%crky lidem a mus%c 1 d%ct i d%ct%cti\n", aa, aa, aa, ii, aa, ii, ie);
printf("Role m%c%cete rozd%cvat n%chodn%c, ale p%c%cpadn%c v%cb%cr trochu ovlivn%cte.    ", uk, zs, aa, aa, ie, rz, ii, ie, yy, ie, ie);
printf("-Kr%cl: rozkazuje lidem a oni ho mus%c poslechnout\n", aa, ii);
printf("P%ci h%ce se m%c%ce zni%cit nap%c. n%cbytek, dejte si na toto pozor.       ", rz, rz, uk, zs, cz, rz, aa);
printf("kdy%c neposlechnou, dohl%cdn%cte, aby ud%clali 10 klik%c\n", zs, ee, ie, ie, uk);
printf("Zde pi%cte p%c%ckazy: \n", sz, rz, ii);
	}
	else if(strcmp(nahledinput,"#04")==0 || strcmp(nahledinput,"indianskyfotbal")==0){
printf("________________________________________________________________________________________________________________ \n");
printf("________________________________________________________________________________________________________________ \n");
printf("    ___        ___   __          __     __   ___     __  __        __ \n");
printf("   / _/__  ___/ (_)_/_/___  ___ / /____/_/  / _/__  / /_/ /  ___ _/ / \n");
printf(" _/ // _ \\/ _  / / _ `/ _ \\(_-</  '_/ // / / _/ _ \\/ __/ _ \\/ _ `/ /  \n");
printf("/___/_//_/\\_,_/_/\\_,_/_//_/___/_/\\_\\\\_, / /_/ \\___/\\__/_.__/\\_,_/_/  \n");
printf("                                  /___/                                 \n\n");
printf("REKVIZITY: Provaz, dva lehce uchopiteln%c p%cedm%cty (petangov%c koule, fla%cky s vodou atp.)\n", ee, rz, ie, ee, sz);
printf("PRAVIDLA: Hr%c%ci se rozd%cl%c do dvou stejn%c po%cetn%cch t%cm%c. P%cipravte hrac%c pole, ", aa, cz, ie, ii, ie, cz, yy, yy, uk, rz, ii);
printf("kter%c je vytvo%ceno\n ze dvou pol%c odd%clen%cch lanem. Do ka%cd%cho s pol%c polo%cte na zem ", ee, rz, ii, ie, yy, zs, ee, ii, zs);
printf("ve vzd%clenosti cca. 20 krok%c lehce\n uchopiteln%c p%cedm%ct (tj. lahev s vodou,  klacek v zemi, ", aa, uk, yy, rz, ie);
printf("petangov%c koule...). C%clem ka%cd%cho z t%cm%c\n je uchopit p%cedm%ct prothr%c%csk%cho t%cmu. Pokud se ", aa, ii, zs, ee, yy, uk, rz, ie, aa, cz, ee, yy);
printf("toto n%ckter%cmu z t%cm%c povede, ukon%c%c se kolo, t%cm\n dostane bod a v%ce se vr%ct%c zp%ct do p%cvodn%cho stavu. ", ie, ee, yy, uk, cz, ii, yy, sz, aa, ii, ie, uk, ii);
printf("Proti sebr%cn%c p%cedm%ctu se t%cm m%c%ce br%cnit tak,\n %ce pokud se n%ckter%c z hr%c%c%c nach%cz%c na poli ciz%cho t%cmu, ", aa, ii, rz, ie, yy, uk, zs, aa, zs, ie, yy, aa, cz, uk, aa, ii, ii, yy);
printf("m%c%ce ho druh%c t%cm zmrazit dotykem. %clov%ck,\n kter%cho zmrazili, se nesm%c h%cbat dokud ho nerozmraz%c dotyk hr%c%ce ze sv%cho t%cmu. \n", uk, zs, yy, yy, CZ, ie, ee, ii, yy, ii, aa, cz, ee, yy);
printf("DODATE%cN%c PRAVIDLA: Pokud se dva nebo v%cce lid%c dot%ckaj%c, zmra%ceni jsou v%cichni, pokud ", CZ, AA, ii, ii, yy, ii, zs, sz);
printf("se nep%c%ctel\n dotkne byť jen jednoho z nich. \n Pokud se dva lidi dotknou a jsou oba na ", rz, ii);
printf("sv%c polovin%c, vym%cn%c si m%csta a jsou oba zmra%ceni\n (toto pravidlo nemus%cte vyu%c%ct).\n", ee, ie, ie, ii, ii, zs, ii, zs, ii);
printf("ALTERNATIVN%c PRAVIDLA: Odmrazuje se podlezen%cm nohou (jako v mraz%ckovi) a ne dotykem.\n", II, ii, ii);
printf("Zde pi%cte p%c%ckazy: \n", sz, rz, ii);
	}
	else if(strcmp(nahledinput,"#05")==0 || strcmp(nahledinput,"komar")==0 || strcmp(nahledinput,"komar")==0){
printf("________________________________________________________________________________________________________________ \n");
printf("________________________________________________________________________________________________________________ \n");
printf("\t    __ __                  __                 \\__/   _O/                 \n");
printf("\t   / //_/___  ____ ___  __/_/______           (o-)     \\                       \n");
printf("\t  / ,< / __ \\/ __ `__ \\/ __ `/ ___/          //||\\\\    /\\_         \\__/       \n");
printf("\t / /| / /_/ / / / / / / /_/ / /                        \\  `        (@@)         \n");
printf("\t/_/ |_\\____/_/ /_/ /_/\\__,_/_/                         `          //||\\\\          \n\n");
printf("REKVIZITY: Stoli%cka, %c%ctek na zav%cz%cn%c o%c%c, mikina na vytvo%cen%c palc%ctu\n", cz, sz, aa, aa, aa, ii, cz, ii, rz, ii, aa);
printf("PRAVIDLA: Ur%c%c se jeden hr%c%c, jeho%c %ckol se stane reprezentovat %clov%cka. Ostatn%c lid%c reprezentuj%c\n ", cz, ii, aa, cz, zs, uu, cz, ie, ii, ee, ii);
printf("kom%cry. %clov%ck si sedne na stoli%cku doprost%ced m%cstnosti, do ruky dostane zav%czanou mikinu %ci %c%ctek,\n ", aa, CZ, ie, cz, rz, ii, aa, cz, sz, aa);
printf("kter%cm lze bezbolestn%c ml%ctit (tzn.  noviny) a zav%c%ce si o%ci. Úkolem kom%cr%c se stane vys%cvat krev\n ", yy, ie, aa, aa, zs, cz, aa, uk, aa);
printf("%clov%cku. To provedou tak, %ce se ho dotknou a pot%c se dotknou st%cny (t%cm z%cskaj%c bod). %clov%ck se v%cak\n ", cz, ie, zs, ee, ie, ii, ii, ii, CZ, ie, sz);
printf("oh%cn%c novinami a pokud n%cjak%cho kom%cra zas%chne, je do konce kola vy%cazen. C%clem kom%cr%c je\n ", aa, ii, ie, ee, aa, aa, rz, ii, aa, uk);
printf("dostat co nejv%cce bod%c a c%clem %clov%cka je sejmout v%cechny kom%cry.\n", ii, uk, ii, cz, ie, sz, aa);
printf("DODATE%cN%c PRAVIDLA: Kom%c%ci nemohou um%c%ct, pokud nemaj%c %c%cdn%c body.\n", CZ, AA, aa, rz, rz, ii, ii, zs, aa, ee);
printf("Zde pi%cte p%c%ckazy: \n", sz, rz, ii);
	}
	
	else if( strcmp(nahledinput,"#06") == 0 || strcmp(nahledinput,"kikikokokeke")==0  ){ /* KIKIKOKOKEKE */	
printf("________________________________________________________________________________________________________________ \n");
printf("________________________________________________________________________________________________________________ \n");
printf("    __ __ _ __   _ __         __         __        __     \n");
printf("   / //_/(_) /__(_) /______  / /______  / /_____  / /_____ \n");
printf("  / ,<  / / //_/ / //_/ __ \\/ //_/ __ \\/ //_/ _ \\/ //_/ _ \\ \n");
printf(" / /| |/ / ,< / / ,< / /_/ / ,< / /_/ / ,< /  __/ ,< /  __/  \n");
printf("/_/ |_/_/_/|_/_/_/|_|\\____/_/|_|\\____/_/|_|\\___/_/|_|\\___/  \n\n");
printf("REKVIZITY: -\n");
printf("PRAVIDLA: Hr%c%ci se rozd%cl%c na t%ci t%cmy: KI, KO a KE. Ka%cd%c z t%cm%c mus%c po celou dobu %c%ckat jm%cno t%cmu,\n ", aa, cz, ie, ii, rz, yy, zs, yy, yy, uk, ii, rz, ii, ee, yy);
printf("ve kter%cm pr%cv%c je. N%csledn%c se hr%c%ci sna%c%c chytit hr%c%ce jin%cch t%cm%c, proti kter%cm jsou siln%c, \n", ee, aa, ie, aa, ie, aa, cz, zs, ii, aa, cz, yy, yy, uk, yy, ii);
printf("a t%cm je konvertovat do sv%cho t%cmu. Plat%c, %ce KI jsou siln%c proti KO, KO proti KE a KE proti KI.\n ", ii, ee, yy, ii, zs, ii);
printf("Vyhrajou ti, kte%c%c skon%c%c a jsou co nejm%cn%ckr%ct konvertov%cni.\n", rz, ii, cz, ii, ee, ie, aa, aa);
printf("Zde pi%cte p%c%ckazy: \n", sz, rz, ii);
	}
        else if( strcmp(nahledinput,"#07") == 0 || strcmp(nahledinput,"maso")==0  ){ 
printf("________________________________________________________________________________________________________________ \n");
printf("________________________________________________________________________________________________________________ \n");
printf("\t  O))       O))                           \n");
printf("\t  O) O))   O)))                           \n");
printf("\t  O)) O)) O O))   O))     O))))    O))    \n");
printf("\t  O))  O))  O)) O))  O)) O))     O))  O)) \n");
printf("\t  O))   O)  O))O))   O))   O))) O))    O))\n");
printf("\t  O))       O))O))   O))     O)) O))  O)) \n");
printf("\t  O))       O))  O)) O)))O)) O))   O))    \n");
printf("REKVIZITY: tenis%ck\n", aa);
printf("PRAVIDLA: Zd%crazn%cte, %ce v t%cto h%ce hraje ka%cd%c s%cm za sebe. Ur%cete jeden p%cedm%ct, nap%c. tenis%ck, \n", uk, ie, zs, ee, rz, zs, yy, aa, cz, rz, ie, rz, aa);
printf("kter%c se stane %cst%cedn%cm p%cedm%ctem hry. Hr%c%ci se po zah%cjen%c hry - vhozen%c tenis%cku do davu - sna%c%c\n ", yy, uu, rz, ii, rz, ie, aa, cz, aa, ii, ii, aa, zs, ii);
printf("p%cevz%ct kontrolu nad tenis%ckem a dotknout se j%cm dve%c%c (nebo jin%cho ur%cen%cho objektu).\n ", rz, ii, aa, ii, rz, ii, ee, cz, ee);
printf("H%c%cek spo%c%cv%c v tom, %ce ka%cd%c se o to pokou%c%c s%cm za sebe, a tak nastane p%ckn%c mela.\n", aa, cz, cz, ii, aa, zs, zs, yy, sz, ii, aa, ie, aa);
printf("Zde pi%cte p%c%ckazy: \n", sz, rz, ii);
	}
        else if( strcmp(nahledinput,"#08") == 0 || strcmp(nahledinput,"talismánek")==0  ){ 
printf("________________________________________________________________________________________________________________ \n");
printf("________________________________________________________________________________________________________________ \n");
printf("TTTTTTT         lll iii                       aa                 kk    \n");
printf("  TTT     aa aa lll      sss  mm mm mmmm    aa aa nn nnn    eee  kk  kk\n");
printf("  TTT    aa aaa lll iii s     mmm  mm  mm  aa aaa nnn  nn ee   e kkkkk \n");
printf("  TTT   aa  aaa lll iii  sss  mmm  mm  mm aa  aaa nn   nn eeeee  kk kk \n");
printf("  TTT    aaa aa lll iii     s mmm  mm  mm  aaa aa nn   nn  eeeee kk  kk\n");
printf("                         sss                                            \n\n");
printf("REKVIZITY: t%c%ck%c velk%c p%cedm%ct (ide%cln%c s obl%cmi stranami, aby se %clov%ck nezranil) -- t%ceba kl%cda\n", ie, zs, yy, yy, rz, ie, aa, ie, yy, cz, ie, rz, aa);
printf("PRAVIDLA: Rozd%clte hr%c%ce do minim%cln%c t%c%c stejn%c po%cetn%cch t%cm%c. Doprost%ced hern%cho pole polo%cte\n ", ie, aa, cz, aa, ie, rz, ii, ie, cz, yy, yy, uk, rz, ii, zs);
printf("\'talism%cnek\' v podob%c velk%c kl%cdy, %ci jin%cho t%c%ck%cho p%cedm%ctu. N%csledn%c rozd%clte ka%cd%cmu t%cmu\n ", aa, ie, ee, aa, cz, ee, ie, zs, ee, rz, ie, aa, ie, ie, zs, ee, yy);
printf("stanovi%ct%c stejn%c daleko od talism%cnku. C%clem ka%cd%cho t%cmu je dostat talism%cnek do sv%cho stanovi%ct%c.\n ", sz, ie, ie, aa, ii, zs, ee, yy, aa, ee, sz, ie);
printf("Na h%ce lze skv%cle demonstrovat princip superpozice.\n", rz, ie);
printf("Zde pi%cte p%c%ckazy: \n", sz, rz, ii);
	}
	else if( strcmp(nahledinput,"#09") == 0 || strcmp(nahledinput,"králmidoriyamy") == 0 ){
printf("________________________________________________________________________________________________________________ \n");
printf("________________________________________________________________________________________________________________ \n");
printf("    __ __        __  __   __  ____     __           _                            \n");
printf("   / //_/_______/_/_/ /  /  |/  (_)___/ /___  _____(_)_  ______ _____ ___  __  __\n");
printf("  / ,<  / ___/ __ `/ /  / /|_/ / / __  / __ \\/ ___/ / / / / __ `/ __ `__ \\/ / / /\n");
printf(" / /| |/ /  / /_/ / /  / /  / / / /_/ / /_/ / /  / / /_/ / /_/ / / / / / / /_/ / \n");
printf("/_/ |_/_/   \\__,_/_/  /_/  /_/_/\\__,_/\\____/_/  /_/\\__, /\\__,_/_/ /_/ /_/\\__, /  \n");
printf("                                                  /____/                /____/   \n\n");
printf("REKVIZITY: -\n");
printf("PRAVIDLA: Ur%cete n%cjak%c hrac%c pole, jako nap%c. louka. Pot%c rozd%clte hr%c%ce do n%ckolika t%cm%c. \n ", cz, ie, ee, ii, rz, ee, ie, aa, cz, ie, yy, uk);
printf("Hra prob%ch%c tak, %ce hr%c%ci r%czn%c chod%c po louce a sna%c%c se navz%cjem zaleh%cvat. V%ct%cz%c pot%c t%cm, \n ", ii, aa, zs, aa, cz, uk, ie, ii, zs, ii, aa, aa, ii, ie, ii, ee, yy);
printf("kter%c m%c na konci p%cedem stanoven%cho %casov%cho limitu nejv%cce lid%c na vr%cku hromad. \n ", yy, aa, rz, ee, cz, ee, ii, ii, sz);
printf("Za ka%cdou hromadu zalehl%cch lid%c tedy dostane bod pouze ten t%cm, kter%c m%c n%ckoho na vrchu. \n ", zs, yy, ii, yy, yy, aa, ie);
printf("V%ct%czem se stane t%cm s nejv%cce body po n%ckolika kolech.\n", ii, ie, yy, ii, ie);
printf("Zde pi%cte p%c%ckazy: \n", sz, rz, ii);
	}
      	else if( strcmp(nahledinput,"#10") == 0 || strcmp(nahledinput,"aliby") == 0 ){
printf("________________________________________________________________________________________________________________ \n");
printf("________________________________________________________________________________________________________________ \n");
printf("\t   ___,   _     _          \n");
printf("\t  /   |  | | o | |         \n");
printf("\t |    |  | |   | |         \n");
printf("\t |    |  |/  | |/ \\_|   |  \n");
printf("\t  \\__/\\_/|__/|_/\\_/  \\_/|/ \n");
printf("\t                       /|  \n");
                
printf("REKVIZITY: %cidle na usazen%c vy \\| sl%cchan%cch\n", zs, ii, yy, yy);
printf("PRAVIDLA: Vyberte dva hr%c%ce, kte%c%c se odeberou z doslechu ostatn%cch (t%ceba za dve%ce). Maj%c za %ckol se\n ", aa, cz, rz, ii, ii, rz, rz, ii, uu);
printf("domluvit si spole%cn%c aliby. Pot%c zbytek hr%c%c%c po jednom oba vybran%c p%cedvol%c a na%ckne je z n%cjak%cho\n ", cz, ee, ee, aa, cz, uk, ee, rz, aa, rz, ie, ee);
printf("trestn%cho %cinu (nap%c. vra%cda rychlovarnou konvic%c). Vybran%cm se pak kladou ot%czky a sleduje se, jak\n ", ee, cz, rz, zs, ii, yy, aa);
printf("odpov%cdaj%c. C%clem dvou dobrovoln%ck%c je, aby jejich v%cpov%cdi byly co nejv%cce identick%c a sv%cd%cili\n ", ii, ii, ii, ii, uk, yy, ie, ii, ee, ie, cz);
printf("o jejich nevin%c. Ostatn%c se sna%c%c je usv%cd%cit.\n", ie, ii, zs, ii, ie, cz);
printf("ALTERNATIVN%c PRAVIDLA: Oba vybran%c se dohodnou, %ce budou popisovat v%ckend/dovolenou jednoho z nich\n ", II, ii, zs, ii);
printf("a ostatn%c h%cdaj%c, kdo ten v%ckend za%cil. \n", ii, aa, ii, ii, zs);
printf("Zde pi%cte p%c%ckazy: \n", sz, rz, ii);
	}
	  else if( strcmp(nahledinput,"#11") == 0 || strcmp(nahledinput,"improvizace") == 0 ){
printf("________________________________________________________________________________________________________________ \n");
printf("________________________________________________________________________________________________________________ \n");
printf(" ____, _____,   ___, ___,   ____, __  _, ____, ___,  ___,   ____   ____,\n");
printf("(-|   (-| | |  (-|_)(-|_)  (-/  \\(-\\ |  (-|   (- /  (-|_\\_,(-/  ` (-|_, \n");
printf(" _|__, _| | |_, _|   _| \\_,  \\__/   \\|   _|__, ,/__, _|  )   \\___, _|__,\n");
printf("(     (        (    (                   (           (             (     \n\n");
printf("REKVIZITY: -\n");
printf("PRAVIDLA: C%clem t%cto hry je, aby skupina lid%c bez jak%ckoliv p%cedchoz%c domluvy nebo pom%ccek\n", ii, ee, ii, ee, rz, ii, uk);
printf("sehr%cla kr%ctk%c sc%cnky. To se m%c%ce zd%ct n%cro%cn%c, ale sc%cnky stejn%c v%ct%cinou nemaj%c %c%cdnou %crove%c\n", aa, aa, ee, ee, uk, zs, aa, aa, cz, ee, ee, ie, ie, sz, ii, zs, aa, uu, nj);
printf("a vtip hry spo%c%cv%c v tom, jak%c blbost koho napadne. Zde je seznam hern%cch m%cd%c, podle kter%cch se\n", cz, ii, aa, aa, ii, oo, uk, yy);
printf("daj%c sehr%ct sc%cnky:\n", ii, aa, ee);
printf("NA CO SI D%cT POZOR: Herci mus%c b%ct %celem k publiku. M%cli by tak%c mluvit nahlas a p%ceh%cn%ct sv%c gesta.\n", AA, ii, yy, cz, ie, ee, rz, aa, ie, aa);
printf("Tak%c dejte pozor, aby se do hry zapojil ka%cd%c a zkuste motivovat introvertn%cj%c%c hr%c%ce.\n", ee, zs, yy, ie, sz, ii, aa, cz);
printf("ALTERNATIVN%c PRAVIDLA: \n", II);
printf("\t -VYVOL%cVAC%c IMPROVIZACE: Na sc%cn%c je cca. p%cti%clenn%c t%cm, kter%cmu se zad%c hern%c\n t%cma", AA, II, ee, ie, ie, cz, yy, yy, ee, aa, ii, ee);
printf("(nap%c. %cernobyl, p%ct minut p%ced v%cbuchem). Ka%cd%c z hr%c%c%c si pak vezme kl%c%cov%c slovo, kter%c\n", rz, CZ, ie, rz, yy, zs, yy, aa, cz, uk, ii, cz, ee, ee);
printf("se vztahuje k t%cmatu, ale kter%c NEZTV%cR%cUJE ve h%ce. N%ckdo by si t%ceba mohl vz%ct slovo\n", ee, ee, AA, NJ, rz, ie, rz, ii);
printf("ukl%cze%cka, ale nehr%cl by ukl%cze%cku. Hra za%cne jedn%cm hr%c%cem na sc%cnce, kter%c si mus%c vymyslet\n", ii, cz, aa, ii, cz, cz, ii, aa, cz, ee, yy, ii);
printf("kdo je a co d%cl%c. Pokud n%ckter%c hr%c%c na sc%cn%c %cekne n%cjak%c kl%c%cov%c slovo, mus%c ten hr%c%c, koho\n", ie, aa, ie, yy, aa, cz, ee, ie, rz, ie, ee, ii, cz, ee, ii, aa, cz);
printf("je, vstoupit na sc%cnu a vymyslet si pro to d%cvod a %c%cct ho. Pokud je naopak zm%cn%cno kl%c%cov%c\n", ee, uk, rz, ii, ii, ie, ii, cz, ee);
printf("slovo hr%c%ce na sc%cn%c, mus%c ten hr%c%c odej%ct a op%ct pro to vymyslet d%cvod a %c%cct ho. Sc%cnka\n", aa, cz, ee, ie, ii, aa, cz, ii, ie, uk, rz, ii, ee);
printf("kon%c%c t%cm, %ce jeden %clov%ck odch%cz%c a p%ci odchodu %cekne jm%cno druh%cho a odejdou oba.\n", cz, ii, ii, zs, cz, ie, aa, ii, rz, rz, ee, ee);
printf("\t -TLESKAC%c IMPROVIZACE: Na sc%cn%c za%cnou dva lid%c rozehr%cvat sc%cnku a zbyl%c sed%c\n", II, ee, ie, cz, ee, aa, ee, ii, ii);
printf("jako publikum. Kdokoliv z publika n%csledn%c m%c%ce tlesknout, sc%cnku zastavit (herci se zmraz%c)\n", aa, ie, uk, zs, ee, ii);
printf("a nahradit jednoho z herc%c (toho, kter%c je tam d%cle). Mus%c v%cak rozehr%ct kompletn%c jinou sc%cnku\n", uk, yy, ee, ii, sz, aa, ie, ee);
printf("a zaujmout kompletn%c jinou roli. Pozn.: m%c%ce se hodit pravidlo, %ce se sc%cnka mus%c nechat rozehr%ct\n", ie, uk, zs, zs, ee, ii, aa);
printf("alespo%c n%cjak%c %cas, ať po%c%cd v%cichni netleskaj%c a je vid%ct smysl sc%cnky.\n" , nj, ie, yy, cz, rz, aa, sz, ii, ie, ee);
printf("\t -%cASOV%c IMPROVIZACE: Dva lid%c mus%c sehr%ct tu samou sc%cnku, kterou poprv%c\n", CZ, AA, ee, ii, aa, ee, ee);
printf("improvizuj%c (t%cma se jim zad%c) za minutu, p%cl minuty, deset sekund, p%ct sekund a sekundu.\n", ii, ee, aa, uk, ie);
printf("Na konci sc%cnky mus%c pr%cv%c jeden z nich zem%c%ct.\n", ee, ii, aa, ie, rz, ii);
printf("\t -B%cSE%c: Herci si sednou vedle sebe na stoli%cky a popo%cad%c %c%ck%c ka%cd%c jedno slovo.\n", AA, NJ, cz, rz, ie, rz, ii, aa, zs, yy);
printf("Jejich c%clem je vytvo%cit b%cse%c, nebo p%c%cb%ch (vyberte p%cedem).\n", ii, rz, aa, nj, rz, ii, ie, rz);
printf("\t -SK%c%c%c: Vybere se jeden %clov%ck, kter%c p%cedst%cr%c, %ce otev%ce sk%c%c%c a vyt%chne\n", RZ, II, NJ, cz, ie, yy, rz, ii, aa, zs, rz, rz, ii, nj, aa);
printf("z n%c p%cedm%ct, kter%c by cht%cl. N%csledn%c mus%c ten p%cedm%ct p%cedv%cst pantomimou a publikum se ho\n", ii, rz, ie, yy, ie, aa, ie, ii, rz, ie, rz, ee);
printf("sna%c%c uhodnout. Kdo ho uhodl, vytahuje ze sk%c%cn%c p%c%c%ct%c. \n", zs, ii, rz, ii, ie, rz, ii, sz, ie);
printf("\t -P%cEB%cJEC%c IMPROVIZACE: Jeden %clov%ck za%cne v poli t%cm, %ce n%cco p%cedvede", RZ, II, II, cz, ie, cz, ii, zs, ie, rz);
printf("(nap%c. \nsk%c%c%c, auto, zeď...). N%csledn%c dobrovoln%ck z publika tleskne a na jevi%cti p%cedvede n%cco,", rz, rz, ii, nj, aa, ie, ii, sz, rz, ie);
printf("co to\np%cebije. Potom dal%c%c dobrovoln%ck tleskne a p%cebije to... Takto se vytvo%c%c kask%cda p%ceb%cjec%cch reakc%c.\n ", rz, sz, ii, ii, rz, rz, ii, aa, rz, ii, ii, ii);
printf("\t -REKLAMACE: Dva lid%c se v%cij%c do role prodejc%c a jin%c dva do role\n", ee, zs, ii, uk, ii);
printf("nespokojen%cch z%ckazn%ck%c, kte%c%c p%ci%cli reklamovat sv%c zbo%c%c. H%c%cek se schov%cv%c v tom,\n", yy, aa, ii, uk, rz, ii, rz, sz, ee, zs, ii, aa, cz, aa, aa);
printf("%ce reklamovan%c v%cc se ur%c%c dohromady v publiku a ti, kte%c%c reklamuj%c ji neznaj%c. Jejich %ckolem je\n", zs, aa, ie, cz, ii, rz, ii, ii, ii, uu);
printf("tedy p%cij%ct na to, co reklamuj%c, ale st%cle dodr%covat roli toho, %ce jsou v obchodu a jsou na%ctvan%c\n", rz, ii, ii, aa, zs, zs, sz, yy);
printf("z%cklazn%ck. Hra kon%c%c, jakmile reklamuj%cc%c uhodnou reklamovanou v%cc.\n", aa, ii, cz, ii, ii, ii, ie);
printf("Zde pi%cte p%c%ckazy: \n", sz, rz, ii);
	}

	  else if( strcmp(nahledinput,"#12") == 0 || strcmp(nahledinput,"fotbika") == 0 ){
printf("________________________________________________________________________________________________________________ \n");
printf("________________________________________________________________________________________________________________ \n");
printf("\t _______  _____  _______ ______  _____ _     _ _______\n");
printf("\t |______ |     |    |    |_____]   |   |____/  |_____|\n");
printf("\t |       |_____|    |    |_____] __|__ |    \\_ |     |\n\n");
printf("REKVIZITY: tenis%ck, m%cstnost\n", aa, ii);
printf("PRAVIDLA: Hra se hraje jako vyb%cjen%c akor%ct s t%cm rozd%clem, %ce m%c%cek je tenis%ck\n", ii, aa, aa, ii, ii, zs, ii, cz, aa);
printf("a sm%c se pouze kopat. Vybij%c se pak pouze v prostoru od chodidel do kolen (v%cetn%c).\n", ii, ii, cz, ie);
printf("U%c je jen na V%cs, jestli vybika bude vracec%c a jestli povol%cte chyt%cn%c m%c%cku nohou tak,\n", zs, aa, ii, ii, aa, ii, ii, cz);
printf("%ce ho %clov%ck jednozna%cn%c za%cl%cpne.\n", zs, cz, ie, cz, ie, sz, aa);
printf("ALTERNATIVN%c PRAVIDLA:\n", II);
printf("FOTBIKA MASAKR 100 %% EXTREME MILIÓN: Hraje se jako norm%cln%c fotbika s t%cm rozd%clem,\n", aa, ii, ii, ii);
printf("%ce hr%c%ci mus%c sk%ckat po jedn%c noze. \n", zs, aa, cz, ii, aa, ee);
printf("Zde pi%cte p%c%ckazy: \n", sz, rz, ii);
	}
 
	  else if( strcmp(nahledinput,"#13") == 0 || strcmp(nahledinput,"komandohopsando") == 0 ){
printf("________________________________________________________________________________________________________________ \n");
printf("________________________________________________________________________________________________________________ \n");
printf(" _ __                         _         _                              _      \n");
printf("| / / ___ ._ _ _  ___ ._ _  _| | ___   | |_  ___  ___  ___ ___ ._ _  _| | ___ \n");
printf("|  \\ / . \\| ' ' |<_> || ' |/ . |/ . \\  | . |/ . \\| . \\<_-<<_> || ' |/ . |/ . \\ \n");
printf("|_\\_\\\\___/|_|_|_|<___||_|_|\\___|\\___/  |_|_|\\___/|  _//__/<___||_|_|\\___|\\___/\n");
printf("                                                 |_|                          \n\n");
printf("PRAVIDLA: Hra se hraje tak, %ce v%cichni sed%c u stolu. Princip hry se podob%c h%ce Simon says,\n", zs, sz, ii, aa, rz);
printf("co%c znamen%c, %ce se ur%c%c jeden game master, kter%c diktuje ostatn%cm, jakou polohu rukou vzhledem\n", zs, aa, zs, cz, ii, yy, ii);
printf("ke stolu maj%c m%ct, av%cak ostatn%c to maj%c prov%cst jen pokud p%ced t%cm %cekne KOMANDO. Ve h%ce\n", ii, ii, sz, ii, ii, ee, rz, ii, rz, rz);
printf("jsou t%ci polohy rukou:\n", rz);
printf("\t -HOPSANDO: hr%c%ci maj%c ruce ve tvaru pistole a ťukaj%c do stolu \n", aa, cz, ii, ii);
printf("\t -DUTO: hr%c%ci se dot%ckaj%c stolu %cpi%ckami prst%c av%cak ne dlan%cmi \n", aa, cz, yy, ii, sz, cz, uk, sz, ie);
printf("\t -PLOCHO: hr%c%ci maj%c nata%cen%c prsty a dot%ckaj%c se dlan%cmi stolu \n", aa, cz, ii, zs, ee, yy, ii, ie);
printf("Game master si p%ci h%ce s rukama d%cl%c, co chce, a %c%ck%c ostatn%cm p%c%ckazy. Hr%c%c vypadne,\n", rz, rz, ie, aa, rz, ii, aa, ii, rz, ii, aa, cz);
printf("pokud nespln%c p%c%ckaz, p%ced kter%cm je KOMANDO nebo pokud spln%c p%c%ckaz p%ced kter%cm nen%c KOMANDO.\n", ii, rz, ii, rz, yy, ii, rz, ii, rz, yy, ii);
printf(", nebo pokud je jeho reakce p%c%cli%c pomal%c.\n", rz, ii, sz, aa);
printf("Vyhr%cv%c ten, kdo z%cstane jako posledn%c. Ten je v p%c%c%ct%cm kole gamemaster.\n ", aa, aa, uk, ii, rz, ii, sz, ii);
printf("ALTERNATIVN%c PRAVIDLA: po konci kola m%c%ce v%cherce vymyslet novou polohu rukou, se kterou se bude hr%ct, a pojmenovat ji\n", II, uk, zs, yy, aa);
printf("Zde pi%cte p%c%ckazy: \n", sz, rz, ii);
	}
	  else if( strcmp(nahledinput,"#14") == 0 || strcmp(nahledinput,"elektrika") == 0 ){
printf("________________________________________________________________________________________________________________ \n");
printf("________________________________________________________________________________________________________________ \n");
printf(" ________  __         __       _            _   __              \n");
printf("|_   __  |[  |       [  |  _  / |_         (_) [  |  _          \n");
printf("  | |_ \\_| | | .---.  | | / ]`| |-'_ .--.  __   | | / ]  ,--.   \n");
printf("  |  _| _  | |/ /__\\\\ | '' <  | | [ `/'`\\][  |  | '' <  `'_\\ :  \n");
printf(" _| |__/ | | || \\__., | |`\\ \\ | |, | |     | |  | |`\\ \\ // | |, \n");
printf("|________|[___]'.__.'[__|  \\_]\\__/[___]   [___][__|  \\_]\\'-;__/ \n\n");                                                           printf("REKVIZITY:dob%ce uchopiteln%c p%cedm%ct, mince, st%cl s %cidlemi\n", rz, yy, rz, ie, uk, zs);
printf("PRAVIDLA: Utvo%c%c se dva stejn%c po%cetn%c t%cmy lid%c, kter%c se posad%c naproti\n", rz, ii, ie, cz, ee, yy, ii, ee, ii);
printf("sob%c okolo stolu a chytnou se za ruce. K jednomu z %cel stolu se posad%c vhazova%c\n", ie, cz, ii, cz);
printf("a ke druh%cmu se postav%c stoli%cka, na kterou se polo%c%c jeden dob%ce uchopiteln%c\n", ee, ii, cz, zs, ii, rz, yy);
printf("p%cedm%ct (fla%cka s vodou, petangov%c koule aj.). Oba hr%c%ci, kte%c%c maj%c k p%cedm%ctu\n", rz, ie, sz, aa, aa, cz, rz, ii, ii, rz, ie);
printf("nejbl%c%ce, k n%cmu mus%c m%ct stejn%c daleko. Hr%c%ci nejbl%c%ce ke vhazova%ci se na n%cj\n", ii, zs, ie, ii, ii, ie, aa, cz, ii, zs, cz, ie);
printf("d%cvaj%c, ostatn%c se mus%c d%cvat sm%crem k p%cedm%ctu. Hra prob%ch%c tak, %ce vhazova%c\n", ii, ii, ii, ii, ii, ie, rz, ie, ii, aa, zs, cz);
printf("hod%c minc%c a kdy%c padne pana, pote%ce elektrika, kdy%c ne, tak nepote%ce. Jakmile\n", ii, ii, zs, cz, zs, cz);
printf("te%ce elektrika, mus%c ti, co se d%cvaj%c na minci poslat stisknut%cm ruky sign%cl\n", cz, ii, ii, ii, ii, aa);
printf("ostatn%cm z t%cmu, kte%c%c si ho p%cedaj%c. A%c sign%cl dojde k posledn%cmu %clov%cku, mus%c\n", ii, yy, rz, ii, rz, ii, zs, aa, ii, cz, ie, ii);
printf("uchopit p%cedm%ct. Ten t%cm, kter%c uchop%c p%cedm%ct, dostane bod a v%cichni z t%cmu se\n", rz, ie, yy, yy, ii, rz, ie, sz, yy);
printf("posunou o jedno m%csto doprava. Pokud t%cm chytne fla%cku a nete%ce elektrika, posune\n", ii, yy, sz, cz);
printf("se t%cm opa%cn%c. Hra kon%c%c t%cm, %ce se jeden t%cm vyst%c%cd%c na v%cech pozic%cch (jednou nebo v%ccekr%ct).\n", yy, cz, ie, cz, ii, ii, zs, yy, rz, ii, aa, sz, ii, ii, aa);
printf("Zde pi%cte p%c%ckazy: \n", sz, rz, ii);
	}

      	  else if( strcmp(nahledinput,"#15") == 0 || strcmp(nahledinput,"cinkacka") == 0 ){
printf("________________________________________________________________________________________________________________ \n");
printf("________________________________________________________________________________________________________________ \n");
printf("\t   ____ _       _          \\\\//_         \n");
printf("\t  / ___(_)_ __ | | ____ _  _\\/| | ____ _ \n");
printf("\t | |   | | '_ \\| |/ / _` |/ __| |/ / _` |\n");
printf("\t | |___| | | | |   < (_| | (__|   < (_| |\n");
printf("\t  \\____|_|_| |_|_|\\_\\__,_|\\___|_|\\_\\__,_|\n\n");
printf("REKVIZITY: t%ci mince s pokud mo%cno r%cznou velikost%c, st%cl\n", rz, zs, uk, ii, uk);
printf("PRAVIDLA: Hr%c%ci se rozd%cl%c na dva t%cmy a sednou si proti sob%c ke stolu. Hra prob%ch%c\n", aa, cz, ie, ii, yy, ie, ii, aa);
printf("tak, %ce t%cm, kter%c je na %cad%c, si tajn%c mezi sebou pod stolem pod%c mince a pot%c polo%c%c\n", zs, yy, yy, rz, ie, ie, aa, ee, zs, ii);
printf("lokty na st%cl a zav%ce p%csti, aby ne%clo vid%ct, kdo m%c mince. V%cichni najednou n%csledovn%c\n", uk, rz, ie, sz, ie, aa, sz, aa, ie);
printf("bouchnou rukama o st%cl tak, aby mince z%cstaly nevid%cny a p%cikryty. Druh%c t%cm m%c 4 pokusy\n", uk, uk, ie, rz, yy, yy, aa);
printf("na to, aby odhalil, kde jsou mince t%cm, %ce odkryje libovolnou ruku. Lokaci mince lze ur%cit\n", ii, zs, cz);
printf("pomoc%c zvuku, kter%c vyd%cvaj%c mince p%ci bouchnut%c o st%cl.\n", ii, yy, aa, ii, rz, ii, uk);
printf("POZN.: V t%cmu se lid%c hodn%c h%cdaj%c, tak%ce se vyplat%c ur%cit jednoho z%cstupce a jedin%c on\n", yy, ee, ie, aa, ii, zs, ii, cz, aa, ie);
printf("m%c%ce ur%cit, kterou ruku m%c protit%cm nadzvednout.\n ", uk, zs, cz, aa, yy);
printf("Zde pi%cte p%c%ckazy: \n", sz, rz, ii);
	} 

	  else if( strcmp(nahledinput,"#16") == 0 || strcmp(nahledinput,"paserak") == 0 ){
printf("________________________________________________________________________________________________________________ \n");
printf("________________________________________________________________________________________________________________ \n");
printf("\t  ____       \\\\//           __  _    \n");
printf("\t |  _ \\ __ _ _\\/  ___ _ __ /_/_| | __\n");
printf("\t | |_) / _` / __|/ _ \\ '__/ _` | |/ /\n");
printf("\t |  __/ (_| \\__ \\  __/ | | (_| |   < \n");
printf("\t |_|   \\__,_|___/\\___|_|  \\__,_|_|\\_\\ \n\n");
printf("REKVIZITY: provaz, p%cedm%cty, kter%c se lehce daj%c skr%ct na %clov%cku\n", rz, ie, ee, ii, yy, cz, ie);
printf("PRAVIDLA: Hr%c%ci se rozd%cl%c na dva t%cmy - celn%cky a pa%cer%cky (celn%ck%c je m%cn%c ne%c pa%cer%ck%c,\n", aa, cz, ie, ii, yy, ii, sz, aa, ii, uk, ee, ie, zs, sz, aa, uk);
printf("pom%cr zhruba 3:2). Provazem se ohrani%c%c kruh s polom%crem cca. 2 metry, kter%c bude p%cedstavovat\n", ie, cz, ii, ie, yy, rz);
printf("zahrani%c%c pro pa%cer%cky. Ur%c%c se je%ct%c %czem%c kolem zahrani%c%c, kter%c p%cedstavuje celnici, a kter%c\n", cz, ii, sz, aa, cz, ii, sz, ie, uu, ii, cz, ii, ee, rz, aa);
printf("je velk%c a%c 50 metr%c. Úkolem pa%cer%ck%c je mimo celnici se tajn%c smluvit, u n%cjak%cho pa%cer%cka schovat\n", aa, zs, uk, sz, aa, uk, ie, ie, ee, sz, aa);
printf("pa%covan%c p%cedm%ct a onen p%cedm%ct propa%covat do zahrani%c%c. Sta%c%c tedy, aby se %clov%ck i s p%cedm%ctem\n", sz, yy, rz, ie, rz, ie, sz, cz, ii, cz, ii, cz, ie, rz, ie);
printf("dostali do zahrani%c%c a pa%cer%cci vyhraj%c. Celn%cci vyhraj%c, kdy%c chyt%c pa%cer%cka s p%cedm%ctem, nebo\n", cz, ii, sz, aa, ii, ii, ii, zs, ii, sz, aa, rz, ie);
printf("uplyne p%cedem stanoven%c limit. Pokud je pa%cer%ck v celnici, mohou ho celn%cci chytit a pro%cacovat\n", rz, yy, sz, aa, ii, sz);
printf("(%cacovat mohou jak dlouho cht%cj%c, klidn%c i nemusej%c). Pokud se celn%ck dotkne pa%cer%cka a nic\n", sz, ie, ii, ie, ii, ii, sz, aa);
printf("nenajde, mus%c se pa%cer%ck vr%ctit zp%ct do mimo celnici a zahrani%c%c. Pokud celn%cci chyt%c pa%cer%cka\n", ii, sz, aa, aa, ie, cz, ii, ii, ii, sz, aa);
printf("a najdou p%cedm%ct, pa%cer%cci prohr%cli.\n", rz, ie, sz, aa, aa);
printf("Zde pi%cte p%c%ckazy: \n", sz, rz, ii);
	}

	 else if( strcmp(nahledinput,"#17") == 0 || strcmp(nahledinput,"evilmultitasking") == 0 ){
printf("________________________________________________________________________________________________________________ \n");
printf("________________________________________________________________________________________________________________ \n");
printf("   __       _ _                _ _   _ _            _    _             \n");
printf("  /__\\_   _(_) |   /\\/\\  _   _| | |_(_) |_ __ _ ___| | _(_)_ __   __ _ \n");
printf(" /_\\ \\ \\ / / | |  /    \\| | | | | __| | __/ _` / __| |/ / | '_ \\ / _` |\n");
printf("//__  \\ V /| | | / /\\/\\ \\ |_| | | |_| | || (_| \\__ \\   <| | | | | (_| |\n");
printf("\\__/   \\_/ |_|_| \\/    \\/\\__,_|_|\\__|_|\\__\\__,_|___/_|\\_\\_|_| |_|\\__, |\n");
printf("                                                                 |___/ \n\n");
printf("REKVIZITY: t%ci a v%cce tenis%ck%c\n", rz, ii, aa, uk);
printf("PRAVIDLA: Hr%c%ci se postav%c do kruhu a h%cz%c si mezi sebou tenis%cky. M%cnusov%c bod dostane\n", aa, cz, ii, aa, ii, aa, ii, yy);
printf("ten, kdo tenis%ck nechyt%c, nebo ho hod%c tak, %ce nejde chytit. Taky ho v%cak dostane ten, kdo\n", aa, ii, ii, zs, sz);
printf("m%c u sebe v%cc ne%c jeden tenis%ck najednou. Vyhr%cv%c ten, kdo m%c nejm%cn%c m%cnusov%cch bod%c na konci\n", aa, ii, zs, aa, aa, aa, aa, ee, ie, ii, yy, uk);
printf("hry. Smysl t%cto hry spo%c%cv%c v tom, %ce se hr%c%ci spiknou proti jin%cm hr%c%c%cm a hod%c mu n%ckolik\n", ee, cz, ii, aa, zs, aa, cz, yy, aa, cz, uk, ii, ie);
printf("tenis%ck%c najednou a on mus%c reagovat rychle.\n", aa, uk, ii);
printf("Zde pi%cte p%c%ckazy: \n", sz, rz, ii);
	}  
	else if( strcmp(nahledinput,"#18") == 0 || strcmp(nahledinput,"placacka") == 0 ){
printf("________________________________________________________________________________________________________________ \n");
printf("________________________________________________________________________________________________________________ \n");
printf("\t  ____  _   __             \\\\//_         \n");
printf("\t |  _ \\| | /_/_  ___ __ _  _\\/| | ____ _ \n");
printf("\t | |_) | |/ _` |/ __/ _` |/ __| |/ / _` |\n");
printf("\t |  __/| | (_| | (_| (_| | (__|   < (_| |\n");
printf("\t |_|   |_|\\__,_|\\___\\__,_|\\___|_|\\_\\__,_|\n\n");
printf("REKVIZITY: - \n");
printf("PRAVIDLA: Utvo%c%c se dv%c %cady hr%c%c%c, kter%c se postav%c naproti sob%c ve vzd%clenosti\n", rz, ii, ie, rz, aa, cz, uk, ee, ii, ie, aa);
printf("cca.10 metr%c. Hra prob%ch%c tak, %ce na st%c%cda%cku proti sob%c %cady pos%claj%c jednoho\n", uk, ii, aa, zs, rz, ii, cz, ie, rz, ii, ii);
printf("%clov%cka. Vyslanec p%cijde k %cad%c lid%c, kte%c%c mus%c p%ced sebe nat%chnout ob%c ruce\n", cz, ie, rz, rz, ie, ii, rz, ii, ii, rz, aa, ie);
printf("dlan%cmi nahoru. Vyslanec pot%c mus%c pl%ccnout t%ci dlan%c z druh%c %cady. Jakmile pl%ccne\n", ie, ee, ii, aa, rz, ie, ee, rz, aa);
printf("t%cet%c, stane se jeho c%clem dob%chnout za svoji %cadu a c%clem pl%cnut%cho se stane se ho\n", rz, ii, ii, ie, rz, ii, aa, ee);
printf("dotknout. Komu se c%cl poda%c%c, ten konvertuje toho druh%cho do sv%c %cady. Hra skon%c%c,\n", ii, rz, ii, ee, ee, rz, cz, ii);
printf("a%c zbyde jen jedna %cada (nebo tak, %ce zbyde jen %clov%ck se dv%cma rukama, kter%cho\n", zs, rz, zs, cz, ie, ie, ee);
printf("nebude moci druh%c %cada pl%ccnout, a tak prohraje).\n", aa, rz, aa);
printf("Zde pi%cte p%c%ckazy: \n", sz, rz, ii);
	}

	  else if( strcmp(nahledinput,"#19") == 0 || strcmp(nahledinput,"tramvaj") == 0 ){
printf("________________________________________________________________________________________________________________ \n");
printf("________________________________________________________________________________________________________________ \n");
printf("    ___       ___       ___       ___       ___       ___       ___   \n");
printf("   /\\  \\     /\\  \\     /\\  \\     /\\__\\     /\\__\\     /\\  \\     /\\  \\  \n");
printf("   \\:\\  \\   /::\\  \\   /::\\  \\   /::L_L_   /:/ _/_   /::\\  \\   _\\:\\  \\ \n");
printf("   /::\\__\\ /::\\:\\__\\ /::\\:\\__\\ /:/L:\\__\\ |::L/\\__\\ /::\\:\\__\\ /\\/::\\__\\\n");
printf("  /:/\\/__/ \\;:::/  / \\/\\::/  / \\/_/:/  / |::::/  / \\/\\::/  / \\::/\\/__/\n");
printf("  \\/__/     |:\\/__/    /:/  /    /:/  /   L;;/__/    /:/  /   \\/__/   \n");
printf("             \\|__|     \\/__/     \\/__/               \\/__/            \n\n");
printf("REKVIZITY: lano \n");
printf("PRAVIDLA: Utvo%cte kruh z lana, do kter%cho si stoupnou v%cichni hr%c%ci. Je to ho%c%cc%c mrakodrap, ze\n", rz, ee, sz, aa, cz, rz, ii, ii);
printf("kter%cho nen%c %cniku. Na%ct%cst%c p%cil%ct%c vrtuln%ck, ale v n%cm je m%csto pouze na jednoho hr%c%ce. Hr%c%ci se\n", ee, ii, uu, sz, ie, ii, rz, ee, aa, ii, ie, ii, aa, cz, aa, cz);
printf("tedy sna%c%c vytla%cit ostatn%c z kruhu, aby vrtuln%ck zachr%cnil pr%cv%c je.\n", zs, ii, cz, ii, ii, aa, aa, ie);
printf("POZN.: Ur%cete jasn%c hranici vypadnut%c z mrakodrapu, aby nenastaly sporn%c situace. Nap%c. ob%c nohy ven\n", cz, ie, ii, ee, rz, ie);
printf("z kruhu, polovina t%cla... M%c%cete tak%c ur%cit soudce, kter%c bude nad hrou dohl%c%cet a sporn%c p%c%cpady rozhodovat.\n", ie, uk, zs, ee, cz, yy, ii, zs, ee, rz, ii);
printf("POZN. %c.2: Hra m%c dv%c jm%cna - ho%c%cc%c mrakodrap, co%c symbolizuje v%c%ce popsan%c p%c%cb%ch, nebo tramvaj, co%c \n", cz, aa, ie, ee, rz, ii, ii, zs, yy, sz, yy, rz, ii, ie, zs);
printf("znamen%c taky n%cco, ale u%c jsem to zapomn%cl.\n", aa, ie, zs, ie);
printf("Zde pi%cte p%c%ckazy: \n", sz, rz, ii);
	  }


	  else if( strcmp(nahledinput,"#20") == 0 || strcmp(nahledinput,"australskyfotbal") == 0 ){
printf("________________________________________________________________________________________________________________ \n");
printf("________________________________________________________________________________________________________________ \n");
printf("    ___              __             __     __     __     ____      __  __          __\n");
printf("   /   | __  _______/ /__________ _/ /____/ /____/_/_   / __/___  / /_/ /_  ____ _/ /\n");
printf("  / /| |/ / / / ___/ __/ ___/ __ `/ / ___/ //_/ / / /  / /_/ __ \\/ __/ __ \\/ __ `/ / \n");
printf(" / ___ / /_/ (__  ) /_/ /  / /_/ / (__  ) ,< / /_/ /  / __/ /_/ / /_/ /_/ / /_/ / /  \n");
printf("/_/  |_\\__,_/____/\\__/_/   \\__,_/_/____/_/|_|\\__, /  /_/  \\____/\\__/_.___/\\__,_/_/   \n");
printf("                                            /____/                                   \n\n");
printf("REKVIZITY: tenis%ck\n", aa);
printf("PRAVIDLA: Hr%c%ci se postav%c do kruhu (=na obvod pomysln%c kru%cnice) %celem ven a tak, aby se dot%ckali\n", aa, cz, ii, ee, zs, cz, yy);
printf("nohama. Potom se sh%cbnou, aby se koukali mezi rozkro%cen%cm nohama. Jejich rozkro%cen%c nohy jsou branky.\n", yy, cz, yy, cz, ee);
printf("Dovnit%c se hod%c m%c%c a hr%c%ci se sna%c%c prohodit m%c%c brankami ostatn%cch. Pokud hr%c%ci n%ckdo prohod%c m%c%c\n", rz, ii, ii, cz, aa, cz, zs, ii, ii, cz, ii, aa, cz, ie, ii, ii, cz);
printf("mezi nohama, nebo se hr%c%c narovn%c, ztr%cc%c jednu ruku, a kdy%c nem%c ruku, tak vypad%cv%c. Hr%c%ci nesm%c\n", aa, cz, aa, aa, ii, zs, aa, aa, aa, aa, cz, ii);
printf("st%c%clet na lidi t%csn%c vedle sebe, tak%ce vyhr%cvaj%c posledn%c t%ci lid%c.\n", rz, ii, ie, ie, zs, aa, ii, ii, rz, ee);
printf("Zde pi%cte p%c%ckazy: \n", sz, rz, ii);
	  }
	  else if( strcmp(nahledinput,"#21") == 0 || strcmp(nahledinput,"csr") == 0 ){
printf("________________________________________________________________________________________________________________ \n");
printf("________________________________________________________________________________________________________________ \n");
printf("                                               \t  _________  \n");
printf("____ ___  ____ ____ ___  ____ _  _ __/_ _  _ / \t |`.       | \n");
printf("|  | |__] [__  |__|   /  |  | |  | |__| |\\ | | \t |..>------| \n");
printf("|__| |__] ___] |  |  /__ |__|  \\/  |  | | \\| | \t |.';;;;;;;| \n");
printf("REKVIZITY: lano\n");
printf("PRAVIDLA: Rozd%clte hr%c%ce na dva t%cmy v pom%cru cca. 1:3 a na zem z provazu ud%clejte z provazu uzav%cenou k%civku\n", ie, aa, cz, yy, ie, ie, rz, rz);
printf("ve tvaru mapy %ceska. V%ct%c%c t%cm symbolizuje nacisty a nesm%c vstoupit dovnit%c %ceska, men%c%c t%cm symbolizuje \n", CZ, ie, sz, ii, yy, ii, rz, CZ, sz, ii, yy);
printf("domobranu %ceska a mus%c z%cstat v %cesku. Domobrana mus%c st%ct a nesm%c pokr%covat kolena. Nacisti mus%c m%ct zalo%cen%c\n", CZ, ii, uk, CZ, ii, aa, ii, cz, ii, ii, zs, ee);
printf("ruce a chodit v pod%cepu (jako kdy%c se tan%c%c koz%c%cek). C%clem nacist%c je nohou postr%cit hranice %ceska co nejv%cc\n", rz, zs, cz, ii, aa, cz, ii, uk, cz, CZ, ii);
printf("dovnit%c (a t%cm ho obsadit). C%clem %cech%c je jim v tom br%cnit t%cm, %ce se jich dotknou rukama a takto vybit%c nacista\n", rz, ii, ii, CZ, uk, aa, ii, zs, yy);
printf("se mus%c j%ct o%civit na p%cedem ur%cen%c m%csto. Hra kon%c%c %casov%cm limitem nebo kapitulac%c %cech%c (kdy%c u%c maj \n", ii, ii, zs, rz, cz, ee, ii, cz, ii, cz, yy, ii, CZ, uk, zs, zs);
printf("fakt m%clo m%csta\n", aa, ii);
printf("ALTERNATIVN%c PRAVIDLA:\n", II);
printf("Pro zv%ct%cen%c atmosf%cry mohou N%cmci mluvit pouze n%cmecky (n%cjak%c z%ckladn%c fr%cze jsou t%ceba ,,Ja, nein, aber mein\n", ie, sz, ii, ee, ie, ie, ie, ee, aa, ii, aa, rz);
printf("Führer, wiener schnitzel, Panzerfaust, Ordnung muss sein\'\') a %ce%ci pouze %cesky n%cjak%c slogany (,, Kdo nesk%c%ce\n", CZ, sz, cz, ie, ee, aa, cz);
printf("nen%c %cech\'\' apod.)\n", ii, CZ);
printf("Ke h%ce se hod%c vysv%ctlit re%clie [>-] %ci ji zapojit do jin%cho v%ct%c%cho celku.\n", rz, ii, ie, aa, cz, ee, ie, sz, ii);
	  }

  
	else{
printf("Toto ID neexistuje\n");
printf("Zde pi%cte p%c%ckazy: \n", sz, rz, ii);
	}


}
