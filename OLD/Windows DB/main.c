#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>
#include <locale.h>


/*       TODO: - responsivn� tagy u ka�d� hry */
/* �esk� znaky */
int aa=160;int cz=159;int ii=161;int uu=163;int ee=130;int ie=216;int rz=253;int uk=133;int oo=162;int sz=231;int tj=156;int zs=167 ;int yy= 236;
int II = 214; int AA=181;int EE=144;int TJ=155;int ZS=166;int IE=183;int SZ=230;int RZ=252;int CZ=428;

int filtr(int bypass); int c;
char nahled(char boi[20]);


int filtr(int bypass); int c;
char nahled(char nahledinput[20]);

char input [20];

int main() {
	setlocale(LC_ALL, "");
/*Mo�nosti: */	 bool FAE= 1;


		/* Startup screen */
printf("      __/ ___ _    ___ _         _    __            ___ __     _/    _      ___      _   /   __ ___        _  _  \n");
printf("  \\  / |   | |_   | | |_   \\  / |_   (_  |/  /\\  | | | (_  |/ |_    | \\  /\\  |  /\\  |_)  /\\   /  |    |_| |_ |_) \n");
printf("   \\/ _|_  | |_ \\_| | |_    \\/  |_   __) |\\ /--\\ |_| | __) |\\ |_    |_/ /--\\ | /--\\ |_) /--\\ /_ _|_   | | |_ | \\ \n");
printf("\nZadejte ��slo, nebo jm�no hry, kterou chcete zobrazit.\n");   printf("Nejste-li si jisti, zkuste napsat help\n");
		/*Dost� v�n�­ inputu od u�ivatele */
LOOP:scanf("%s", input);    int g;
while ( (g = getchar()) != EOF && g != '\n') { }
printf("Napsali jste: %s \n", input);

if(strcmp(input, "help") == 0 || strcmp(input, "pomoc") == 0){ 	/*n�pov�da*/
	printf("Seznam p��kaz�:\n help  --> pomoc\n konec --> ukon�it program\n hry   --> zobraz� seznam v�ech her\n filtr --> vyhled�v�n� \n cisto --> vy�ist� obrazovku\n");   goto LOOP;
} 
if(strcmp(input, "konec") == 0 || strcmp(input, "k") == 0){  /*ukon�en�­ programu*/
	printf("		Nashledanou \n");
	goto END;
}
if(strcmp(input, "FML") == 0 || strcmp(input, "overwatch") == 0 ){ /*Lul dis */
 	printf(" -    -  -         -  -----------  \n");printf("!-!  !-!!-!       !-!!-----------! \n");printf("!-! !-! !-!       !-!!-----------  \n");printf("!-!!-!  !-!       !-!!-!           \n");printf("!-!-!   !-----------!!-----------  \n");printf("!--!    !-----------!!-----------! \n");printf("!-!-!    -----------  -----------! \n");printf("!-!!-!       !-!               !-! \n");printf("!-! !-!      !-!      -----------! \n");printf("!-!  !-!     !-!     !-----------! \n");
  	printf("-    -       -       -----------  \n");}

 if(strcmp(input, "clr")==0 || strcmp(input,"cisto") ==0){
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	goto LOOP;
	}

if(strcmp(input, "filtr") == 0 || strcmp(input, "fl") == 0){  /*odkaz na vyhled�vac�­ funkci */
	filtr(0);
	goto LOOP;
}
if(strcmp(input, "hry") == 0 || strcmp(input, "ls") == 0){  /*zobraz�­ seznam v�ech her */
	filtr(1);
	goto LOOP;
}

/* Zobrazov�n� her podle ID */
if(strncmp(input,"#",1)==0){
   nahled(input);
	goto LOOP;
}
/* Zobrazov�n� her podle n�zvu */
if(strcmp(input,"dementball")== 0 || (strcmp(input,"najelena")== 0 ) || (strcmp(input,"chaos")== 0 ) || strcmp(input,"indi�nsk�fotbal") == 0 || (strcmp(input,"kom�r") == 0 ) || strcmp(input,"kikikokokeke") == 0  || strcmp(input,"maso") == 0 || strcmp(input,"talism�nek") == 0 || strcmp(input,"kr�lnidoriamy") ==0 || strcmp(input, "aliby") == 0 || strcmp(input,"improvizace") == 0 || strcmp(input,"fotbika") == 0 || strcmp(input,"komandohopsando") == 0 || strcmp(input,"elektrika") == 0 || strcmp(input,"cinka�ka") == 0 || strcmp(input,"pa�er�k") == 0 || strcmp(input,"evilmultitasking") == 0 || strcmp(input,"pl�ca�ka") == 0 || strcmp(input,"tramvaj") == 0 || strcmp(input,"australsk�fotbal") == 0 ) {
   nahled(input);
	goto LOOP;
}

if(strcmp(input,"autor") == 0 || strcmp(input, "author") == 0 ){    /* o autorovi  			18+10 */
printf("		    _____________________________ \n");
printf("		   |                             |\n");
printf("		   |    SKTDB 1.1    30.7.2017   | \n");
printf("		   |                             |\n");
printf("		   |       JIND�ICH DU�EK        |\n");
printf("		   |_____________________________|\n \n");
}


else{  /* Kdy� zadaj n�co n�hodn�ho */
	printf("Toto nen� validn� p��kaz, zkuste to znovu\n");

}
	goto LOOP;
	END : return 0;
}

int filtr(int bypass){ /* funkce na vytvoren� filtrovan�ho seznamu */
	char temp[BUFSIZ];int mint = -1; int maxt = 120; int t; char input[6];
		/* Symboly pro filtry  */
	bool h=false; bool z=false; bool vyzv=false;
	bool beh = false; bool b=false; bool p=false; bool m=false; bool sp=false;
	bool ch=false; bool l=false;bool lk=false;bool kl=false; bool vlak =false;
	bool zsch=false; bool psch=false; bool ksch=false; bool vsch=false;
	bool bez=false; bool srek=false; bool nic=false;
	bool noc=false;

	/* ptac� se f�ze*/
	if(bypass == 0){
FILTROVANI:printf("Zadejte va�e po�adovan� vyhled�vac� krit�ria (nebo help pro zobrazen� mo�n�ch krit�ri�):\n");
	scanf("%s", input);    int c; 			while ( (c = getchar()) != EOF && c != '\n') { }
		/*  Zad�v�n�­ krit�ri�­  */
		/* norm�ln�­ krit�ria */
		if(strcmp(input, "h") == false){ h=1; goto FILTROVANI;}else if(strcmp(input, "z") == false){ z=1; goto FILTROVANI;}else if(strcmp(input, "vyzv") == false){ vyzv=1; goto FILTROVANI;}
		else if(strcmp(input, "b") == false){ b=1; goto FILTROVANI;}else if(strcmp(input, "p") == false){ p=1; goto FILTROVANI;}else if(strcmp(input, "m") == false){ m=1; goto FILTROVANI;}else if(strcmp(input, "sp") == false){ sp=1; goto FILTROVANI;}
		else if(strcmp(input, "ch") == false){ ch=1; goto FILTROVANI;}else if(strcmp(input, "l") == false){ l=1; goto FILTROVANI;}else if(strcmp(input, "lk") == false){ lk=1; goto FILTROVANI;}else if(strcmp(input, "kl") == false){ kl=1; goto FILTROVANI;}else if(strcmp(input, "vlak") == false){ vlak=1; goto FILTROVANI;}
		else if(strcmp(input, "zsch") == false){ zsch=1; goto FILTROVANI;}else if(strcmp(input, "psch") == false){ psch=1; goto FILTROVANI;}else if(strcmp(input, "ksch") == false){ ksch=1; goto FILTROVANI;}else if(strcmp(input, "vsch") == false){ vsch=1; goto FILTROVANI;}
		else if(strcmp(input, "bez") == false){ bez=1; goto FILTROVANI;}else if(strcmp(input, "srek") == false){ srek=1; goto FILTROVANI;}else if(strcmp(input, "nic") == false){ nic=1; goto FILTROVANI;}
		else if(strcmp(input, "noc") == false){ noc=1; goto FILTROVANI;}

		/* ukon�en� */
		else if(strcmp(input, "konec") == 0 || strcmp(input, "k") == 0) {
			printf("Zp�t do hlavn� nab�dky \n");
			goto BACK;
		}
		/*  �as */
		else if(strcmp(input, "cas") == 0 || strcmp(input, "�as") == 0){
			printf("Zadejte minim�ln� �as v minut�ch:");
			if (fgets(temp, sizeof(temp), stdin) != NULL){
				mint = atoi(temp);
			}
			printf("Zadejte maxim�ln� �as v minut�ch:");
			if (fgets(temp, sizeof(temp), stdin) != NULL){
				maxt = atoi(temp);
			}	goto FILTROVANI;
		}
		/* pribli�n� �as */
		else if(strcmp(input, "p�as") == 0 || strcmp(input,"pcas") == 0 ){
			printf("Zadejte pribli�n� �as hry v minut�ch:");
			if (fgets(temp, sizeof(temp), stdin) != NULL){
			         mint = atoi(temp) - 5;
				 maxt = atoi(temp) + 5;
				 goto FILTROVANI;
			}  
		}

	/*  Ostatn� pr�kazy  */
		if(strcmp(input, "konec") == 0 || strcmp(input, "k") == 0) {
			printf("Zp�t do hlavn� nab�dky \n");
			goto BACK;
		}
		else if(strcmp(input, "help") == 0 || (strcmp(input, "ls") == 0)){
			printf("Toto jsou dostupn� krit�ria: \n");
			printf("hry (h), z�vody (z), v�zvy (vyzv)\n");
			printf("vy�erp�vaj�c� - b�ha�ky (beh), brut�ln� a n�ro�n� (b), prem��lec� (m), pohodov� (p), speci�ln� (sp) \n");
			printf("za pochodu (ch), do lesa (l), na louku nebo pl�cek (lk), do m�stnosti (kl), do vlaku (vlak)\n");
			printf("na za��tek sch�zky (zsch), doprostred sch�zky (psch), na konec sch�zky (ksch), na ven na sch�zce (vsch) \n");
			printf("bez speci�ln�ch rekvizit (bez), s rekvizitami (srek), bez �ehokoliv (nic) \n");
			printf("no�n� hry (noc) \n");
			printf("PRO HLED�N� NAPIŠTE: hledat \n");
			goto FILTROVANI;
		}
		else if(strcmp(input, "hledat") == 0 || strcmp(input, "hl") == 0) {
			goto ZOBRAZ;
		}
		else{
			printf("Toto nen� validn� pr�kaz, zkuste to znovu\n");
				goto FILTROVANI;
		}
	}

	if(bypass ==1){ /* Zobraz� cel� seznam  */
		bool h=1; bool z=1;bool vyzv=1; bool beh = 1; bool b=1;bool p=1;bool m=1;bool sp=1;bool ch=1;bool l=1;bool lk=1;bool kl=1;bool zsch=1;bool psch=1;bool ksch=1;bool vch=1;bool noc=1;
		goto ZOBRAZ;
	}

	/* Procesovac� f�ze */
	// deklarace prom�nn�ch v�ech her
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


ZOBRAZ: printf("________________________________________________________________________________________________________________ \n");
	printf("		>>> SEZNAM ");
		if(b == true){printf("BRUT�LN�CH ");} if(m == true){printf("PrEM݊LEC�CH ");} if(p == true){printf("POHODOV�CH ");} if(sp == true){printf("SPECI�LN�CH ");}
		if(noc == true){printf("NO�N�CH ");} printf("HER "); if(beh == true){printf(" \' B�HA�EK \'");}
		if(ch == true){printf("ZA POCHODU ");} if(l == true){printf("DO LESA ");} if(lk == true){printf("NA LOUKU ");} if(kl == true){printf("DO M�STNOSTI ");} if(vlak == true){printf("DO VLAKU ");}
		if(zsch == true){printf("NA ZA��TEK SCH. ");} if(psch == true){printf("DOPROSTrED SCH. ");} if(ksch == true){printf("NA KONEC SCH. ");} if(vsch == true){printf("NA VEN NA SCH. ");}
		if(mint != -1){ printf("TRVAJ�C�CH OD %dmin DO %dmin", mint, maxt);} printf("<<< \n");
		if(bez == true){printf("BEZ SP. REKVIZIT ");} if(srek == true){printf("S REKVIZITAMI ");} if(nic == true){printf("NA KTER� NIC NEPOTrEBUJETE ");}

	/* �asov� filtr, kter� nejdr�v hod�­v�echny hry s ok �asem true */
	for (t = mint; t <= maxt; t++) {
	if ( (16 >= t) && (t >= 9 ) ){
		komar = true; najelena = true; kikikokokeke = true; dementball = true; maso = true; kralnidoriamy = true; fotbika = true; komhops = true; elektrika = true; cink = true; evmul = true; placacka = true; tramvaj = true; ausfot = true;
	}
	if ( (31 >= t) && (t >= 9) ){
		 talismanek = true; indball = true; aliby = true; impro = true;
	}
	if (( 41 >= t) && (t >= 19 ) ){
		chaos = true; paserak = true;
	}
}
		/* V t�to f�zi se vyhod� z filtru v�echny hry, kter� nesplňuj� po�adavky. */
	if(h == true){ /* hra */
           	  ;
		}
	if(z == true){ /* z�vod */
		dementball = false; najelena=false; chaos =false;indball = false; kikikokokeke = false; aliby = false; kralnidoriamy = false;
	}
	if(beh == true){ /* b�ha�ka */
	dementball = false; najelena=false; chaos =false;indball = false;komar = false; kikikokokeke = false; aliby = false; impro = false; komhops = false; elektrika = false; cink = false; evmul = false; ausfot = false;
	}
	if(vyzv == true){ /* v�zva */
		dementball = false; najelena=false; chaos =false;indball = false;komar = false; kikikokokeke = false; maso = false; talismanek = false; aliby = false; kralnidoriamy = false; impro = false; fotbika = false; komhops = false; elektrika = false; cink = false; paserak = false; evmul = false; placacka = false; tramvaj = false; ausfot = false;
	}
	if(b == true){/* brut�ln� */
		dementball = false; najelena=false;indball = false;indball = false;komar = false; kikikokokeke = false; aliby = false; impro = false; fotbika = false; komhops = false; elektrika = false; cink = false; paserak = false; evmul = false; placacka = false; ausfot = false;

	}
	if(p == true){/* pohodov� */
		chaos =false;indball = false; kikikokokeke = false; maso = false; talismanek = false; kralnidoriamy = false; fotbika = false; elektrika = false; cink = false; paserak = false; evmul = false; tramvaj = false; ausfot = false;
	}
	if(m == true){ /* prem��lec� */
		dementball = false; najelena=false; chaos =false;indball = false;komar = false; kikikokokeke = false; maso = false; talismanek = false; kralnidoriamy = false; fotbika = false; elektrika = false; paserak = false; evmul = false; placacka = false; tramvaj = false; ausfot = false;
	}
	if(sp == true){ /* speci�ln�  */
		dementball = false; najelena=false; chaos =false;indball = false;komar = false; kikikokokeke = false; maso = false; talismanek = false; kralnidoriamy = false; aliby = false; impro = false; fotbika = false; komhops = false; elektrika = false; cink = false; paserak = false; evmul = false; placacka = false; tramvaj = false; ausfot = false;
	}
	if(ch == true){ /* za pochodu */
		dementball = false; najelena=false; chaos =false;indball = false;komar = false; kikikokokeke = false; maso = false; talismanek = false; kralnidoriamy = false; aliby = false; impro = false; fotbika = false; komhops = false; elektrika = false; cink = false; paserak = false; evmul = false; placacka = false; tramvaj = false; ausfot = false;

	}
	if(l == true){ /* do lesa */
		dementball = false; najelena=false; chaos =false;indball = false;komar = false; maso = false; talismanek = false; kralnidoriamy = false; aliby = false; impro = false; fotbika = false; komhops = false; elektrika = false; cink = false; evmul = false; placacka = false; tramvaj = false; ausfot = false;
  
	}
	if(lk == true){ /* na louku */
		dementball = false; najelena=false; chaos =false;komar = false; talismanek = false; aliby = false; fotbika = false; komhops = false; elektrika = false; cink = false; evmul = false; placacka = false; tramvaj = false; ausfot = false;

	}
	if(kl == true){ /* do m�stnosti */
		indball = false; kikikokokeke = false; talismanek = false; kralnidoriamy = false; paserak = false; evmul = false; placacka = false; tramvaj = false;
	}
	if(vlak == true){ /* ve vlaku */
		dementball = false; najelena=false; chaos =false;indball = false;komar = false; kikikokokeke = false; maso = false; talismanek = false; kralnidoriamy = false; impro = false; fotbika = false; komhops = false; elektrika = false; cink = false; paserak = false; evmul = false; placacka = false; tramvaj = false; ausfot = false;

	} 
	if(zsch == true){ /* za��tek sch�zky */
		chaos =false;indball = false; kikikokokeke = false; aliby = false; kralnidoriamy = false; paserak = false; evmul = false; placacka = false; tramvaj = false;

	}
	if(psch == true){ /* doprostred sch�zky */
		 ;

	}
	if(ksch == true){ /* konec sch�zky */
		dementball = false; najelena=false; chaos =false;indball = false; kikikokokeke = false; maso = false; talismanek = false; aliby = false; kralnidoriamy = false; paserak = false; evmul = false; placacka = false; tramvaj = false; ausfot = false;
	}
	if(vsch == true){ /* na ven na sch�zku */
		dementball = false; chaos =false;komar = false; maso = false; aliby = false; impro = false; fotbika = false; komhops = false; elektrika = false; cink = false; ausfot = false;
	}
	if(bez == true){ /* bez speci�ln�ch rekvizit */
		dementball = false;indball = false;komar = false; maso = false; talismanek = false;
	}
	if(srek == true){ /* s rekvizitami */
		najelena=false; chaos =false;komar = false; kikikokokeke = false; aliby = false; kralnidoriamy = false; impro = false; komhops = false; placacka = false;
	}
	if(nic == true){ /* bez ni�eho */
		dementball = false; najelena = false;chaos=false;indball = false; maso = false; talismanek = false; fotbika = false; elektrika = false; cink = false; paserak = false; evmul = false; tramvaj = false; ausfot = false;

	}
	if(noc == true){ /*no�n� hry */
		dementball = false; najelena=false; chaos =false;indball = false;komar = false; kikikokokeke = false; maso = false; talismanek = false; aliby = false; kralnidoriamy = false; impro = false; fotbika = false; komhops = false; elektrika = false; cink = false; paserak = false; evmul = false; placacka = false; tramvaj = false; ausfot = false;

	}




		/* Zobrazovac� f�ze (2 taby a mezera)*/
		int counter = 1;
if(dementball == 1   ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#01-DEMENTBALL\n"); counter++;}
if(najelena == 1     ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#02-NA JELENA\n" ); counter++;}
if(chaos == 1        ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#03-CHAOS\n" ); counter++;}
if(indball == 1      ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#04-INDBALL\n" ); counter++;}
if(komar == 1        ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#05-KOM�R\n" ); counter++;} 
if(kikikokokeke == 1 ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#06-KIKIKOKOKEKE\n" ); counter++;} 
if(maso == 1         ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#07-MASO\n" ); counter++;}
if(talismanek == 1   ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#08-TALISM�NEK\n" ); counter++;}
if(kralnidoriamy == 1){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#09-KR�L NIDORIAMY\n"); counter++;}
if(aliby == 1        ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#9-ALIBY\n" ); counter++;} 
if(impro == 1        ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#11-IMPROVIZACE\n" ); counter++;} 
if(fotbika == 1      ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#12-FOTBIKA\n" ); counter++;} 
if(komhops == 1  ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#13-KOMANDO HOPSANDO\n" ); counter++;} 
if(elektrika == 1    ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#14-ELEKTRIKA\n" ); counter++;} 
if(cink == 1         ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#15-CINKA�KA\n" ); counter++;} 
if(paserak == 1      ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#16-PA�ER�K\n" ); counter++;} 
if(evmul == 1    ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#17-EVIL MULTITASKING\n"); counter++;} 
if(placacka == 1     ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#18-PL�CA�KA\n" ); counter++;} 
if(tramvaj == 1      ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#19-TRAMVAJ\n" ); counter++;} 
if(ausfot == 1       ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#20-AUSTRALSK� FOTBAL\n" ); counter++;} 
		      BACK:return 0;
}
/* Zde jsou pouze z�pisy her */

char nahled(char nahledinput[20]){
	if(strcmp(nahledinput,"#01")==0 || strncmp(nahledinput,"dementbal", 9)==0){ /* dementball */
		printf("________________________________________________________________________________________________________________ \n");printf("________________________________________________________________________________________________________________ \n");
		printf("   _____                                        _   __               __   __ 	 	 \n");
		printf(" |_   _`.         10 minut                    / |_[  |             [  | [  | 		 HRA\n");
  		printf("   | | `.\\  .---.  _ .--..--.  .---.  _ .--. `| |-'| |.--.   ,--.   | |  | | 		 POHODOVÁ\n");
  		printf("   | |  | |/ /__\\ [ `.-. .-. |/ /__\\\\[ `.-. | | |  | '/'`\\\\  '_\\ :  | |  | |		 DO M�STNOSTI\n");
 		printf("  _| |_.' /| \\__., | | | | | || \\__., | | | | | |, |  \\__/ |// | |, | |  | |  	NA ZA��TEK SCH., DOPROSTrED SCH.\n");
		printf(" |______.'  '.__.'[___||__||__]'.__.'[___||__]\\__/[__;.__.' \\'-;__/[___][___] 	   	 S REKVIZITAMI\n \n");
		printf("REKVIZITY: Tenis�k, klubko vlny, nebo jin� mal� m��ek                ,-'''-,   "); printf("OMEZEN�: -m��e se lze dot�kat  \n");
        printf("PRAVIDLA: Z�klad je podobn� jako vyb�jen� - c�lem je trefit         /\\     /\\  "); printf("jen jednou rukou najednou\n");
        printf("ostatn� m��em a neb�t s�m trefen (kdo je trefen vypadl).            | |   | |  "); printf("-m�� se odpaluje JEN nadhozen�m \n");
        printf("Je�to se v�ak hra jmenuje Dementball, maj� hr��i ur�it� omezen�.    \\/     \\/  "); printf("jednou rukou a �derem druhou \n");
        printf("Roleplay 'dement�' je v�t�n. Kdo vyhraje, m� titul vrchn�ho dementa. '-...-'"); printf("-mus�te se dot�kat 3 kon�etinami zem� \n \n");
		printf("ALTERNATIVN� PRAVIDLA: M��ete podle potreby zm�rnit omezen�. Napr. je�t� hor�� omezen� pohybu a odpalov�n� m��e \npouze hlavou. \n");
		printf("POZN.: U n�s celkem popul�rn� hra. Je treba hru urychlit, aby posledn�ch p�r hr��� nebojovalo zbyte�n� dlouho a lidi \nse nenudili. Koment�r z role sportovn�ho koment�tora m��e b�t vtipn�. \n");
	}
	else if(strcmp(nahledinput,"#02")==0 || strcmp(nahledinput,"najelena")==0){
	printf("________________________________________________________________________________________________________________ \n");printf("________________________________________________________________________________________________________________ \n");
	printf(" __    _  _______        ___  _______  ___      _______  __    _  _______  \n");
	printf("|  |  | ||   _   |      |   ||       ||   |    |       ||  |  | ||   _   |  HRA        \n");
	printf("|   |_| ||  |_|  | 10   |   ||    ___||   |    |    ___||   |_| ||  |_|  |  POHODOV�\n");
	printf("|       ||       |minut |   ||   |___ |   |    |   |___ |       ||       |  DO M�STNOSTI\n");
	printf("|  _    ||   _   |   ___|   ||    ___||   |___ |    ___||  _    ||   _   |  NA ZA��TEK SCH., DOPROSTrED SCH.\n" );
	printf("| | |   ||  | |  |  |       ||   |___ |       ||   |___ | | |   ||  | |  |  BEZ SPEC. REKVIZIT\n");
	printf("|_|  |__||__| |__|  |_______||_______||_______||_______||_|  |__||__| |__|  \n \n");
	printf("REKVIZITY:��tek na zav�z�n� o��, st�l                                                     (             )  \n");
 	printf("PRAVIDLA:Jeden �lov�k je myslivec, ostatn� jsou jeleni. C�lem myslivce je dotykem chytit   `--(_   _)--'     \n");
	printf("a vyradit jeleny a jeleni se sna�� se mu vyhnout a z�stat posledn�. Jeleni i myslivci se        Y-Y          \n");
    printf("mohou pohybovat pouze v lese, co� je st�l, kter�ho se mus� v�ichni st�le dot�kat. Stolu        /@@ \\         \n"); 
    printf("se lid� mohou dot�kat pouze zeshora.                                                          /     \\          \n");
    printf("ALTERNATIVN� PRAVIDLA: zak�zat/povolit h�b�n� stoly.                                          `--'.  \\              ,\n");
    printf("                                                                                                   |   `.__________/)     \n");
	}

	else if(strcmp(nahledinput,"#03")==0 || strcmp(nahledinput,"chaos")==0){
		printf("________________________________________________________________________________________________________________ \n");printf("________________________________________________________________________________________________________________ \n");
		printf("          _             _       _    _                   _            _                       \n");
		printf("        /\\ \\           / /\\    / /\\ / /\\                /\\ \\         / /\\               HRA   \n");
		printf("       /  \\ \\         / / /   / / // /  \\   30 min     /  \\ \\       / /  \\                N�SILN�   \n");
		printf("      / /\\ \\ \\       / /_/   / / // / /\\ \\            / /\\ \\ \\     / / /\\ \\__         DO M�STNOSTI\n ");
		printf("    / / /\\ \\ \\     / /\\ \\__/ / // / /\\ \\ \\          / / /\\ \\ \\   / / /\\ \\___\\    DOPROSTrED SCH.\n ");
		printf("   / / /  \\ \\_\\   / /\\ \\___\\/ // / /  \\ \\ \\        / / /  \\ \\_\\  \\ \\ \\ \\/___/  BEZ SPEC. REKVIZIT\n");
		printf("   / / /    \\/_/  / / /\\/___/ // / /___/ /\\ \\      / / /   / / /   \\ \\ \\                 \n");
		printf("  / / /          / / /   / / // / /_____/ /\\ \\    / / /   / / /_    \\ \\ \\   ROLE:          \n");
		printf(" / / /________  / / /   / / // /_________/\\ \\ \\  / / /___/ / //_/\\__/ / /  -Julie: zp�v� dojemn� pod oknem  \n");
		printf("/ / /_________\\/ / /   / / // / /_       __\\ \\_\\/ / /____\\/ / \\ \\/___/ / -Romeo: sna�� se dostat k Julii           \n");   
		printf("\\/____________/\\/_/    \\/_/ \\_\\___\\     /____/_/\\/_________/   \\_____\\/  -Matka: br�n� Romeovi, aby se dostal k Julii\n");
		printf("                                                                        -Den: sna�� se, aby bylo rozsv�ceno\n");
	printf("REKVIZITY:pap�rky s n�zvy rol� a n�co, z �eho mohou hr��i losovat (klobouk atd.) \n");
        printf("PRAVIDLA:Ze za��tku se v�em rozdaj� role, kter� budou plnit.  .( * .   -Noc: sna�� se, aby bylo zhasnuto\n");
    	printf("Ujist�te se, �e v�ichni svoje role ch�pou a potom    	   .*  .  ) .  -Antigrav. pras�tko: sna�� se b�t co nejv��\n");
   		printf("m��ete hru odstartovat. C�lem ka�d�ho je plnit sv�j �kol   . . POOF .* . -Permon�k: stav� barik�du skrz klubovnu\n");
    	printf("do konce �asov�ho limitu. Na konci ka�d�ho kola ud�lejte    '* . (  .) ' -Policista: udr�uje por�dek; nesnese barik�dy \n");
     	printf("zhodnocen�, kde ka�d� rekne, kdo byl a jak mu to �lo. 	      ` ( . *   -Komik: n�koho si vybere a vypr�v� mu vtipy \n");                         
     	printf("Jeden �lov�k m��e m�t i v�ce rol�. Role se nesm� nikomu r�kat.          dokud se nezasm�je  \n");  
		printf("POZN.: Lid� se mohou pr�li� v��t do sv� role. Pripravte se proto       -D�t�: zlob� a za ka�dou cenu nesm� dostat d�rek\n");
		printf("na pr�padn� pranice. Tak� si nechte po hre �as na �klid.              -Santa: d�v� d�rky lidem a mus� 1 d�t i d�t�ti\n");
		printf("Role m��ete rozd�vat n�hodn�, ale pr�padn� v�b�r trochu ovlivn�te.    -Kr�l: rozkazuje lidem a oni ho mus� poslechnout\n");
		printf("Pri hre se m��e zni�it napr. n�bytek, dejte si na toto pozor.       kdy� neposlechnou, dohl�dn�te, aby ud�lali 10 klik�\n");
	}
	else if(strcmp(nahledinput,"#04")==0 || strcmp(nahledinput,"indi�nsk�fotbal")==0){
	  		printf("________________________________________________________________________________________________________________ \n");printf("________________________________________________________________________________________________________________ \n");
	  printf("\t \t \t ****************** \n");
	  printf("\t \t \t *INDI�NSK� FOTBAL* \n");
	  printf("\t \t \t ****************** \n \n");
	  printf("REKVIZITY: Provaz, dva lehce uchopiteln� predm�ty (petangov� koule, fla�ky s vodou atp.)\n");
	  printf("PRAVIDLA: Hr��i se rozd�l� do dvou stejn� po�etn�ch t�m�. Pripravte hrac� pole, kter� je vytvoreno ze dvou pol� odd�len�ch lanem. Do ka�d�ho s pol� polo�te na zem ve vzd�lenosti cca. 20 krok� lehce uchopiteln� predm�t (tj. lahev s vodou,  klacek v zemi, petangov� koule...). C�lem ka�d�ho z t�m� je uchopit predm�t prothr��sk�ho t�mu. Pokud se toto n�kter�mu z t�m� povede, ukon�� se kolo, t�m dostane bod a v�e se vr�t� zp�t do p�vodn�ho stavu. H��ek spo��v� v tom, �e pokud se n�kter� z hr��� nach�z� na poli ciz�ho t�mu, m��e ho druh� t�m zmrazit dotykem. Zmra�en� �lov�k se nesm� h�bat a je rozmra�en dotykem hr��e ze sv�ho t�mu. \n ");
	  printf("DODATE�N� PRAVIDLA: Pokud se dva nebo v�ce lid� dot�kaj�, zmra�eni jsou v�ichni, pokud se nepr�tel dotkne by� jen jednoho z nich. \n Pokud se dva lidi dotknou a jsou oba na sv� polovin�, vym�n� si m�sta a jsou oba zmra�eni (toto pravidlo nemus�te vyu��t).\n");
	  printf("ALTERNATIVN� PRAVIDLA: Odmrazuje se podlezen�m nohou (jako v mraz�kovi) a ne dotykem.\n");
	}
	else if(strcmp(nahledinput,"#05")==0 || strcmp(nahledinput,"komar")==0 || strcmp(nahledinput,"kom�r")==0){
	  printf("\t \t \t ************* \n");
	  printf("\t \t \t *   KOM�R   * \n");
	  printf("\t \t \t ************* \n \n");
	  printf("REKVIZITY: Stoli�ka, ��tek na zav�z�n� o��, mikina na vytvoren� palc�tu\n");
	  printf("PRAVIDLA: Ur�� se jeden hr��, jeho� �kol se stane reprezentovat �lov�ka. Ostatn� lid� reprezentuj� kom�ry. Člov�k si sedne na stoli�ku doprostred m�stnosti, do ruky dostane zav�zanou mikinu, �i ��tek, kter�m lze bezbolestn� ml�tit (tzn.  noviny) a zav�e si o�i. Úkolem kom�r� se stane vys�vat krev �lov�ku. To provedou tak, �e se ho dotknou a pot� se dotknou st�ny (t�m z�skaj� bod). Člov�k se v�ak oh�n� novinami a pokud n�jak�ho kom�ra zas�hne, je do konce kola vyrazen. C�lem kom�r� je dostat co nejv�ce bod� a c�lem �lov�ka je sejmout v�echny kom�ry.\n");
	  printf("DODATE�N� PRAVIDLA: Kom�ri nemohou umr�t, pokud nemaj� ��dn� body.\n");
	}
	
	else if( strcmp(nahledinput,"#06") == 0 || strcmp(nahledinput,"kikikokokeke")==0  ){ /* KIKIKOKOKEKE */	
	  printf("________________________________________________________________________________________________________________ \n");printf("________________________________________________________________________________________________________________ \n");
	    printf("\t \t \t ****************\n");
	    printf("\t \t \t * KIKIKOKOKEKE *\n");
	    printf("\t \t \t ****************\n \n");
	    printf("REKVIZITY: -\n");
	    printf("PRAVIDLA: Hr��i se rozd�l� na tri t�my: KI, KO a KE. Ka�d� z t�m� mus� po celou dobu r�kat jm�no t�mu, ve kter�m pr�v� je. N�sledn� se hr��i sna�� chytit hr��e jin�ch t�m�, proti kter�m jsou siln�, a t�m je konvertovat do sv�ho t�mu. Plat�, �e KI jsou siln� proti KO, KO proti KE a KE proti KI. Vyhrajou ti, kter� skon�� a jsou co nejm�n�kr�t konvertov�ni.\n");	
	}
        else if( strcmp(nahledinput,"#07") == 0 || strcmp(nahledinput,"maso")==0  ){ 
	  printf("________________________________________________________________________________________________________________ \n");printf("________________________________________________________________________________________________________________ \n");
	    printf("\t \t \t ***************\n");
	    printf("\t \t \t *     MASO    *\n");
	    printf("\t \t \t ***************\n \n");
	    printf("REKVIZITY: tenis�k\n");
	    printf("PRAVIDLA: Zd�razn�te, �e v t�to hre hraje ka�d� s�m za sebe. Ur�ete jeden predm�t, napr. tenis�k, kter� se stane �stredn�m predm�tem hry. Hr��i se po zah�jen� hry - vhozen� tenis�ku do davu - sna�� prevz�t kontrolu nad tenis�kem a dotknout se j�m dver� (nebo jin�ho ur�en�ho objektu). H��ek je v tom, �e ka�d� se o to pokou�� s�m za sebe, a tak nastane p�kn� mela.\n");
	}
        else if( strcmp(nahledinput,"#08") == 0 || strcmp(nahledinput,"talism�nek")==0  ){ 
	  printf("________________________________________________________________________________________________________________ \n");printf("________________________________________________________________________________________________________________ \n");
	    printf("\t \t \t ****************\n");
	    printf("\t \t \t *  TALISM�NEK  *\n");
	    printf("\t \t \t ****************\n \n");
	    printf("REKVIZITY: t�k� velk� predm�t (ide�ln� s obl�mi stranami, aby se �lov�k nezranil)\n");
	    printf("PRAVIDLA: Rozd�lte hr��e do minim�ln� tr� stejn� po�etn�ch t�m�. Doprostred hern�ho pole polo�te \' talism�nek\' v podob� velk� kl�dy, �i jin�ho t�k�ho predm�tu. N�sledn� rozd�lte ka�d�mu t�mu stanovi�t� stejn� daleko od talism�nku. C�lem ka�d�ho t�mu je dostat talism�nek do sv�ho stanovi�t�.\n Na hre lze skv�le demonstrovat princip superpozice.\n");
	}
	else if( strcmp(nahledinput,"#09") == 0 || strcmp(nahledinput,"kr�lnidoriamy") == 0 ){
	     printf("\t \t \t ********************* \n");
	     printf("\t \t \t *   KR�L NIDORIAMY  * \n");
	     printf("\t \t \t ********************* \n");
	     printf("REKVIZITY: -\n");
	     printf("PRAVIDLA: Ur�ete n�jak� hrac� pole, jako napr. louka. Pot� rozd�lte hr��e do n�kolika t�m�. Hra prob�h� tak, �e hr��i r�zn� chod� po louce a sna�� se navz�jem zaleh�vat. V�t�z� pot� t�m, kter� m� na konci nejv�ce lid� na vr�ku hromad. Za ka�dou hromadu zalehl�ch lid� tedy dostane bod pouze ten t�m, kter� m� n�koho na vrchu a v�t�z� t�m s nejv�ce body.\n");
	}
      	else if( strcmp(nahledinput,"#10") == 0 || strcmp(nahledinput,"aliby") == 0 ){
	     printf("\t \t \t ************ \n");
	     printf("\t \t \t *   ALIBY  * \n");
	     printf("\t \t \t ************ \n");
	     printf("REKVIZITY: �idle na usazen� vysl�chan�ch\n");
	     printf("PRAVIDLA: Vyberte dva hr��e, kter� se odeberou z doslechu ostatn�ch (treba za dvere). Jejich �kolem je domluvit si spole�n� aliby. Pot� zbytek hr��� po jednom oba vybran� predvol� a narkne je z n�jak�ho trestn�ho �inu (napr. vra�da rychlovarnou konvic�). Vybran�m se pak kladou ot�zky a sleduje se, jak odpov�daj�. C�lem dvou dobrovoln�k� je, aby jejich v�pov�di byly co nejv�ce identick� a sv�d�ili o jejich nevin�. Ostatn� se sna�� je usv�d�it.\n");
	     printf("ALTERNATIVN� PRAVIDLA: Oba vybran� se dohodnou, �e budou popisovat v�kend/dovolenou jednoho z nich a ostatn� h�daj�, kdo ten v�kend za�il. \n");
	}
	  else if( strcmp(nahledinput,"#11") == 0 || strcmp(nahledinput,"improvizace") == 0 ){
	     printf("\t \t \t ******************\n");
	     printf("\t \t \t *   IMPROVIZACE  *\n");
	     printf("\t \t \t ******************\n");
	     printf("REKVIZITY: -\n");
	     printf("PRAVIDLA: C�lem t�to hry je, aby skupina lid� bez jak�koliv predchoz� domluvy nebo pom�cek sehr�la kr�tk� sc�nky. To se m��e zd�t n�ro�n�, ale sc�nky stejn� v�t�inou nemaj� ��dnou �roveň a vtip hry spo��v� v tom, jak� blbost koho napadne. Zde je seznam hern�ch mód�, podle kter�ch se daj� sehr�t sc�nky:\n");
	     printf("NA CO SI DÁT POZOR: Herci mus� b�t �elem k publiku. M�li by tak� mluvit nahlas a preh�n�t sv� gesta. Tak� dejte pozor, aby se do hry zapojil ka�d� a zkuste motivovat introvertn�j�� hr��e.");
	     printf("ALTERNATIVN� PRAVIDLA: \n");
	     printf("\t -VYVOL�VAC� IMPROVIZACE: Na sc�n� je cca. p�ti�lenn� t�m, kter�mu se zad� hern� t�ma (napr. �ernobyl, p�t minut pred v�buchem). Ka�d� z hr��� si pak vybere kl��ov� slovo, kter� se vztahuje k t�matu, ale kter� NEZTV�R�UJE ve hre. N�kdo by si treba mohl vz�t slovo ukl�ze�ka, ale nehr�l by ukl�ze�ku. Hra za�ne jedn�m hr��em na sc�nce, kter� si mus� vymyslet kdo je a co d�l�. Pokud n�kter� hr�� na sc�n� rekne n�jak� kl��ov� slovo, mus� ten hr��, koho je, vstoupit na sc�nu a vymyslet si pro to d�vod a r�ct ho. Pokud je naopak zm�n�no kl��ov� slovo hr��e na sc�n�, mus� ten hr�� odej�t a op�t pro to vymyslet d�vod a r�ct ho. Sc�nka kon�� t�m, �e jeden �lov�k odch�z� a pri odchodu rekne jm�no druh�ho a odejdou oba.\n");
	     printf("\t -TLESKAC� IMPROVIZACE: Na sc�n� za�nou dva lid� rozehr�vat sc�nku a zbyl� sed� jako publikum. Kdokoliv z publika n�sledn� m��e tlesknout, sc�nku zastavit (herci se zmraz�) a nahradit jednoho z herc� (toho, kter� je tam d�le). Mus� v�ak rozehr�t kompletn� jinou sc�nku a zaujmout kompletn� jinou roli. Pozn.: m��e se hodit pravidlo, �e se sc�nka mus� nechat rozehr�t alespo� n�jak� �as, a� por�d v�ichni netleskaj� a je vid�t smysl sc�nky.\n" );
	     printf("\t -�ASOV� IMPROVIZACE: Dva lid� mus� sehr�t tu samou sc�nku, kterou poprv� improvizuj� (t�ma se jim zad�) za minutu, p�l minuty, deset sekund, p�t sekund a sekundu. Na konci sc�nky mus� jeden z nich zemr�t.\n");
	     printf("\t -B�SE�: Herci si sednou vedle sebou na stoli�ky a poporad� r�k� ka�d� jedno slovo. Jejich c�lem je vytvorit b�se�, nebo pr�b�h (vyberte predem).\n");
	     printf("\t -SKr��: Vybere se jeden �lov�k, kter� predst�r�, �e otevre skr�� a vyt�hne z n� predm�t, kter� by cht�l. N�sledn� mus� ten predm�t predv�st pantomimou a publikum se ho sna�� uhodnout. Kdo ho uhodl, vytahuje ze skr�n� pr�t�. \n");
	     printf("\t -PrEB�JEC� IMPROVIZACE: Jeden �lov�k za�ne v poli t�m, �e n�co predvede (napr. skr��, auto, ze�...). N�sledn� dobrovoln�k z publika tleskne a na jevi�ti predvede n�co, co to prebije. Potom dal�� dobrovoln�k tleskne a prebije to... Takto se vytvor� kask�da preb�jec�ch reakc�.\n ");
	     printf("\t -REKLAMACE: Dva lid� se v�ij� do role prodejc� a jin� dva do role nespokojen�ch z�kazn�k�, kter� pri�li reklamovat sv� zbo��. H��ek se schov�v� v tom, �e reklamovan� v�c se ur�� dohromady v publiku a ti, kter� reklamuj� ji neznaj�. Jejich �kolem je tedy prij�t na to, co reklamuj�, ale st�le dodr�ovat roli toho, �e jsou v obchodu a jsou na�tvan� z�klazn�k. Hra kon��, jakmile reklamuj�c� uhodnou reklamovanou v�c.\n");
	}

	  else if( strcmp(nahledinput,"#12") == 0 || strcmp(nahledinput,"fotbika") == 0 ){
	     printf("\t \t \t **************\n");
	     printf("\t \t \t *   FOTBIKA  *\n");
	     printf("\t \t \t **************\n");
	     printf("REKVIZITY: tenis�k, m�stnost\n");
	     printf("PRAVIDLA: Hra se hraje jako vyb�jen� akor�t s t�m rozd�lem, �e m��ek je tenis�k a sm� se pouze kopat. Vybij� se pak pouze v prostoru od chodidel do kolen (v�etn�). U� je jen na V�s, jestli vybika bude vracec� a jestli povol�te chyt�n� m��ku nohou tak, �e ho �lov�k jednozna�n� za�l�pne.\n");
	     printf("ALTERNATIVN� PRAVIDLA:\n");
	     printf("FOTBIKA MASAKR 100 %% EXTREME MILION: Hraje se jako norm�ln� fotbika s t�m rozd�lem, �e hr��i mus� sk�kat po jedn� noze. \n");
	}
 
	  else if( strcmp(nahledinput,"#13") == 0 || strcmp(nahledinput,"komandohopsando") == 0 ){
	     printf("\t \t \t *********************** \n");
	     printf("\t \t \t *   KOMANDO HOPSANDO  * \n");
	     printf("\t \t \t *********************** \n");
	     printf("\t \t \t REKVIZITY: st�l s �idlemi\n");
	     printf("PRAVIDLA: Hra se hraje tak, �e v�ichni sed� u stolu. Princip hry se podob� hre Simon says, co� znamen�, �e se ur�� jeden game master, kter� diktuje ostatn�m, jakou polohu rukou vzhledem ke stolu maj� m�t, av�ak ostatn� to maj� prov�st jen pokud pred t�m rekne KOMANDO. Ve hre jsou tri polohy rukou:\n \t -HOPSANDO: hr��i maj� ruce ve tvaru pistole a ťukaj� do stolu \n \t -DUTO: hr��i se dot�kaj� stolu �pi�kami prst� av�ak ne dlan� \n \t -PLOCHO: hr��i maj� nata�en� prsty a dot�kaj� se dlan� stolu \n Game master si tedy s rukama d�l�, co chce, a r�k� ostatn�m pr�kazy. Hr�� vypadne, pokud nespln� pr�kaz, pred kter�m je KOMANDO nebo pokud spln� pr�kaz pred kter�m nen� KOMANDO. Vyhr�v� ten, kdo z�stane jako posledn�. Ten je v pr�t�m kole gamemaster.\n ");
	     printf("ALTERNATIVN� PRAVIDLA: po konci kola m��e v�herce vymyslet novou polohu rukou, se kterou se bude hr�t, a pojmenovat ji\n");
	}
	  else if( strcmp(nahledinput,"#14") == 0 || strcmp(nahledinput,"elektrika") == 0 ){
	     printf("\t \t \t ******************** \n");
	     printf("\t \t \t *     ELEKTRIKA    * \n");
	     printf("\t \t \t ******************** \n");
	     printf("REKVIZITY:dobre uchopiteln� predm�t, mince, st�l s �idlemi\n");
	     printf("PRAVIDLA: Utvor� se dva stejn� po�etn� t�my lid�, kter� se posad� naproti sob� okolo stolu a chytnou se za ruce. K jednomu z �el stolu se posad� vhazova� a ke druh�mu se postav� stoli�ka, na kterou se polo�� jeden dobre uchopiteln� predm�t (fla�ka s vodou, petangov� koule aj.). Oba hr��i, kter� maj� k predm�tu nejbl�e, k n�mu mus� m�t stejn� daleko. Hr��i nejbl�e ke vhazova�i se na n�j d�vaj�, ostatn� se mus� d�vat sm�rem k predm�tu. Hra prob�h� tak, �e vhazova� hod� minc� a kdy� padne pana, pote�e elektrika, kdy� ne, tak nepote�e. Jakmile te�e elektrika, mus� ti, co se d�vaj� na minci poslat stisknut�m ruky sign�l ostatn�m z t�mu, kter� si ho predaj�. A� sign�l dojde k posledn�mu �lov�ku, mus� uchopit predm�t. Ten t�m, kter� uchop� predm�t, dostane bod a v�ichni z t�mu se posunou o jedno m�sto doprava. Pokud t�m chytne fla�ku a nete�e elektrika, posune se t�m opa�n�. Hra kon�� t�m, �e se jeden t�m vystr�d� na v�ech pozic�ch (jednou nebo v�cekr�t).\n");
	}

      	  else if( strcmp(nahledinput,"#15") == 0 || strcmp(nahledinput,"cinka�ka") == 0 ){
	     printf("\t \t \t ******************* \n");
	     printf("\t \t \t *     CINKA�KA    * \n");
	     printf("\t \t \t ******************* \n");
	     printf("REKVIZITY: tri mince s pokud mo�no r�znou velikost�, st�l\n");
	     printf("PRAVIDLA: Hr��i se rozd�l� na dva t�my a sednou si proti sob� ke stolu. Hra prob�h� tak, �e t�m, kter� je na rad�, si tajn� mezi sebou pod stolem pod� mince a pot� polo�� lokty na st�l a zavre p�sti, aby ne�lo vid�t, kdo m� mince. V�ichni najednou n�sledovn� bouchnou rukama o st�l tak, aby mince z�staly nevid�ny a prikryty. Druh� t�m m� 4 pokusy na to, aby odhalil, kde jsou mince t�m, �e odkryje libovolnou ruku. Lokaci mince lze ur�it pomoc� zvuku, kter� vyd�vaj� mince pri bouchnut� o st�l.\n");
	     printf("POZN.: V t�mu se lid� hodn� h�daj�, tak�e se vyplat� ur�it jednoho z�stupce a jedin� on m��e ur�it, kterou ruku m� protit�m nadzvednout.\n ");
	} 

      	  else if( strcmp(nahledinput,"#16") == 0 || strcmp(nahledinput,"pa�er�k") == 0 ){
	     printf("\t \t \t ***************** \n");
	     printf("\t \t \t *    PA�ER�K    * \n");
	     printf("\t \t \t ***************** \n");
	     printf("REKVIZITY: provaz, predm�ty, kter� se lehce daj� skr�t na �lov�ku\n");
	     printf("PRAVIDLA: Hr��i se rozd�l� na dva t�my - celn�ky a pa�er�ky (celn�k� je m�n� ne� pa�er�k�, pom�r zhruba 3:2). Provazem se ohrani�� kruh s polom�rem cca. 2 metry, kter� bude predstavovat zahrani�� pro pa�er�ky. Ur�� se je�t� �zem� kolem zahrani��, kter� predstavuje celnici, a kter� je velk� a� 50 metr�. Úkolem pa�er�k� je mimo celnici se tajn� smluvit, u n�jak�ho pa�er�ka schovat pa�ovan� predm�t a onen predm�t propa�ovat do zahrani��. Sta�� tedy, aby se �lov�k i s predm�tem dostali do zahrani�� a pa�er�ci vyhraj�. Celn�ci vyhraj�, kdy� chyt� pa�er�ka s predm�tem, nebo uplyne predem stanoven� limit. Pokud je pa�er�k v celnici, mohou ho celn�ci chytit a pro�acovat (�acovat mohou jak dlouho cht�j�, klidn� i nemusej�). Pokud se celn�k dotkne pa�er�ka a nic nenajde, mus� se pa�er�k vr�tit zp�t do mimo celnici a zahrani��. Pokud celn�ci chyt� pa�er�ka a najdou predm�t, pa�er�ci prohr�li.\n");
	}

	 else if( strcmp(nahledinput,"#17") == 0 || strcmp(nahledinput,"evilmultitasking") == 0 ){
	     printf("\t \t \t *************************** \n");
	     printf("\t \t \t *    EVIL MULTITASKING    * \n");
	     printf("\t \t \t *************************** \n");
	     printf("REKVIZITY: tri a v�ce tenis�k�\n");
	     printf("PRAVIDLA: Hr��i se postav� do kruhu a h�z� si mezi sebou tenis�ky. M�nusov� bod dostane ten, kdo tenis�k nechyt�, nebo ho hod� tak, �e nejde chytit. Taky ho v�ak dostane ten, kdo m� u sebe v�c ne� jeden tenis�k najednou. Vyhr�v� ten, kdo m� nejm�n� m�nusov�ch bod� na konci hry. Smysl t�to hry spo��v� v tom, �e se hr��i spiknou proti jin�m hr���m a hod� mu n�kolik tenis�k� najednou a on mus� reagovat rychle.\n");
	}  
	else if( strcmp(nahledinput,"#18") == 0 || strcmp(nahledinput,"pl�ca�ka") == 0 ){
	     printf("\t \t \t ***************** \n");
	     printf("\t \t \t *   PL�CA�KA    * \n");
	     printf("\t \t \t ***************** \n");
	     printf("REKVIZITY: - \n");
	     printf("PRAVIDLA: Utvor� se dv� rady hr���, kter� se postav� naproti sob� ve vzd�lenosti cca. 10 metr�. Hra prob�h� tak, �e na str�da�ku proti sob� rady pos�laj� jednoho �lov�ka. Vyslanec prijde k rad� lid�, kter� mus� pred sebe nat�hnout ob� ruce dlan�mi nahoru. Vyslanec pot� mus� pl�cnout tri dlan� z druh� rady. Jakmile pl�cne tret�, stane se jeho c�lem dob�hnout za svoji radu a c�lem pl�nut�ho se stane se ho dotknout. Komu se c�l podar�, ten konvertuje toho druh�ho do sv� rady. Hra skon��, a� zbyde jen jedna rada (nebo tak, �e zbyde jen �lov�k se dv�ma rukama, kter�ho nebude moci druh� rada pl�cnout, a tak prohraje).\n");
	}

	  else if( strcmp(nahledinput,"#19") == 0 || strcmp(nahledinput,"tramvaj") == 0 ){
	     printf("\t \t \t ********************************** \n");
	     printf("\t \t \t *   TRAMVAJ / HOR�C� MRAKODRAP   * \n");
	     printf("\t \t \t ********************************** \n");
	     printf("REKVIZITY: lano \n");
	     printf("PRAVIDLA: Utvorte kruh z lana, do kter�ho si stoupnou v�ichni hr��i. Je to hor�c� mrakodrap, ze kter�ho nen� �niku. Na�test� pril�t� vrtuln�k, ale v nem je m�sto pouze na jednoho hr��e. Hr��i se tedy sna�� vytla�it ostatn� z kruhu, aby vrtuln�k zachr�nil pr�ve je.\n");
	     printf("POZN.: Ur�ete jasne hranici vypadnut� z mrakodrapu, aby nenastaly sporn� situace. Napr. obe nohy ven z kruhu, polovina tela... M��ete tak� ur�it soudce, kter� bude nad hrou dohl�et a sporn� pr�pady rozhodovat.\n");
	  }


	  else if( strcmp(nahledinput,"#20") == 0 || strcmp(nahledinput,"australsk�fotbal") == 0 ){
	     printf("\t \t \t ************************ \n");
	     printf("\t \t \t *   AUSTRALSK� FOTBAL   * \n");
	     printf("\t \t \t ************************* \n");
	     printf("REKVIZITY: tenis�k\n");
	     printf("PRAVIDLA: Hr��i se postav� do kruhu (=na obvod pomysln� kru�nice) �elem ven a tak, aby se dot�kali nohama. Potom se sh�bnou, aby se koukali mezi rozkro�en�ma nohama. Jejich rozkro�en� nohy jsou branky. Dovnitr se hod� m�� a hr��i se sna�� prohodit m�� brankami ostatn�ch. Pokud hr��i nekdo prohod� m�� mezi nohama, nebo se hr�� narovn�, ztr�c� jednu ruku, a kdy� nem� ruku, tak vypad�v�. Hr��i nesm� str�let na lidi tesne vedle sebe, tak�e vyhr�vaj� posledn� tri lid�.\n");

	  }
  
	else{
	printf("Toto ID neexistuje\n");
	}


}
