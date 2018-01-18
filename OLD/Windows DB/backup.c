#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>
#include <locale.h>


/*       TODO: - responsivní tagy u každé hry */
/* Èeské znaky */
int aa=160;int cz=159;int ii=161;int uu=163;int ee=130;int ie=216;int rz=253;int uk=133;int oo=162;int sz=231;int tj=156;int zs=167 ;int yy= 236;
int II = 214; int AA=181;int EE=144;int TJ=155;int ZS=166;int IE=183;int SZ=230;int RZ=252;int CZ=428;

int filtr(int bypass); int c;
char nahled(char boi[20]);


int filtr(int bypass); int c;
char nahled(char nahledinput[20]);

char input [20];

int main() {
	setlocale(LC_ALL, "");
/*Možnosti: */	 bool FAE= 1;


		/* Startup screen */
printf("      __/ ___ _    ___ _         _    __            ___ __     _/    _      ___      _   /   __ ___        _  _  \n");
printf("  \\  / |   | |_   | | |_   \\  / |_   (_  |/  /\\  | | | (_  |/ |_    | \\  /\\  |  /\\  |_)  /\\   /  |    |_| |_ |_) \n");
printf("   \\/ _|_  | |_ \\_| | |_    \\/  |_   __) |\\ /--\\ |_| | __) |\\ |_    |_/ /--\\ | /--\\ |_) /--\\ /_ _|_   | | |_ | \\ \n");
printf("\nZadejte èíslo, nebo jméno hry, kterou chcete zobrazit.\n");   printf("Nejste-li si jisti, zkuste napsat help\n");
		/*DostÁ váníÂ­ inputu od uživatele */
LOOP:scanf("%s", input);    int g;
while ( (g = getchar()) != EOF && g != '\n') { }
printf("Napsali jste: %s \n", input);

if(strcmp(input, "help") == 0 || strcmp(input, "pomoc") == 0){ 	/*nápovìda*/
	printf("Seznam pøíkazù:\n help  --> pomoc\n konec --> ukonèit program\n hry   --> zobrazí seznam všech her\n filtr --> vyhledávání \n cisto --> vyèistí obrazovku\n");   goto LOOP;
} 
if(strcmp(input, "konec") == 0 || strcmp(input, "k") == 0){  /*ukonèeníÂ­ programu*/
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

if(strcmp(input, "filtr") == 0 || strcmp(input, "fl") == 0){  /*odkaz na vyhledávacíÂ­ funkci */
	filtr(0);
	goto LOOP;
}
if(strcmp(input, "hry") == 0 || strcmp(input, "ls") == 0){  /*zobrazíÂ­ seznam vŠech her */
	filtr(1);
	goto LOOP;
}

/* Zobrazování her podle ID */
if(strncmp(input,"#",1)==0){
   nahled(input);
	goto LOOP;
}
/* Zobrazování her podle názvu */
if(strcmp(input,"dementball")== 0 || (strcmp(input,"najelena")== 0 ) || (strcmp(input,"chaos")== 0 ) || strcmp(input,"indiánskýfotbal") == 0 || (strcmp(input,"komár") == 0 ) || strcmp(input,"kikikokokeke") == 0  || strcmp(input,"maso") == 0 || strcmp(input,"talismánek") == 0 || strcmp(input,"králnidoriamy") ==0 || strcmp(input, "aliby") == 0 || strcmp(input,"improvizace") == 0 || strcmp(input,"fotbika") == 0 || strcmp(input,"komandohopsando") == 0 || strcmp(input,"elektrika") == 0 || strcmp(input,"cinkaèka") == 0 || strcmp(input,"paŠerák") == 0 || strcmp(input,"evilmultitasking") == 0 || strcmp(input,"plácaèka") == 0 || strcmp(input,"tramvaj") == 0 || strcmp(input,"australskýfotbal") == 0 ) {
   nahled(input);
	goto LOOP;
}

if(strcmp(input,"autor") == 0 || strcmp(input, "author") == 0 ){    /* o autorovi  			18+10 */
printf("		    _____________________________ \n");
printf("		   |                             |\n");
printf("		   |    SKTDB 1.1    30.7.2017   | \n");
printf("		   |                             |\n");
printf("		   |       JINDØICH DUŠEK        |\n");
printf("		   |_____________________________|\n \n");
}


else{  /* Když zadaj nìco náhodnýho */
	printf("Toto není validní pøíkaz, zkuste to znovu\n");

}
	goto LOOP;
	END : return 0;
}

int filtr(int bypass){ /* funkce na vytvoøení filtrovaného seznamu */
	char temp[BUFSIZ];int mint = -1; int maxt = 120; int t; char input[6];
		/* Symboly pro filtry  */
	bool h=false; bool z=false; bool vyzv=false;
	bool beh = false; bool b=false; bool p=false; bool m=false; bool sp=false;
	bool ch=false; bool l=false;bool lk=false;bool kl=false; bool vlak =false;
	bool zsch=false; bool psch=false; bool ksch=false; bool vsch=false;
	bool bez=false; bool srek=false; bool nic=false;
	bool noc=false;

	/* ptací se fáze*/
	if(bypass == 0){
FILTROVANI:printf("Zadejte vaše požadované vyhledávací kritéria (nebo help pro zobrazení možných kritérií):\n");
	scanf("%s", input);    int c; 			while ( (c = getchar()) != EOF && c != '\n') { }
		/*  ZadáváníÂ­ kritériíÂ­  */
		/* normálníÂ­ kritéria */
		if(strcmp(input, "h") == false){ h=1; goto FILTROVANI;}else if(strcmp(input, "z") == false){ z=1; goto FILTROVANI;}else if(strcmp(input, "vyzv") == false){ vyzv=1; goto FILTROVANI;}
		else if(strcmp(input, "b") == false){ b=1; goto FILTROVANI;}else if(strcmp(input, "p") == false){ p=1; goto FILTROVANI;}else if(strcmp(input, "m") == false){ m=1; goto FILTROVANI;}else if(strcmp(input, "sp") == false){ sp=1; goto FILTROVANI;}
		else if(strcmp(input, "ch") == false){ ch=1; goto FILTROVANI;}else if(strcmp(input, "l") == false){ l=1; goto FILTROVANI;}else if(strcmp(input, "lk") == false){ lk=1; goto FILTROVANI;}else if(strcmp(input, "kl") == false){ kl=1; goto FILTROVANI;}else if(strcmp(input, "vlak") == false){ vlak=1; goto FILTROVANI;}
		else if(strcmp(input, "zsch") == false){ zsch=1; goto FILTROVANI;}else if(strcmp(input, "psch") == false){ psch=1; goto FILTROVANI;}else if(strcmp(input, "ksch") == false){ ksch=1; goto FILTROVANI;}else if(strcmp(input, "vsch") == false){ vsch=1; goto FILTROVANI;}
		else if(strcmp(input, "bez") == false){ bez=1; goto FILTROVANI;}else if(strcmp(input, "srek") == false){ srek=1; goto FILTROVANI;}else if(strcmp(input, "nic") == false){ nic=1; goto FILTROVANI;}
		else if(strcmp(input, "noc") == false){ noc=1; goto FILTROVANI;}

		/* ukonèení */
		else if(strcmp(input, "konec") == 0 || strcmp(input, "k") == 0) {
			printf("Zpìt do hlavní nabídky \n");
			goto BACK;
		}
		/*  èas */
		else if(strcmp(input, "cas") == 0 || strcmp(input, "èas") == 0){
			printf("Zadejte minimální èas v minutách:");
			if (fgets(temp, sizeof(temp), stdin) != NULL){
				mint = atoi(temp);
			}
			printf("Zadejte maximální èas v minutách:");
			if (fgets(temp, sizeof(temp), stdin) != NULL){
				maxt = atoi(temp);
			}	goto FILTROVANI;
		}
		/* pøibližný èas */
		else if(strcmp(input, "pèas") == 0 || strcmp(input,"pcas") == 0 ){
			printf("Zadejte pøibližný èas hry v minutách:");
			if (fgets(temp, sizeof(temp), stdin) != NULL){
			         mint = atoi(temp) - 5;
				 maxt = atoi(temp) + 5;
				 goto FILTROVANI;
			}  
		}

	/*  Ostatní pøíkazy  */
		if(strcmp(input, "konec") == 0 || strcmp(input, "k") == 0) {
			printf("Zpìt do hlavní nabídky \n");
			goto BACK;
		}
		else if(strcmp(input, "help") == 0 || (strcmp(input, "ls") == 0)){
			printf("Toto jsou dostupná kritéria: \n");
			printf("hry (h), závody (z), výzvy (vyzv)\n");
			printf("vyèerpávající - bìhaèky (beh), brutální a nároèné (b), pøemýŠlecí (m), pohodové (p), speciální (sp) \n");
			printf("za pochodu (ch), do lesa (l), na louku nebo plácek (lk), do místnosti (kl), do vlaku (vlak)\n");
			printf("na zaèátek schùzky (zsch), doprostøed schùzky (psch), na konec schùzky (ksch), na ven na schùzce (vsch) \n");
			printf("bez speciálních rekvizit (bez), s rekvizitami (srek), bez èehokoliv (nic) \n");
			printf("noèní hry (noc) \n");
			printf("PRO HLEDÁNÍ NAPIÅ TE: hledat \n");
			goto FILTROVANI;
		}
		else if(strcmp(input, "hledat") == 0 || strcmp(input, "hl") == 0) {
			goto ZOBRAZ;
		}
		else{
			printf("Toto není validní pøíkaz, zkuste to znovu\n");
				goto FILTROVANI;
		}
	}

	if(bypass ==1){ /* Zobrazí celý seznam  */
		bool h=1; bool z=1;bool vyzv=1; bool beh = 1; bool b=1;bool p=1;bool m=1;bool sp=1;bool ch=1;bool l=1;bool lk=1;bool kl=1;bool zsch=1;bool psch=1;bool ksch=1;bool vch=1;bool noc=1;
		goto ZOBRAZ;
	}

	/* Procesovací fáze */
	// deklarace promìnných vŠech her
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
		if(b == true){printf("BRUTÁLNÍCH ");} if(m == true){printf("PØEMÝŠLECÍCH ");} if(p == true){printf("POHODOVÝCH ");} if(sp == true){printf("SPECIÁLNÍCH ");}
		if(noc == true){printf("NOÈNÍCH ");} printf("HER "); if(beh == true){printf(" \' BÌHAÈEK \'");}
		if(ch == true){printf("ZA POCHODU ");} if(l == true){printf("DO LESA ");} if(lk == true){printf("NA LOUKU ");} if(kl == true){printf("DO MÍSTNOSTI ");} if(vlak == true){printf("DO VLAKU ");}
		if(zsch == true){printf("NA ZAÈÁTEK SCH. ");} if(psch == true){printf("DOPROSTØED SCH. ");} if(ksch == true){printf("NA KONEC SCH. ");} if(vsch == true){printf("NA VEN NA SCH. ");}
		if(mint != -1){ printf("TRVAJÍCÍCH OD %dmin DO %dmin", mint, maxt);} printf("<<< \n");
		if(bez == true){printf("BEZ SP. REKVIZIT ");} if(srek == true){printf("S REKVIZITAMI ");} if(nic == true){printf("NA KTERÉ NIC NEPOTØEBUJETE ");}

	/* èasový filtr, který nejdøív hodíÂ­vŠechny hry s ok èasem true */
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
		/* V této fázi se vyhodí z filtru vŠechny hry, které nesplÅˆují požadavky. */
	if(h == true){ /* hra */
           	  ;
		}
	if(z == true){ /* závod */
		dementball = false; najelena=false; chaos =false;indball = false; kikikokokeke = false; aliby = false; kralnidoriamy = false;
	}
	if(beh == true){ /* bìhaèka */
	dementball = false; najelena=false; chaos =false;indball = false;komar = false; kikikokokeke = false; aliby = false; impro = false; komhops = false; elektrika = false; cink = false; evmul = false; ausfot = false;
	}
	if(vyzv == true){ /* výzva */
		dementball = false; najelena=false; chaos =false;indball = false;komar = false; kikikokokeke = false; maso = false; talismanek = false; aliby = false; kralnidoriamy = false; impro = false; fotbika = false; komhops = false; elektrika = false; cink = false; paserak = false; evmul = false; placacka = false; tramvaj = false; ausfot = false;
	}
	if(b == true){/* brutální */
		dementball = false; najelena=false;indball = false;indball = false;komar = false; kikikokokeke = false; aliby = false; impro = false; fotbika = false; komhops = false; elektrika = false; cink = false; paserak = false; evmul = false; placacka = false; ausfot = false;

	}
	if(p == true){/* pohodový */
		chaos =false;indball = false; kikikokokeke = false; maso = false; talismanek = false; kralnidoriamy = false; fotbika = false; elektrika = false; cink = false; paserak = false; evmul = false; tramvaj = false; ausfot = false;
	}
	if(m == true){ /* pøemýŠlecí */
		dementball = false; najelena=false; chaos =false;indball = false;komar = false; kikikokokeke = false; maso = false; talismanek = false; kralnidoriamy = false; fotbika = false; elektrika = false; paserak = false; evmul = false; placacka = false; tramvaj = false; ausfot = false;
	}
	if(sp == true){ /* speciální  */
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
	if(kl == true){ /* do místnosti */
		indball = false; kikikokokeke = false; talismanek = false; kralnidoriamy = false; paserak = false; evmul = false; placacka = false; tramvaj = false;
	}
	if(vlak == true){ /* ve vlaku */
		dementball = false; najelena=false; chaos =false;indball = false;komar = false; kikikokokeke = false; maso = false; talismanek = false; kralnidoriamy = false; impro = false; fotbika = false; komhops = false; elektrika = false; cink = false; paserak = false; evmul = false; placacka = false; tramvaj = false; ausfot = false;

	} 
	if(zsch == true){ /* zaèátek schùzky */
		chaos =false;indball = false; kikikokokeke = false; aliby = false; kralnidoriamy = false; paserak = false; evmul = false; placacka = false; tramvaj = false;

	}
	if(psch == true){ /* doprostøed schùzky */
		 ;

	}
	if(ksch == true){ /* konec schùzky */
		dementball = false; najelena=false; chaos =false;indball = false; kikikokokeke = false; maso = false; talismanek = false; aliby = false; kralnidoriamy = false; paserak = false; evmul = false; placacka = false; tramvaj = false; ausfot = false;
	}
	if(vsch == true){ /* na ven na schùzku */
		dementball = false; chaos =false;komar = false; maso = false; aliby = false; impro = false; fotbika = false; komhops = false; elektrika = false; cink = false; ausfot = false;
	}
	if(bez == true){ /* bez speciálních rekvizit */
		dementball = false;indball = false;komar = false; maso = false; talismanek = false;
	}
	if(srek == true){ /* s rekvizitami */
		najelena=false; chaos =false;komar = false; kikikokokeke = false; aliby = false; kralnidoriamy = false; impro = false; komhops = false; placacka = false;
	}
	if(nic == true){ /* bez nièeho */
		dementball = false; najelena = false;chaos=false;indball = false; maso = false; talismanek = false; fotbika = false; elektrika = false; cink = false; paserak = false; evmul = false; tramvaj = false; ausfot = false;

	}
	if(noc == true){ /*noèní hry */
		dementball = false; najelena=false; chaos =false;indball = false;komar = false; kikikokokeke = false; maso = false; talismanek = false; aliby = false; kralnidoriamy = false; impro = false; fotbika = false; komhops = false; elektrika = false; cink = false; paserak = false; evmul = false; placacka = false; tramvaj = false; ausfot = false;

	}




		/* Zobrazovací fáze (2 taby a mezera)*/
		int counter = 1;
if(dementball == 1   ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#01-DEMENTBALL\n"); counter++;}
if(najelena == 1     ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#02-NA JELENA\n" ); counter++;}
if(chaos == 1        ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#03-CHAOS\n" ); counter++;}
if(indball == 1      ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#04-INDBALL\n" ); counter++;}
if(komar == 1        ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#05-KOMÁR\n" ); counter++;} 
if(kikikokokeke == 1 ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#06-KIKIKOKOKEKE\n" ); counter++;} 
if(maso == 1         ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#07-MASO\n" ); counter++;}
if(talismanek == 1   ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#08-TALISMÁNEK\n" ); counter++;}
if(kralnidoriamy == 1){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#09-KRÁL NIDORIAMY\n"); counter++;}
if(aliby == 1        ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#9-ALIBY\n" ); counter++;} 
if(impro == 1        ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#11-IMPROVIZACE\n" ); counter++;} 
if(fotbika == 1      ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#12-FOTBIKA\n" ); counter++;} 
if(komhops == 1  ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#13-KOMANDO HOPSANDO\n" ); counter++;} 
if(elektrika == 1    ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#14-ELEKTRIKA\n" ); counter++;} 
if(cink == 1         ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#15-CINKAÈKA\n" ); counter++;} 
if(paserak == 1      ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#16-PAŠERÁK\n" ); counter++;} 
if(evmul == 1    ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#17-EVIL MULTITASKING\n"); counter++;} 
if(placacka == 1     ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#18-PLÁCAÈKA\n" ); counter++;} 
if(tramvaj == 1      ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#19-TRAMVAJ\n" ); counter++;} 
if(ausfot == 1       ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#20-AUSTRALSKÝ FOTBAL\n" ); counter++;} 
		      BACK:return 0;
}
/* Zde jsou pouze zápisy her */

char nahled(char nahledinput[20]){
	if(strcmp(nahledinput,"#01")==0 || strncmp(nahledinput,"dementbal", 9)==0){ /* dementball */
		printf("________________________________________________________________________________________________________________ \n");printf("________________________________________________________________________________________________________________ \n");
		printf("   _____                                        _   __               __   __ 	 	 \n");
		printf(" |_   _`.         10 minut                    / |_[  |             [  | [  | 		 HRA\n");
  		printf("   | | `.\\  .---.  _ .--..--.  .---.  _ .--. `| |-'| |.--.   ,--.   | |  | | 		 POHODOVÃ\n");
  		printf("   | |  | |/ /__\\ [ `.-. .-. |/ /__\\\\[ `.-. | | |  | '/'`\\\\  '_\\ :  | |  | |		 DO MÍSTNOSTI\n");
 		printf("  _| |_.' /| \\__., | | | | | || \\__., | | | | | |, |  \\__/ |// | |, | |  | |  	NA ZAÈÁTEK SCH., DOPROSTØED SCH.\n");
		printf(" |______.'  '.__.'[___||__||__]'.__.'[___||__]\\__/[__;.__.' \\'-;__/[___][___] 	   	 S REKVIZITAMI\n \n");
		printf("REKVIZITY: Tenisák, klubko vlny, nebo jiný malý míèek                ,-'''-,   "); printf("OMEZENÝ: -míèe se lze dotýkat  \n");
        printf("PRAVIDLA: Základ je podobný jako vybíjené - cílem je trefit         /\\     /\\  "); printf("jen jednou rukou najednou\n");
        printf("ostatní míèem a nebýt sám trefen (kdo je trefen vypadl).            | |   | |  "); printf("-míè se odpaluje JEN nadhozením \n");
        printf("Ježto se však hra jmenuje Dementball, mají hráèi urèité omezení.    \\/     \\/  "); printf("jednou rukou a ùderem druhou \n");
        printf("Roleplay 'dementù' je vítán. Kdo vyhraje, má titul vrchního dementa. '-...-'"); printf("-musíte se dotýkat 3 konèetinami zemì \n \n");
		printf("ALTERNATIVNÍ PRAVIDLA: Mùžete podle potøeby zmírnit omezení. Napø. ještì horší omezení pohybu a odpalování míèe \npouze hlavou. \n");
		printf("POZN.: U nás celkem populární hra. Je tøeba hru urychlit, aby posledních pár hráèù nebojovalo zbyteènì dlouho a lidi \nse nenudili. Komentáø z role sportovního komentátora mùže být vtipný. \n");
	}
	else if(strcmp(nahledinput,"#02")==0 || strcmp(nahledinput,"najelena")==0){
	printf("________________________________________________________________________________________________________________ \n");printf("________________________________________________________________________________________________________________ \n");
	printf(" __    _  _______        ___  _______  ___      _______  __    _  _______  \n");
	printf("|  |  | ||   _   |      |   ||       ||   |    |       ||  |  | ||   _   |  HRA        \n");
	printf("|   |_| ||  |_|  | 10   |   ||    ___||   |    |    ___||   |_| ||  |_|  |  POHODOVÁ\n");
	printf("|       ||       |minut |   ||   |___ |   |    |   |___ |       ||       |  DO MÍSTNOSTI\n");
	printf("|  _    ||   _   |   ___|   ||    ___||   |___ |    ___||  _    ||   _   |  NA ZAÈÁTEK SCH., DOPROSTØED SCH.\n" );
	printf("| | |   ||  | |  |  |       ||   |___ |       ||   |___ | | |   ||  | |  |  BEZ SPEC. REKVIZIT\n");
	printf("|_|  |__||__| |__|  |_______||_______||_______||_______||_|  |__||__| |__|  \n \n");
	printf("REKVIZITY:Šátek na zavázání oèí, stùl                                                     (             )  \n");
 	printf("PRAVIDLA:Jeden èlovìk je myslivec, ostatní jsou jeleni. Cílem myslivce je dotykem chytit   `--(_   _)--'     \n");
	printf("a vyøadit jeleny a jeleni se snaží se mu vyhnout a zùstat poslední. Jeleni i myslivci se        Y-Y          \n");
    printf("mohou pohybovat pouze v lese, což je stùl, kterého se musí všichni stále dotýkat. Stolu        /@@ \\         \n"); 
    printf("se lidé mohou dotýkat pouze zeshora.                                                          /     \\          \n");
    printf("ALTERNATIVNÍ PRAVIDLA: zakázat/povolit hýbání stoly.                                          `--'.  \\              ,\n");
    printf("                                                                                                   |   `.__________/)     \n");
	}

	else if(strcmp(nahledinput,"#03")==0 || strcmp(nahledinput,"chaos")==0){
		printf("________________________________________________________________________________________________________________ \n");printf("________________________________________________________________________________________________________________ \n");
		printf("          _             _       _    _                   _            _                       \n");
		printf("        /\\ \\           / /\\    / /\\ / /\\                /\\ \\         / /\\               HRA   \n");
		printf("       /  \\ \\         / / /   / / // /  \\   30 min     /  \\ \\       / /  \\                NÁSILNÁ   \n");
		printf("      / /\\ \\ \\       / /_/   / / // / /\\ \\            / /\\ \\ \\     / / /\\ \\__         DO MÍSTNOSTI\n ");
		printf("    / / /\\ \\ \\     / /\\ \\__/ / // / /\\ \\ \\          / / /\\ \\ \\   / / /\\ \\___\\    DOPROSTØED SCH.\n ");
		printf("   / / /  \\ \\_\\   / /\\ \\___\\/ // / /  \\ \\ \\        / / /  \\ \\_\\  \\ \\ \\ \\/___/  BEZ SPEC. REKVIZIT\n");
		printf("   / / /    \\/_/  / / /\\/___/ // / /___/ /\\ \\      / / /   / / /   \\ \\ \\                 \n");
		printf("  / / /          / / /   / / // / /_____/ /\\ \\    / / /   / / /_    \\ \\ \\   ROLE:          \n");
		printf(" / / /________  / / /   / / // /_________/\\ \\ \\  / / /___/ / //_/\\__/ / /  -Julie: zpívá dojemnì pod oknem  \n");
		printf("/ / /_________\\/ / /   / / // / /_       __\\ \\_\\/ / /____\\/ / \\ \\/___/ / -Romeo: snaží se dostat k Julii           \n");   
		printf("\\/____________/\\/_/    \\/_/ \\_\\___\\     /____/_/\\/_________/   \\_____\\/  -Matka: brání Romeovi, aby se dostal k Julii\n");
		printf("                                                                        -Den: snaží se, aby bylo rozsvíceno\n");
	printf("REKVIZITY:papírky s názvy rolí a nìco, z èeho mohou hráèi losovat (klobouk atd.) \n");
        printf("PRAVIDLA:Ze zaèátku se všem rozdají role, které budou plnit.  .( * .   -Noc: snaží se, aby bylo zhasnuto\n");
    	printf("Ujistìte se, že všichni svoje role chápou a potom    	   .*  .  ) .  -Antigrav. prasátko: snaží se být co nejvýš\n");
   		printf("mùžete hru odstartovat. Cílem každého je plnit svùj ùkol   . . POOF .* . -Permoník: staví barikádu skrz klubovnu\n");
    	printf("do konce èasového limitu. Na konci každého kola udìlejte    '* . (  .) ' -Policista: udržuje poøádek; nesnese barikády \n");
     	printf("zhodnocení, kde každý øekne, kdo byl a jak mu to šlo. 	      ` ( . *   -Komik: nìkoho si vybere a vypráví mu vtipy \n");                         
     	printf("Jeden èlovìk mùže mít i více rolí. Role se nesmí nikomu øíkat.          dokud se nezasmìje  \n");  
		printf("POZN.: Lidé se mohou pøíliš vžít do své role. Pøipravte se proto       -Dítì: zlobí a za každou cenu nesmí dostat dárek\n");
		printf("na pøípadné pranice. Také si nechte po høe èas na úklid.              -Santa: dává dárky lidem a musí 1 dát i dítìti\n");
		printf("Role mùžete rozdávat náhodnì, ale pøípadnì výbìr trochu ovlivnìte.    -Král: rozkazuje lidem a oni ho musí poslechnout\n");
		printf("Pøi høe se mùže znièit napø. nábytek, dejte si na toto pozor.       když neposlechnou, dohlédnìte, aby udìlali 10 klikù\n");
	}
	else if(strcmp(nahledinput,"#04")==0 || strcmp(nahledinput,"indiánskýfotbal")==0){
	  		printf("________________________________________________________________________________________________________________ \n");printf("________________________________________________________________________________________________________________ \n");
	  printf("\t \t \t ****************** \n");
	  printf("\t \t \t *INDIÁNSKÝ FOTBAL* \n");
	  printf("\t \t \t ****************** \n \n");
	  printf("REKVIZITY: Provaz, dva lehce uchopitelné pøedmìty (petangové koule, flašky s vodou atp.)\n");
	  printf("PRAVIDLA: Hráèi se rozdìlí do dvou stejnì poèetných týmù. Pøipravte hrací pole, které je vytvoøeno ze dvou polí oddìlených lanem. Do každého s polí položte na zem ve vzdálenosti cca. 20 krokù lehce uchopitelný pøedmìt (tj. lahev s vodou,  klacek v zemi, petangová koule...). Cílem každého z týmù je uchopit pøedmìt prothráèského týmu. Pokud se toto nìkterému z týmù povede, ukonèí se kolo, tým dostane bod a vše se vrátí zpìt do pùvodního stavu. Háèek spoèívá v tom, že pokud se nìkterý z hráèù nachází na poli cizího týmu, mùže ho druhý tým zmrazit dotykem. Zmražený èlovìk se nesmí hýbat a je rozmražen dotykem hráèe ze svého týmu. \n ");
	  printf("DODATEÈNÁ PRAVIDLA: Pokud se dva nebo více lidí dotýkají, zmraženi jsou všichni, pokud se nepøítel dotkne by jen jednoho z nich. \n Pokud se dva lidi dotknou a jsou oba na své polovinì, vymìní si místa a jsou oba zmraženi (toto pravidlo nemusíte využít).\n");
	  printf("ALTERNATIVNÍ PRAVIDLA: Odmrazuje se podlezením nohou (jako v mrazíkovi) a ne dotykem.\n");
	}
	else if(strcmp(nahledinput,"#05")==0 || strcmp(nahledinput,"komar")==0 || strcmp(nahledinput,"komár")==0){
	  printf("\t \t \t ************* \n");
	  printf("\t \t \t *   KOMÁR   * \n");
	  printf("\t \t \t ************* \n \n");
	  printf("REKVIZITY: Stolièka, šátek na zavázání oèí, mikina na vytvoøení palcátu\n");
	  printf("PRAVIDLA: Urèí se jeden hráè, jehož úkol se stane reprezentovat èlovìka. Ostatní lidé reprezentují komáry. ÄŒlovìk si sedne na stolièku doprostøed místnosti, do ruky dostane zavázanou mikinu, èi Šátek, kterým lze bezbolestnì mlátit (tzn.  noviny) a zaváže si oèi. Ãškolem komárù se stane vysávat krev èlovìku. To provedou tak, že se ho dotknou a poté se dotknou stìny (tím získají bod). ÄŒlovìk se vŠak ohání novinami a pokud nìjakého komára zasáhne, je do konce kola vyøazen. Cílem komárù je dostat co nejvíce bodù a cílem èlovìka je sejmout vŠechny komáry.\n");
	  printf("DODATEÈNÁ PRAVIDLA: Komáøi nemohou umøít, pokud nemají žádné body.\n");
	}
	
	else if( strcmp(nahledinput,"#06") == 0 || strcmp(nahledinput,"kikikokokeke")==0  ){ /* KIKIKOKOKEKE */	
	  printf("________________________________________________________________________________________________________________ \n");printf("________________________________________________________________________________________________________________ \n");
	    printf("\t \t \t ****************\n");
	    printf("\t \t \t * KIKIKOKOKEKE *\n");
	    printf("\t \t \t ****************\n \n");
	    printf("REKVIZITY: -\n");
	    printf("PRAVIDLA: Hráèi se rozdìlí na tøi týmy: KI, KO a KE. Každý z týmù musí po celou dobu øíkat jméno týmu, ve kterém právì je. Následnì se hráèi snaží chytit hráèe jiných týmù, proti kterým jsou silní, a tím je konvertovat do svého týmu. Platí, že KI jsou silní proti KO, KO proti KE a KE proti KI. Vyhrajou ti, kteøí skonèí a jsou co nejménìkrát konvertováni.\n");	
	}
        else if( strcmp(nahledinput,"#07") == 0 || strcmp(nahledinput,"maso")==0  ){ 
	  printf("________________________________________________________________________________________________________________ \n");printf("________________________________________________________________________________________________________________ \n");
	    printf("\t \t \t ***************\n");
	    printf("\t \t \t *     MASO    *\n");
	    printf("\t \t \t ***************\n \n");
	    printf("REKVIZITY: tenisák\n");
	    printf("PRAVIDLA: Zdùraznìte, že v této høe hraje každý sám za sebe. Urèete jeden pøedmìt, napø. tenisák, který se stane ústøedním pøedmìtem hry. Hráèi se po zahájení hry - vhození tenisáku do davu - snaží pøevzít kontrolu nad tenisákem a dotknout se jím dveøí (nebo jiného urèeného objektu). Háèek je v tom, že každý se o to pokouší sám za sebe, a tak nastane pìkná mela.\n");
	}
        else if( strcmp(nahledinput,"#08") == 0 || strcmp(nahledinput,"talismánek")==0  ){ 
	  printf("________________________________________________________________________________________________________________ \n");printf("________________________________________________________________________________________________________________ \n");
	    printf("\t \t \t ****************\n");
	    printf("\t \t \t *  TALISMÁNEK  *\n");
	    printf("\t \t \t ****************\n \n");
	    printf("REKVIZITY: tìžký velký pøedmìt (ideálnì s oblými stranami, aby se èlovìk nezranil)\n");
	    printf("PRAVIDLA: Rozdìlte hráèe do minimálnì tøí stejnì poèetných týmù. Doprostøed herního pole položte \' talismánek\' v podobì velké klády, èi jiného tìžkého pøedmìtu. Následnì rozdìlte každému týmu stanovištì stejnì daleko od talismánku. Cílem každého týmu je dostat talismánek do svého stanovištì.\n Na høe lze skvìle demonstrovat princip superpozice.\n");
	}
	else if( strcmp(nahledinput,"#09") == 0 || strcmp(nahledinput,"králnidoriamy") == 0 ){
	     printf("\t \t \t ********************* \n");
	     printf("\t \t \t *   KRÁL NIDORIAMY  * \n");
	     printf("\t \t \t ********************* \n");
	     printf("REKVIZITY: -\n");
	     printf("PRAVIDLA: Urèete nìjaké hrací pole, jako napø. louka. Poté rozdìlte hráèe do nìkolika týmù. Hra probíhá tak, že hráèi rùznì chodí po louce a snaží se navzájem zalehávat. Vítìzí poté tým, který má na konci nejvíce lidí na vršku hromad. Za každou hromadu zalehlých lidí tedy dostane bod pouze ten tým, který má nìkoho na vrchu a vítìzí tým s nejvíce body.\n");
	}
      	else if( strcmp(nahledinput,"#10") == 0 || strcmp(nahledinput,"aliby") == 0 ){
	     printf("\t \t \t ************ \n");
	     printf("\t \t \t *   ALIBY  * \n");
	     printf("\t \t \t ************ \n");
	     printf("REKVIZITY: židle na usazení vyslýchaných\n");
	     printf("PRAVIDLA: Vyberte dva hráèe, kteøí se odeberou z doslechu ostatních (tøeba za dveøe). Jejich úkolem je domluvit si spoleèné aliby. Poté zbytek hráèù po jednom oba vybrané pøedvolá a naøkne je z nìjakého trestného èinu (napø. vražda rychlovarnou konvicí). Vybraným se pak kladou otázky a sleduje se, jak odpovídají. Cílem dvou dobrovolníkù je, aby jejich výpovìdi byly co nejvíce identické a svìdèili o jejich nevinì. Ostatní se snaží je usvìdèit.\n");
	     printf("ALTERNATIVNÍ PRAVIDLA: Oba vybraní se dohodnou, že budou popisovat víkend/dovolenou jednoho z nich a ostatní hádají, kdo ten víkend zažil. \n");
	}
	  else if( strcmp(nahledinput,"#11") == 0 || strcmp(nahledinput,"improvizace") == 0 ){
	     printf("\t \t \t ******************\n");
	     printf("\t \t \t *   IMPROVIZACE  *\n");
	     printf("\t \t \t ******************\n");
	     printf("REKVIZITY: -\n");
	     printf("PRAVIDLA: Cílem této hry je, aby skupina lidí bez jakékoliv pøedchozí domluvy nebo pomùcek sehrála krátké scénky. To se mùže zdát nároèné, ale scénky stejnì vìtŠinou nemají žádnou úroveÅˆ a vtip hry spoèívá v tom, jaká blbost koho napadne. Zde je seznam herních mÃ³dù, podle kterých se dají sehrát scénky:\n");
	     printf("NA CO SI DÃT POZOR: Herci musí být èelem k publiku. Mìli by také mluvit nahlas a pøehánìt svá gesta. Také dejte pozor, aby se do hry zapojil každý a zkuste motivovat introvertnìjŠí hráèe.");
	     printf("ALTERNATIVNÍ PRAVIDLA: \n");
	     printf("\t -VYVOLÁVACÍ IMPROVIZACE: Na scénì je cca. pìtièlenný tým, kterému se zadá herní téma (napø. Èernobyl, pìt minut pøed výbuchem). Každý z hráèù si pak vybere klíèové slovo, které se vztahuje k tématu, ale které NEZTVÁRÒUJE ve høe. Nìkdo by si tøeba mohl vzít slovo uklízeèka, ale nehrál by uklízeèku. Hra zaène jedním hráèem na scénce, který si musí vymyslet kdo je a co dìlá. Pokud nìkterý hráè na scénì øekne nìjaké klíèové slovo, musí ten hráè, koho je, vstoupit na scénu a vymyslet si pro to dùvod a øíct ho. Pokud je naopak zmínìno klíèové slovo hráèe na scénì, musí ten hráè odejít a opìt pro to vymyslet dùvod a øíct ho. Scénka konèí tím, že jeden èlovìk odchází a pøi odchodu øekne jméno druhého a odejdou oba.\n");
	     printf("\t -TLESKACÍ IMPROVIZACE: Na scénì zaènou dva lidé rozehrávat scénku a zbylí sedí jako publikum. Kdokoliv z publika následnì mùže tlesknout, scénku zastavit (herci se zmrazí) a nahradit jednoho z hercù (toho, který je tam déle). Musí vŠak rozehrát kompletnì jinou scénku a zaujmout kompletnì jinou roli. Pozn.: mùže se hodit pravidlo, že se scénka musí nechat rozehrát alespoòˆ nìjaký èas, a poøád všichni netleskají a je vidìt smysl scénky.\n" );
	     printf("\t -ÈASOVÁ IMPROVIZACE: Dva lidé musí sehrát tu samou scénku, kterou poprvé improvizují (téma se jim zadá) za minutu, pùl minuty, deset sekund, pìt sekund a sekundu. Na konci scénky musí jeden z nich zemøít.\n");
	     printf("\t -BÁSEÒ: Herci si sednou vedle sebou na stolièky a popoøadì øíká každý jedno slovo. Jejich cílem je vytvoøit báseò, nebo pøíbìh (vyberte pøedem).\n");
	     printf("\t -SKØÍÒ: Vybere se jeden èlovìk, který pøedstírá, že otevøe skøíò a vytáhne z ní pøedmìt, který by chtìl. Následnì musí ten pøedmìt pøedvést pantomimou a publikum se ho snaží uhodnout. Kdo ho uhodl, vytahuje ze skøínì pøíŠtì. \n");
	     printf("\t -PØEBÍJECÍ IMPROVIZACE: Jeden èlovìk zaène v poli tím, že nìco pøedvede (napø. skøíò, auto, zeï...). Následnì dobrovolník z publika tleskne a na jevišti pøedvede nìco, co to pøebije. Potom dalŠí dobrovolník tleskne a pøebije to... Takto se vytvoøí kaskáda pøebíjecích reakcí.\n ");
	     printf("\t -REKLAMACE: Dva lidé se vžijí do role prodejcù a jiní dva do role nespokojených zákazníkù, kteøí pøišli reklamovat své zboží. Háèek se schovává v tom, že reklamovaná vìc se urèí dohromady v publiku a ti, kteøí reklamují ji neznají. Jejich úkolem je tedy pøijít na to, co reklamují, ale stále dodržovat roli toho, že jsou v obchodu a jsou naŠtvaný záklazník. Hra konèí, jakmile reklamující uhodnou reklamovanou vìc.\n");
	}

	  else if( strcmp(nahledinput,"#12") == 0 || strcmp(nahledinput,"fotbika") == 0 ){
	     printf("\t \t \t **************\n");
	     printf("\t \t \t *   FOTBIKA  *\n");
	     printf("\t \t \t **************\n");
	     printf("REKVIZITY: tenisák, místnost\n");
	     printf("PRAVIDLA: Hra se hraje jako vybíjená akorát s tím rozdílem, že míèek je tenisák a smí se pouze kopat. Vybijí se pak pouze v prostoru od chodidel do kolen (vèetnì). Už je jen na Vás, jestli vybika bude vracecí a jestli povolíte chytání míèku nohou tak, že ho èlovìk jednoznaènì zašlápne.\n");
	     printf("ALTERNATIVNÍ PRAVIDLA:\n");
	     printf("FOTBIKA MASAKR 100 %% EXTREME MILION: Hraje se jako normální fotbika s tím rozdílem, že hráèi musí skákat po jedné noze. \n");
	}
 
	  else if( strcmp(nahledinput,"#13") == 0 || strcmp(nahledinput,"komandohopsando") == 0 ){
	     printf("\t \t \t *********************** \n");
	     printf("\t \t \t *   KOMANDO HOPSANDO  * \n");
	     printf("\t \t \t *********************** \n");
	     printf("\t \t \t REKVIZITY: stùl s židlemi\n");
	     printf("PRAVIDLA: Hra se hraje tak, že všichni sedí u stolu. Princip hry se podobá høe Simon says, což znamená, že se urèí jeden game master, který diktuje ostatním, jakou polohu rukou vzhledem ke stolu mají mít, avŠak ostatní to mají provést jen pokud pøed tím øekne KOMANDO. Ve høe jsou tøi polohy rukou:\n \t -HOPSANDO: hráèi mají ruce ve tvaru pistole a Å¥ukají do stolu \n \t -DUTO: hráèi se dotýkají stolu Špièkami prstù avŠak ne dlaní \n \t -PLOCHO: hráèi mají natažené prsty a dotýkají se dlaní stolu \n Game master si tedy s rukama dìlá, co chce, a øíká ostatním pøíkazy. Hráè vypadne, pokud nesplní pøíkaz, pøed kterým je KOMANDO nebo pokud splní pøíkaz pøed kterým není KOMANDO. Vyhrává ten, kdo zùstane jako poslední. Ten je v pøíštím kole gamemaster.\n ");
	     printf("ALTERNATIVNÍ PRAVIDLA: po konci kola mùže výherce vymyslet novou polohu rukou, se kterou se bude hrát, a pojmenovat ji\n");
	}
	  else if( strcmp(nahledinput,"#14") == 0 || strcmp(nahledinput,"elektrika") == 0 ){
	     printf("\t \t \t ******************** \n");
	     printf("\t \t \t *     ELEKTRIKA    * \n");
	     printf("\t \t \t ******************** \n");
	     printf("REKVIZITY:dobøe uchopitelný pøedmìt, mince, stùl s židlemi\n");
	     printf("PRAVIDLA: Utvoøí se dva stejnì poèetné týmy lidí, které se posadí naproti sobì okolo stolu a chytnou se za ruce. K jednomu z èel stolu se posadí vhazovaè a ke druhému se postaví stolièka, na kterou se položí jeden dobøe uchopitelný pøedmìt (flaŠka s vodou, petangová koule aj.). Oba hráèi, kteøí mají k pøedmìtu nejblíže, k nìmu musí mít stejnì daleko. Hráèi nejblíže ke vhazovaèi se na nìj dívají, ostatní se musí dívat smìrem k pøedmìtu. Hra probíhá tak, že vhazovaè hodí mincí a když padne pana, poteèe elektrika, když ne, tak nepoteèe. Jakmile teèe elektrika, musí ti, co se dívají na minci poslat stisknutím ruky signál ostatním z týmu, kteøí si ho pøedají. Až signál dojde k poslednímu èlovìku, musí uchopit pøedmìt. Ten tým, který uchopí pøedmìt, dostane bod a vŠichni z týmu se posunou o jedno místo doprava. Pokud tým chytne flašku a neteèe elektrika, posune se tým opaènì. Hra konèí tím, že se jeden tým vystøídá na všech pozicích (jednou nebo vícekrát).\n");
	}

      	  else if( strcmp(nahledinput,"#15") == 0 || strcmp(nahledinput,"cinkaèka") == 0 ){
	     printf("\t \t \t ******************* \n");
	     printf("\t \t \t *     CINKAÈKA    * \n");
	     printf("\t \t \t ******************* \n");
	     printf("REKVIZITY: tøi mince s pokud možno rùznou velikostí, stùl\n");
	     printf("PRAVIDLA: Hráèi se rozdìlí na dva týmy a sednou si proti sobì ke stolu. Hra probíhá tak, že tým, který je na øadì, si tajnì mezi sebou pod stolem podá mince a poté položí lokty na stùl a zavøe pìsti, aby neŠlo vidìt, kdo má mince. VŠichni najednou následovnì bouchnou rukama o stùl tak, aby mince zùstaly nevidìny a pøikryty. Druhý tým má 4 pokusy na to, aby odhalil, kde jsou mince tím, že odkryje libovolnou ruku. Lokaci mince lze urèit pomocí zvuku, který vydávají mince pøi bouchnutí o stùl.\n");
	     printf("POZN.: V týmu se lidé hodnì hádají, takže se vyplatí urèit jednoho zástupce a jedinì on mùže urèit, kterou ruku má protitým nadzvednout.\n ");
	} 

      	  else if( strcmp(nahledinput,"#16") == 0 || strcmp(nahledinput,"pašerák") == 0 ){
	     printf("\t \t \t ***************** \n");
	     printf("\t \t \t *    PAŠERÁK    * \n");
	     printf("\t \t \t ***************** \n");
	     printf("REKVIZITY: provaz, pøedmìty, které se lehce dají skrýt na èlovìku\n");
	     printf("PRAVIDLA: Hráèi se rozdìlí na dva týmy - celníky a pašeráky (celníkù je ménì než paŠerákù, pomìr zhruba 3:2). Provazem se ohranièí kruh s polomìrem cca. 2 metry, který bude pøedstavovat zahranièí pro paŠeráky. Urèí se jeŠtì území kolem zahranièí, které pøedstavuje celnici, a která je velká až 50 metrù. Ãškolem paŠerákù je mimo celnici se tajnì smluvit, u nìjakého paŠeráka schovat paŠovaný pøedmìt a onen pøedmìt propaŠovat do zahranièí. Staèí tedy, aby se èlovìk i s pøedmìtem dostali do zahranièí a paŠeráci vyhrají. Celníci vyhrají, když chytí paŠeráka s pøedmìtem, nebo uplyne pøedem stanovený limit. Pokud je paŠerák v celnici, mohou ho celníci chytit a proŠacovat (Šacovat mohou jak dlouho chtìjí, klidnì i nemusejí). Pokud se celník dotkne paŠeráka a nic nenajde, musí se paŠerák vrátit zpìt do mimo celnici a zahranièí. Pokud celníci chytí paŠeráka a najdou pøedmìt, paŠeráci prohráli.\n");
	}

	 else if( strcmp(nahledinput,"#17") == 0 || strcmp(nahledinput,"evilmultitasking") == 0 ){
	     printf("\t \t \t *************************** \n");
	     printf("\t \t \t *    EVIL MULTITASKING    * \n");
	     printf("\t \t \t *************************** \n");
	     printf("REKVIZITY: tøi a více tenisákù\n");
	     printf("PRAVIDLA: Hráèi se postaví do kruhu a hází si mezi sebou tenisáky. Mínusový bod dostane ten, kdo tenisák nechytí, nebo ho hodí tak, že nejde chytit. Taky ho vŠak dostane ten, kdo má u sebe víc než jeden tenisák najednou. Vyhrává ten, kdo má nejménì mínusových bodù na konci hry. Smysl této hry spoèívá v tom, že se hráèi spiknou proti jiným hráèùm a hodí mu nìkolik tenisákù najednou a on musí reagovat rychle.\n");
	}  
	else if( strcmp(nahledinput,"#18") == 0 || strcmp(nahledinput,"plácaèka") == 0 ){
	     printf("\t \t \t ***************** \n");
	     printf("\t \t \t *   PLÁCAÈKA    * \n");
	     printf("\t \t \t ***************** \n");
	     printf("REKVIZITY: - \n");
	     printf("PRAVIDLA: Utvoøí se dvì øady hráèù, které se postaví naproti sobì ve vzdálenosti cca. 10 metrù. Hra probíhá tak, že na støídaèku proti sobì øady posílají jednoho èlovìka. Vyslanec pøijde k øadì lidí, kteøí musí pøed sebe natáhnout obì ruce dlanìmi nahoru. Vyslanec poté musí plácnout tøi dlanì z druhé øady. Jakmile plácne tøetí, stane se jeho cílem dobìhnout za svoji øadu a cílem plánutého se stane se ho dotknout. Komu se cíl podaøí, ten konvertuje toho druhého do své øady. Hra skonèí, až zbyde jen jedna øada (nebo tak, že zbyde jen èlovìk se dvìma rukama, kterého nebude moci druhá øada plácnout, a tak prohraje).\n");
	}

	  else if( strcmp(nahledinput,"#19") == 0 || strcmp(nahledinput,"tramvaj") == 0 ){
	     printf("\t \t \t ********************************** \n");
	     printf("\t \t \t *   TRAMVAJ / HOØÍCÍ MRAKODRAP   * \n");
	     printf("\t \t \t ********************************** \n");
	     printf("REKVIZITY: lano \n");
	     printf("PRAVIDLA: Utvoøte kruh z lana, do kterého si stoupnou všichni hráèi. Je to hoøící mrakodrap, ze kterého není úniku. Naštìstí pøilétá vrtulník, ale v nìm je místo pouze na jednoho hráèe. Hráèi se tedy snaží vytlaèit ostatní z kruhu, aby vrtulník zachránil právì je.\n");
	     printf("POZN.: Urèete jasnì hranici vypadnutí z mrakodrapu, aby nenastaly sporné situace. Napø. obì nohy ven z kruhu, polovina tìla... Mùžete také urèit soudce, který bude nad hrou dohlížet a sporné pøípady rozhodovat.\n");
	  }


	  else if( strcmp(nahledinput,"#20") == 0 || strcmp(nahledinput,"australskýfotbal") == 0 ){
	     printf("\t \t \t ************************ \n");
	     printf("\t \t \t *   AUSTRALSKÝ FOTBAL   * \n");
	     printf("\t \t \t ************************* \n");
	     printf("REKVIZITY: tenisák\n");
	     printf("PRAVIDLA: Hráèi se postaví do kruhu (=na obvod pomyslné kružnice) èelem ven a tak, aby se dotýkali nohama. Potom se shýbnou, aby se koukali mezi rozkroèeným nohama. Jejich rozkroèené nohy jsou branky. Dovnitø se hodí míè a hráèi se snaží prohodit míè brankami ostatních. Pokud hráèi nìkdo prohodí míè mezi nohama, nebo se hráè narovná, ztrácí jednu ruku, a když nemá ruku, tak vypadává. Hráèi nesmí støílet na lidi tìsne vedle sebe, takže vyhrávají poslední tøi lidé.\n");

	  }
  
	else{
	printf("Toto ID neexistuje\n");
	}


}
