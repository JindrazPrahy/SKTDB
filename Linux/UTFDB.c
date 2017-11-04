#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

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
printf("\nTento program slouží k pomoci s přípravou programu na             /\\       Příkazy, které můžete zkusit: \n");  
printf("skautské družinovky či výpravy, jmenovitě s přípravou            (  )      help --> nápověda                    \n");
printf("krátkých her s různým účelem. Obsahuje databázi her,          .--.\\/.--.   hry --> seznam všech her  \n");
printf("ve které lze vyhledávat podle nejrůznějších kritérií.        (/`\\_\\/_/`\\)  filtr --> vyhledávání         \n");
printf("Narozdíl od většiny jiných herníků se zde vyskytují hry      '  {____}  '  #ID --> hashtag a číslo ukáže konkrétní hru    \n");
printf("ozkoušené, a tak se nemusíte probírat haldou nechtěných her.   ,_//\\\\_,    cisto --> vyčistí obrazovku     \n");
printf("Program se ovládá psaním příkazů, myš Vám bohužel nepomůže.     '-\\/-'          \n");
printf("Zde pište příkazy: \n");


		/*Dostávání­ inputu od uživatele */
LOOP: scanf("%s", input);    int g;
while ( (g = getchar()) != EOF && g != '\n') { }
printf("Napsali jste: %s \n", input);

if(strcmp(input, "help") == 0 || strcmp(input, "pomoc") == 0){ 	/*nápověda*/
	printf("Seznam příkazů:\n help  --> pomoc\n konec --> ukončit program\n hry   --> zobrazí seznam všech her\n filtr --> vyhledávání \n cisto --> vyčistí obrazovku\n");  printf("Zde pište příkazy: \n");
 goto LOOP;
} 
if(strcmp(input, "konec") == 0 || strcmp(input, "k") == 0 || strcmp(input, "exit") == 0|| strcmp(input, ":q") == 0){  /*ukončení­ programu*/
	printf("		Nashledanou \n");
	goto END;
}
if(strcmp(input, "FML") == 0 || strcmp(input, "overwatch") == 0 ){ /*Lul dis */
 	printf(" -    -  -         -  -----------  \n");printf("!-!  !-!!-!       !-!!-----------! \n");printf("!-! !-! !-!       !-!!-----------  \n");printf("!-!!-!  !-!       !-!!-!           \n");printf("!-!-!   !-----------!!-----------  \n");printf("!--!    !-----------!!-----------! \n");printf("!-!-!    -----------  -----------! \n");printf("!-!!-!       !-!               !-! \n");printf("!-! !-!      !-!      -----------! \n");printf("!-!  !-!     !-!     !-----------! \n");
  	printf("-    -       -       -----------  \n");}

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
if(strcmp(input,"dementball")== 0 || (strcmp(input,"najelena")== 0 ) || (strcmp(input,"chaos")== 0 ) || strcmp(input,"indiánskýfotbal") == 0 || (strcmp(input,"komár") == 0 ) || strcmp(input,"kikikokokeke") == 0  || strcmp(input,"maso") == 0 || strcmp(input,"talismánek") == 0 || strcmp(input,"králmidoriyamy") ==0 || strcmp(input, "aliby") == 0 || strcmp(input,"improvizace") == 0 || strcmp(input,"fotbika") == 0 || strcmp(input,"komandohopsando") == 0 || strcmp(input,"elektrika") == 0 || strcmp(input,"cinkačka") == 0 || strcmp(input,"pašerák") == 0 || strcmp(input,"evilmultitasking") == 0 || strcmp(input,"plácačka") == 0 || strcmp(input,"tramvaj") == 0 || strcmp(input,"australskýfotbal") == 0 ) {
   nahled(input);
	goto LOOP;
}

if(strcmp(input,"autor") == 0 || strcmp(input, "author") == 0 ){    /* o autorovi  			18+10 */
printf("		    _____________________________ \n");
printf("		   |                             |\n");
printf("		   |    SKTDB 1. 3   3. 11. 2017 | \n");
printf("		   |                             |\n");
printf("		   |       JINDŘICH DUŠEK        |\n");
printf("		   |_____________________________|\n \n");
}


else{  /* Když zadaj něco náhodnýho */
	printf("Toto není validní příkaz, zkuste to znovu\n");
        printf("Zde pište příkazy: \n");
}
	goto LOOP;
	END : return 0;
}

int filtr(int bypass){ /* funkce na vytvoření filtrovaného seznamu    ZNAK  */
	char temp[BUFSIZ];int mint = -1; int maxt = 120; int t; char input[6];

	/* ptací se fáze*/
	if(bypass == 0){
FILTROVANI:printf("Zadejte vaše požadované vyhledávací kritéria (nebo help pro zobrazení možných kritérií):\n");
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
			printf("Zpět do hlavní nabídky \n");
			goto BACK;
		}
		/*  čas */
		else if(strcmp(input, "cas") == 0 || strcmp(input, "čas") == 0){
			printf("Zadejte minimální čas v minutách:");
			if (fgets(temp, sizeof(temp), stdin) != NULL){
				mint = atoi(temp);
			}
			printf("Zadejte maximální čas v minutách:");
			if (fgets(temp, sizeof(temp), stdin) != NULL){
				maxt = atoi(temp);
			}	goto FILTROVANI;
		}
		/* přibližný čas */
		else if(strcmp(input, "pčas") == 0 || strcmp(input,"pcas") == 0 ){
			printf("Zadejte přibližný čas hry v minutách:");
			if (fgets(temp, sizeof(temp), stdin) != NULL){
			         mint = atoi(temp) - 5;
				 maxt = atoi(temp) + 5;
				 goto FILTROVANI;
			}  
		}

	/*  Ostatní příkazy  */
		if(strcmp(input, "konec") == 0 || strcmp(input, "k") == 0) {
			printf("Zpět do hlavní nabídky \n");
			goto BACK;
		}
		else if(strcmp(input, "help") == 0 || (strcmp(input, "ls") == 0)){
			printf("Toto jsou dostupná kritéria: \n");
			printf("hry (h), závody (z), výzvy (vyzv)\n");
			printf("vyčerpávající - běhačky (beh), brutální a náročné (b), přemýšlecí (m), pohodové (p), speciální (sp) \n");
			printf("za pochodu (ch), do lesa (l), na louku nebo plácek (lk), do místnosti (kl), do vlaku (vlak)\n");
			printf("na začátek schůzky (zsch), doprostřed schůzky (psch), na konec schůzky (ksch), na ven na schůzce (vsch) \n");
			printf("bez speciálních rekvizit (bez), s rekvizitami (srek), bez čehokoliv (nic) \n");
			printf("noční hry (noc) \n");
			printf("PRO HLEDÁNÍ NAPIŠTE: hledat \n");
			printf("Zde pište příkazy: \n");
			goto FILTROVANI;
		}
		else if(strcmp(input, "hledat") == 0 || strcmp(input, "hl") == 0) {
			goto ZOBRAZ;
		}
		else{
			printf("Toto není validní příkaz, zkuste to znovu\n");
			printf("Zde pište příkazy: \n");
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


ZOBRAZ: printf("________________________________________________________________________________________________________________ \n");
	printf("________________________________________________________________________________________________________________ \n");
	printf("		>>> SEZNAM ");
		if(b == true){printf("BRUTÁLNÍCH ");} if(m == true){printf("PŘEMÝŠLECÍCH ");} if(p == true){printf("POHODOVÝCH ");} if(sp == true){printf("SPECIÁLNÍCH ");}
		if(noc == true){printf("NOČNÍCH ");} printf("HER "); if(beh == true){printf(" \' BĚHAČEK \'");}
		if(ch == true){printf("ZA POCHODU ");} if(l == true){printf("DO LESA ");} if(lk == true){printf("NA LOUKU ");} if(kl == true){printf("DO MÍSTNOSTI ");} if(vlak == true){printf("DO VLAKU ");}
		if(zsch == true){printf("NA ZAČÁTEK SCH. ");} if(psch == true){printf("DOPROSTŘED SCH. ");} if(ksch == true){printf("NA KONEC SCH. ");} if(vsch == true){printf("NA VEN NA SCH. ");}
		if(mint != -1){ printf("TRVAJÍCÍCH OD %dmin DO %dmin", mint, maxt);} printf("<<< \n");
		if(bez == true){printf("BEZ SP. REKVIZIT ");} if(srek == true){printf("S REKVIZITAMI ");} if(nic == true){printf("NA KTERÉ NIC NEPOTŘEBUJETE ");}

	/* časový filtr, který nejdřív hodí­všechny hry s ok časem true */
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
		/* V této fázi se vyhodí z filtru všechny hry, které nesplňují požadavky. */
	if(h == true){ /* hra */
           	  ;
		}
	if(z == true){ /* závod */
		dementball = false; najelena=false; chaos =false;indball = false; kikikokokeke = false; aliby = false; kralnidoriamy = false;
	}
	if(beh == true){ /* běhačka */
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
	if(m == true){ /* přemýšlecí */
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
		dementball = false;indball = false;komar = false; maso = false; talismanek = false;
	}
	if(srek == true){ /* s rekvizitami */
		najelena=false; chaos =false;komar = false; kikikokokeke = false; aliby = false; kralnidoriamy = false; impro = false; komhops = false; placacka = false;
	}
	if(nic == true){ /* bez ničeho */
		dementball = false; najelena = false;chaos=false;indball = false; maso = false; talismanek = false; fotbika = false; elektrika = false; cink = false; paserak = false; evmul = false; tramvaj = false; ausfot = false;

	}
	if(noc == true){ /*noční hry */
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
if(kralnidoriamy == 1){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#09-KRÁL MIDORIYAMY\n"); counter++;}
if(aliby == 1        ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#10-ALIBY\n" ); counter++;} 
if(impro == 1        ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#11-IMPROVIZACE\n" ); counter++;} 
if(fotbika == 1      ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#12-FOTBIKA\n" ); counter++;} 
if(komhops == 1  ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#13-KOMANDO HOPSANDO\n" ); counter++;} 
if(elektrika == 1    ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#14-ELEKTRIKA\n" ); counter++;} 
if(cink == 1         ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#15-CINKAČKA\n" ); counter++;} 
if(paserak == 1      ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#16-PAŠERÁK\n" ); counter++;} 
if(evmul == 1    ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#17-EVIL MULTITASKING\n"); counter++;} 
if(placacka == 1     ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#18-PLÁCAČKA\n" ); counter++;} 
if(tramvaj == 1      ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#19-TRAMVAJ\n" ); counter++;} 
if(ausfot == 1       ){ printf("%d",counter);if(counter<=9){printf(".");}printf("............#20-AUSTRALSKÝ FOTBAL\n" ); counter++;} 
                        printf("Zde pište příkazy: \n");
		      BACK: return 0;
}
/* Zde jsou pouze zápisy her */

char nahled(char nahledinput[20]){
	if(strcmp(nahledinput,"#01")==0 || strncmp(nahledinput,"dementbal", 9)==0){ /* dementball */
		printf("________________________________________________________________________________________________________________ \n");
		printf("________________________________________________________________________________________________________________ \n");
		printf("   _____                                        _   __               __   __ 	 	 \n");
		printf(" |_   _`.         10 minut                    / |_[  |             [  | [  | 		 HRA\n");
  		printf("   | | `.\\  .---.  _ .--..--.  .---.  _ .--. `| |-'| |.--.   ,--.   | |  | | 		 POHODOVÁ\n");
  		printf("   | |  | |/ /__\\ [ `.-. .-. |/ /__\\\\[ `.-. | | |  | '/'`\\\\  '_\\ :  | |  | |		 DO MÍSTNOSTI\n");
 		printf("  _| |_.' /| \\__., | | | | | || \\__., | | | | | |, |  \\__/ |// | |, | |  | |  	NA ZAČÁTEK SCH., DOPROSTŘED SCH.\n");
		printf(" |______.'  '.__.'[___||__||__]'.__.'[___||__]\\__/[__;.__.' \\'-;__/[___][___] 	   	 S REKVIZITAMI\n \n");
		printf("REKVIZITY: Tenisák, klubko vlny, nebo jiný malý míček                ,-'''-,   "); printf("OMEZENÍ: -míče se lze dotýkat  \n");
		if(h==1){printf("test\n \n");}
        printf("PRAVIDLA: Základ je podobný jako vybíjené - cílem je trefit         /\\     /\\  "); printf("jen jednou rukou najednou\n");
        printf("ostatní míčem a nebýt sám trefen (kdo je trefen vypadl).            | |   | |  "); printf("-míč se odpaluje JEN nadhozením \n");
        printf("Ježto se však hra jmenuje Dementball, mají hráči určité omezení.    \\/     \\/  "); printf("jednou rukou a úderem druhou \n");
        printf("Roleplay 'dementů' je vítán. Kdo vyhraje, má titul vrchního dementa. '-...-'"); printf("-musíte se dotýkat 3 končetinami země \n \n");
	printf("ALTERNATIVNÍ PRAVIDLA: Můžete podle potřeby zmínit omezení. Např. ještě horší omezení pohybu a odpalování míče \npouze hlavou. \n");
	printf("POZN.: U nás celkem populární hra. Je třeba hru urychlit, aby posledních pár hráčů nebojovalo zbytečně dlouho a lidi \nse nenudili. Komentář z role sportovního komentátora může být vtipný. \n");
	printf("Zde pište příkazy: \n");
	}

	else if(strcmp(nahledinput,"#02")==0 || strcmp(nahledinput,"najelena")==0){
	printf("________________________________________________________________________________________________________________ \n");printf("________________________________________________________________________________________________________________ \n");
	printf(" __    _  _______        ___  _______  ___      _______  __    _  _______  \n");
	printf("|  |  | ||   _   |      |   ||       ||   |    |       ||  |  | ||   _   |  HRA        \n");
	printf("|   |_| ||  |_|  | 10   |   ||    ___||   |    |    ___||   |_| ||  |_|  |  POHODOVÁ \n");
	printf("|       ||       |minut |   ||   |___ |   |    |   |___ |       ||       |  DO MÍSTNOSTI\n");
	printf("|  _    ||   _   |   ___|   ||    ___||   |___ |    ___||  _    ||   _   |  NA ZAČÁTEK SCH., DOPROSTŘED SCH.\n" );
	printf("| | |   ||  | |  |  |       ||   |___ |       ||   |___ | | |   ||  | |  |  BEZ SPEC. REKVIZIT\n");
	printf("|_|  |__||__| |__|  |_______||_______||_______||_______||_|  |__||__| |__|  \n \n");
	printf("REKVIZITY:šátek na zavázání očí, stůl                                                     (             )  \n");
 	printf("PRAVIDLA:Jeden člověk je myslivec, ostatní jsou jeleni. Cílem myslivce je dotykem chytit   `--(_   _)--'     \n");
	printf("a vyřadit jeleny a jeleni se snaží se mu vyhnout a zůstat poslední. Jeleni i myslivci se        Y-Y          \n");
    printf("mohou pohybovat pouze v lese, což je stůl, kterého se musí všichni stále dotýkat. Stolu        /@@ \\         \n"); 
    printf("se lidé mohou dotýkat pouze zeshora.                                                          /     \\          \n");
    printf("ALTERNATIVNÍ PRAVIDLA: zakázat/povolit hýbání stoly.                                          `--'.  \\              ,\n");
    printf("                                                                                                   |   `.__________/)     \n");
    printf("Zde pište příkazy: \n");
	}

	else if(strcmp(nahledinput,"#03")==0 || strcmp(nahledinput,"chaos")==0){
		printf("________________________________________________________________________________________________________________ \n");printf("________________________________________________________________________________________________________________ \n");
		printf("          _             _       _    _                   _            _                       \n");
		printf("        /\\ \\           / /\\    / /\\ / /\\                /\\ \\         / /\\               HRA   \n");
		printf("       /  \\ \\         / / /   / / // /  \\   30 min     /  \\ \\       / /  \\                NÁSILNÁ    \n");
		printf("      / /\\ \\ \\       / /_/   / / // / /\\ \\            / /\\ \\ \\     / / /\\ \\__         DO MÍSTNOSTI\n ");
		printf("    / / /\\ \\ \\     / /\\ \\__/ / // / /\\ \\ \\          / / /\\ \\ \\   / / /\\ \\___\\    DOPROSTŘED SCH.\n ");
		printf("   / / /  \\ \\_\\   / /\\ \\___\\/ // / /  \\ \\ \\        / / /  \\ \\_\\  \\ \\ \\ \\/___/  BEZ SPEC. REKVIZIT\n");
		printf("   / / /    \\/_/  / / /\\/___/ // / /___/ /\\ \\      / / /   / / /   \\ \\ \\                 \n");
		printf("  / / /          / / /   / / // / /_____/ /\\ \\    / / /   / / /_    \\ \\ \\   ROLE:          \n");
		printf(" / / /________  / / /   / / // /_________/\\ \\ \\  / / /___/ / //_/\\__/ / /  -Julie: zpívá dojemně pod oknem  \n");
		printf("/ / /_________\\/ / /   / / // / /_       __\\ \\_\\/ / /____\\/ / \\ \\/___/ / -Romeo: snaží se dostat k Julii           \n");   
		printf("\\/____________/\\/_/    \\/_/ \\_\\___\\     /____/_/\\/_________/   \\_____\\/  -Matka: brání Romeovi, aby se dostal k Julii\n");
		printf("                                                                        -Den: snaží se, aby bylo rozsvíceno\n");
	printf("REKVIZITY:papírky s názvy rolí a něco, z čeho mohou hráči losovat (klobouk atd.) \n");
        printf("PRAVIDLA:Ze začátku se všem rozdají role, které budou plnit.  .( * .   -Noc: snaží se, aby bylo zhasnuto\n");
    	printf("Ujistěte se, že všichni svoje role chápou a potom    	   .*  .  ) .  -Antigrav. prasátko: snaží se být co nejvýš\n");
   		printf("můžete hru odstartovat. Cílem každého je plnit svůj úkol   . . POOF .* . -Permoník: staví barikádu skrz klubovnu\n");
    	printf("do konce časového limitu. Na konci každého kola udělejte    '* . (  .) ' -Policista: udržuje pořádek; nesnese barikády \n");
     	printf("zhodnocení, kde každý řekne, kdo byl a jak mu to šlo. 	      ` ( . *   -Komik: někoho si vybere a vypráví mu vtipy \n");                                                          
     	printf("Jeden člověk může mít i více rolí. Role se nesmí nikomu říkat.          dokud se nezasměje  \n");  
		printf("POZN.: Lidé se mohou příliš vžít do své role. Připravte se proto       -Dítě: zlobí a za každou cenu nesmí dostat dárek\n");
		printf("na případné pranice. Také si nechte po hře čas na úklid.              -Santa: dává dárky lidem a musí 1 dát i dítěti\n");
		printf("Role můžete rozdávat náhodně, ale případně výběr trochu ovlivněte.    -Král: rozkazuje lidem a oni ho musí poslechnout\n");
		printf("Při hře se může zničit např. nábytek, dejte si na toto pozor.       když neposlechnou, dohlédněte, aby udělali 10 kliků\n");
		printf("Zde pište příkazy: \n");
	}
	else if(strcmp(nahledinput,"#04")==0 || strcmp(nahledinput,"indiánskýfotbal")==0){
	  		printf("________________________________________________________________________________________________________________ \n");printf("________________________________________________________________________________________________________________ \n");
	  printf("    ___        ___   __          __     __   ___     __  __        __ \n");
	  printf("   / _/__  ___/ (_)_/_/___  ___ / /____/_/  / _/__  / /_/ /  ___ _/ / \n");
  	  printf(" _/ // _ \\/ _  / / _ `/ _ \\(_-</  '_/ // / / _/ _ \\/ __/ _ \\/ _ `/ /  \n");
	  printf("/___/_//_/\\_,_/_/\\_,_/_//_/___/_/\\_\\\\_, / /_/ \\___/\\__/_.__/\\_,_/_/  \n");
	  printf("                                  /___/                                 \n\n");
	  printf("REKVIZITY: Provaz, dva lehce uchopitelné předměty (petangové koule, flašky s vodou atp.)\n");
	  printf("PRAVIDLA: Hráči se rozdělí do dvou stejně početných týmů. Připravte hrací pole, které je vytvořeno\n ze dvou polí oddělených lanem. Do každého s polí položte na zem ve vzdálenosti cca. 20 kroků lehce\n uchopitelný předmět (tj. lahev s vodou,  klacek v zemi, petangová koule...). Cílem každého z týmů\n je uchopit předmět prothráčského týmu. Pokud se toto některému z týmů povede, ukončí se kolo, tým\n dostane bod a vše se vrátí zpět do původního stavu. Proti sebrání předmětu se tým může bránit tak,\n že pokud se některý z hráčů nachází na poli cizího týmu, může ho druhý tým zmrazit dotykem. Člověk,\n kterého zmrazili, se nesmí hýbat dokud ho nerozmrazí dotyk hráče ze svého týmu. \n");
	  printf("DODATEČNÁ PRAVIDLA: Pokud se dva nebo více lidí dotýkají, zmraženi jsou všichni, pokud se nepřítel\n dotkne byť jen jednoho z nich. \n Pokud se dva lidi dotknou a jsou oba na své polovině, vymění si místa a jsou oba zmraženi\n (toto pravidlo nemusíte využít).\n");
	  printf("ALTERNATIVNÍ PRAVIDLA: Odmrazuje se podlezením nohou (jako v mrazíkovi) a ne dotykem.\n");
	  printf("Zde pište příkazy: \n");
	}
	else if(strcmp(nahledinput,"#05")==0 || strcmp(nahledinput,"komar")==0 || strcmp(nahledinput,"komár")==0){
	    printf("________________________________________________________________________________________________________________ \n");
	    printf("________________________________________________________________________________________________________________ \n");
printf("\t    __ __                  __                 \\__/   _O/                 \n");  
printf("\t   / //_/___  ____ ___  __/_/______           (o-)     \\                       \n");
printf("\t  / ,< / __ \\/ __ `__ \\/ __ `/ ___/          //||\\\\    /\\_         \\__/       \n");
printf("\t / /| / /_/ / / / / / / /_/ / /                        \\  `        (@@)         \n");
printf("\t/_/ |_\\____/_/ /_/ /_/\\__,_/_/                         `          //||\\\\          \n\n");
	    printf("REKVIZITY: Stolička, šátek na zavázání očí, mikina na vytvoření palcátu\n");
	    printf("PRAVIDLA: Určí se jeden hráč, jehož úkol se stane reprezentovat člověka. Ostatní lidé reprezentují\n komáry. Člověk si sedne na stoličku doprostřed místnosti, do ruky dostane zavázanou mikinu či šátek,\n kterým lze bezbolestně mlátit (tzn.  noviny) a zaváže si oči. Úkolem komárů se stane vysávat krev\n člověku. To provedou tak, že se ho dotknou a poté se dotknou stěny (tím získají bod). Člověk se však\n ohání novinami a pokud nějakého komára zasáhne, je do konce kola vyřazen. Cílem komárů je\n dostat co nejvíce bodů a cílem člověka je sejmout všechny komáry.\n");
	    printf("DODATEČNÁ PRAVIDLA: Komáři nemohou umřít, pokud nemají žádné body.\n");
	    printf("Zde pište příkazy: \n");
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
	    printf("PRAVIDLA: Hráči se rozdělí na tři týmy: KI, KO a KE. Každý z týmů musí po celou dobu říkat jméno týmu,\n ve kterém právě je. Následně se hráči snaží chytit hráče jiných týmů, proti kterým jsou silní,\n a tím je konvertovat do svého týmu. Platí, že KI jsou silní proti KO, KO proti KE a KE proti KI.\n Vyhrajou ti, kteří skončí a jsou co nejméněkrát konvertováni.\n");	
	    printf("Zde pište příkazy: \n");
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
	    printf("REKVIZITY: tenisák\n");
	    printf("PRAVIDLA: Zdůrazněte, že v této hře hraje každý sám za sebe. Určete jeden předmět, např. tenisák, \nkterý se stane ústředním předmětem hry. Hráči se po zahájení hry - vhození tenisáku do davu - snaží\n převzít kontrolu nad tenisákem a dotknout se jím dveří (nebo jiného určeného objektu).\n Háček spočívá v tom, že každý se o to pokouší sám za sebe, a tak nastane pěkná mela.\n");
	    printf("Zde pište příkazy: \n");
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

	    printf("REKVIZITY: těžký velký předmět (ideálně s oblými stranami, aby se člověk nezranil) -- třeba kláda\n");
	    printf("PRAVIDLA: Rozdělte hráče do minimálně tří stejně početných týmů. Doprostřed herního pole položte\n \'talismánek\' v podobě velké klády, či jiného těžkého předmětu. Následně rozdělte každému týmu\n stanoviště stejně daleko od talismánku. Cílem každého týmu je dostat talismánek do svého stanoviště.\n Na hře lze skvěle demonstrovat princip superpozice.\n");
	    printf("Zde pište příkazy: \n"); 
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
	    printf("PRAVIDLA: Určete nějaké hrací pole, jako např. louka. Poté rozdělte hráče do několika týmů. \n Hra probíhá tak, že hráči různě chodí po louce a snaží se navzájem zalehávat. Vítězí poté tým, \n který má na konci předem stanoveného časového limitu nejvíce lidí na vršku hromad. \n Za každou hromadu zalehlých lidí tedy dostane bod pouze ten tým, který má někoho na vrchu. \n Vítězem se stane tým s nejvíce body po několika kolech.\n");
	    printf("Zde pište příkazy: \n");
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
                
printf("REKVIZITY: židle na usazení vy \\| slýchaných\n");
	    printf("PRAVIDLA: Vyberte dva hráče, kteří se odeberou z doslechu ostatních (třeba za dveře). Mají za úkol se\n domluvit si společné aliby. Poté zbytek hráčů po jednom oba vybrané předvolá a nařkne je z nějakého\n trestného činu (např. vražda rychlovarnou konvicí). Vybraným se pak kladou otázky a sleduje se, jak\n odpovídají. Cílem dvou dobrovolníků je, aby jejich výpovědi byly co nejvíce identické a svědčili\n o jejich nevině. Ostatní se snaží je usvědčit.\n");
	     printf("ALTERNATIVNÍ PRAVIDLA: Oba vybraní se dohodnou, že budou popisovat víkend/dovolenou jednoho z nich\n a ostatní hádají, kdo ten víkend zažil. \n");
	     printf("Zde pište příkazy: \n");
	}
	  else if( strcmp(nahledinput,"#11") == 0 || strcmp(nahledinput,"improvizace") == 0 ){
 	    printf("________________________________________________________________________________________________________________ \n");
	    printf("________________________________________________________________________________________________________________ \n");
printf(" ____, _____,   ___, ___,   ____, __  _, ____, ___,  ___,   ____   ____,\n");  
printf("(-|   (-| | |  (-|_)(-|_)  (-/  \\(-\\ |  (-|   (- /  (-|_\\_,(-/  ` (-|_, \n");  
printf(" _|__, _| | |_, _|   _| \\_,  \\__/   \\|   _|__, ,/__, _|  )   \\___, _|__,\n");  
printf("(     (        (    (                   (           (             (     \n\n");  
	    printf("REKVIZITY: -\n");
	    printf("PRAVIDLA: Cílem této hry je, aby skupina lidí bez jakékoliv předchozí domluvy nebo pomůcek sehrála krátké scénky. To se může zdát náročné, ale scénky stejně většinou nemají žádnou úroveň a vtip hry spočívá v tom, jaká blbost koho napadne. Zde je seznam herních módů, podle kterých se dají sehrát scénky:\n");
	    printf("NA CO SI DÁT POZOR: Herci musí být čelem k publiku. Měli by také mluvit nahlas a přehánět svá gesta. Také dejte pozor, aby se do hry zapojil každý a zkuste motivovat introvertnější hráče.");
	    printf("ALTERNATIVNÍ PRAVIDLA: \n");
	    printf("\t -VYVOLÁVACÍ IMPROVIZACE: Na scéně je cca. pětičlenný tým, kterému se zadá herní téma (např. Černobyl, pět minut před výbuchem). Každý z hráčů si pak vezme klíčové slovo, které se vztahuje k tématu, ale které NEZTVÁRŇUJE ve hře. Někdo by si třeba mohl vzít slovo uklízečka, ale nehrál by uklízečku. Hra začne jedním hráčem na scénce, který si musí vymyslet kdo je a co dělá. Pokud některý hráč na scéně řekne nějaké klíčové slovo, musí ten hráč, koho je, vstoupit na scénu a vymyslet si pro to důvod a říct ho. Pokud je naopak zmíněno klíčové slovo hráče na scéně, musí ten hráč odejít a opět pro to vymyslet důvod a říct ho. Scénka končí tím, že jeden člověk odchází a při odchodu řekne jméno druhého a odejdou oba.\n");
	    printf("\t -TLESKACÍ IMPROVIZACE: Na scéně začnou dva lidé rozehrávat scénku a zbylí sedí jako publikum. Kdokoliv z publika následně může tlesknout, scénku zastavit (herci se zmrazí) a nahradit jednoho z herců (toho, který je tam déle). Musí však rozehrát kompletně jinou scénku a zaujmout kompletně jinou roli. Pozn.: může se hodit pravidlo, že se scénka musí nechat rozehrát alespoň nějaký čas, ať pořád všichni netleskají a je vidět smysl scénky.\n" );
	    printf("\t -ČASOVÁ IMPROVIZACE: Dva lidé musí sehrát tu samou scénku, kterou poprvé improvizují (téma se jim zadá) za minutu, půl minuty, deset sekund, pět sekund a sekundu. Na konci scénky musí jeden z nich zemřít.\n");
	    printf("\t -BÁSEŇ: Herci si sednou vedle sebou na stoličky a popořadě říká každý jedno slovo. Jejich cílem je vytvořit báseň, nebo příběh (vyberte předem).\n");
	    printf("\t -SKŘÍŇ: Vybere se jeden člověk, který předstírá, že otevře skříň a vytáhne z ní předmět, který by chtěl. Následně musí ten předmět předvést pantomimou a publikum se ho snaží uhodnout. Kdo ho uhodl, vytahuje ze skříně příště. \n");
	    printf("\t -PŘEBÍJECÍ IMPROVIZACE: Jeden člověk začne v poli tím, že něco předvede (např. skříň, auto, zeď...). Následně dobrovolník z publika tleskne a na jevišti předvede něco, co to přebije. Potom další dobrovolník tleskne a přebije to... Takto se vytvoří kaskáda přebíjecích reakcí.\n ");
	    printf("\t -REKLAMACE: Dva lidé se vžijí do role prodejců a jiní dva do role nespokojených zákazníků, kteří přišli reklamovat své zboží. Háček se schovává v tom, že reklamovaná věc se určí dohromady v publiku a ti, kteří reklamují ji neznají. Jejich úkolem je tedy přijít na to, co reklamují, ale stále dodržovat roli toho, že jsou v obchodu a jsou naštvaný záklazník. Hra končí, jakmile reklamující uhodnou reklamovanou věc.\n");
  	    printf("Zde pište příkazy: \n");
	}

	  else if( strcmp(nahledinput,"#12") == 0 || strcmp(nahledinput,"fotbika") == 0 ){
 	    printf("________________________________________________________________________________________________________________ \n");
	    printf("________________________________________________________________________________________________________________ \n");
printf("\t _______  _____  _______ ______  _____ _     _ _______\n");  
printf("\t |______ |     |    |    |_____]   |   |____/  |_____|\n");  
printf("\t |       |_____|    |    |_____] __|__ |    \\_ |     |\n\n");  
                                                      
	    	    printf("REKVIZITY: tenisák, místnost\n");
	    printf("PRAVIDLA: Hra se hraje jako vybíjená akorát s tím rozdílem, že míček je tenisák a smí se pouze kopat. Vybijí se pak pouze v prostoru od chodidel do kolen (včetně). Už je jen na Vás, jestli vybika bude vracecí a jestli povolíte chytání míčku nohou tak, že ho člověk jednoznačně zašlápne.\n");
	    printf("ALTERNATIVNÍ PRAVIDLA:\n");
	    printf("FOTBIKA MASAKR 100 %% EXTREME MILIÓN: Hraje se jako normální fotbika s tím rozdílem, že hráči musí skákat po jedné noze. \n");
   	    printf("Zde pište příkazy: \n"); 
	}
 
	  else if( strcmp(nahledinput,"#13") == 0 || strcmp(nahledinput,"komandohopsando") == 0 ){
	    printf("________________________________________________________________________________________________________________ \n");
	    printf("________________________________________________________________________________________________________________ \n");

printf(" _ __                         _         _                              _      \n");  
printf("| / / ___ ._ _ _  ___ ._ _  _| | ___   | |_  ___  ___  ___ ___ ._ _  _| | ___ \n");  
printf("|  \\ / . \\| ' ' |<_> || ' |/ . |/ . \\  | . |/ . \\| . \\<_-<<_> || ' |/ . |/ . \\ \n");  
printf("|_\\_\\\\___/|_|_|_|<___||_|_|\\___|\\___/  |_|_|\\___/|  _//__/<___||_|_|\\___|\\___/\n");  
printf("                                                 |_|                          \n\n"); 

		    printf("PRAVIDLA: Hra se hraje tak, že všichni sedí u stolu. Princip hry se podobá hře Simon says, což znamená, že se určí jeden game master, který diktuje ostatním, jakou polohu rukou vzhledem ke stolu mají mít, avšak ostatní to mají provést jen pokud před tím řekne KOMANDO. Ve hře jsou tři polohy rukou:\n \t -HOPSANDO: hráči mají ruce ve tvaru pistole a ťukají do stolu \n \t -DUTO: hráči se dotýkají stolu špičkami prstů avšak ne dlaní \n \t -PLOCHO: hráči mají natažené prsty a dotýkají se dlaní stolu \n Game master si tedy s rukama dělá, co chce, a říká ostatním příkazy. Hráč vypadne, pokud nesplní příkaz, před kterým je KOMANDO nebo pokud splní příkaz před kterým není KOMANDO. Vyhrává ten, kdo zůstane jako poslední. Ten je v příštím kole gamemaster.\n ");
	    printf("ALTERNATIVNÍ PRAVIDLA: po konci kola může výherce vymyslet novou polohu rukou, se kterou se bude hrát, a pojmenovat ji\n");
  	    printf("Zde pište příkazy: \n");
	}
	  else if( strcmp(nahledinput,"#14") == 0 || strcmp(nahledinput,"elektrika") == 0 ){
	    printf("________________________________________________________________________________________________________________ \n");
	    printf("________________________________________________________________________________________________________________ \n");
printf(" ________  __         __       _            _   __              \n");   
printf("|_   __  |[  |       [  |  _  / |_         (_) [  |  _          \n");   
printf("  | |_ \\_| | | .---.  | | / ]`| |-'_ .--.  __   | | / ]  ,--.   \n");   
printf("  |  _| _  | |/ /__\\\\ | '' <  | | [ `/'`\\][  |  | '' <  `'_\\ :  \n");   
printf(" _| |__/ | | || \\__., | |`\\ \\ | |, | |     | |  | |`\\ \\ // | |, \n");   
printf("|________|[___]'.__.'[__|  \\_]\\__/[___]   [___][__|  \\_]\\'-;__/ \n\n");   
                                                                
	    printf("REKVIZITY:dobře uchopitelný předmět, mince, stůl s židlemi\n");
	    printf("PRAVIDLA: Utvoří se dva stejně početné týmy lidí, které se posadí naproti sobě okolo stolu a chytnou se za ruce. K jednomu z čel stolu se posadí vhazovač a ke druhému se postaví stolička, na kterou se položí jeden dobře uchopitelný předmět (flaška s vodou, petangová koule aj.). Oba hráči, kteří mají k předmětu nejblíže, k němu musí mít stejně daleko. Hráči nejblíže ke vhazovači se na něj dívají, ostatní se musí dívat směrem k předmětu. Hra probíhá tak, že vhazovač hodí mincí a když padne pana, poteče elektrika, když ne, tak nepoteče. Jakmile teče elektrika, musí ti, co se dívají na minci poslat stisknutím ruky signál ostatním z týmu, kteří si ho předají. Až signál dojde k poslednímu člověku, musí uchopit předmět. Ten tým, který uchopí předmět, dostane bod a všichni z týmu se posunou o jedno místo doprava. Pokud tým chytne flašku a neteče elektrika, posune se tým opačně. Hra končí tím, že se jeden tým vystřídá na všech pozicích (jednou nebo vícekrát).\n");
  	    printf("Zde pište příkazy: \n");
	}

      	  else if( strcmp(nahledinput,"#15") == 0 || strcmp(nahledinput,"cinkačka") == 0 ){
	    printf("________________________________________________________________________________________________________________ \n");
	    printf("________________________________________________________________________________________________________________ \n");
printf("\t   ____ _       _          \\\\//_         \n");  
printf("\t  / ___(_)_ __ | | ____ _  _\\/| | ____ _ \n");  
printf("\t | |   | | '_ \\| |/ / _` |/ __| |/ / _` |\n");  
printf("\t | |___| | | | |   < (_| | (__|   < (_| |\n");  
printf("\t  \\____|_|_| |_|_|\\_\\__,_|\\___|_|\\_\\__,_|\n\n"); 
                                         
	    printf("REKVIZITY: tři mince s pokud možno různou velikostí, stůl\n");
	    printf("PRAVIDLA: Hráči se rozdělí na dva týmy a sednou si proti sobě ke stolu. Hra probíhá tak, že tým, který je na řadě, si tajně mezi sebou pod stolem podá mince a poté položí lokty na stůl a zavře pěsti, aby nešlo vidět, kdo má mince. Všichni najednou následovně bouchnou rukama o stůl tak, aby mince zůstaly neviděny a přikryty. Druhý tým má 4 pokusy na to, aby odhalil, kde jsou mince tím, že odkryje libovolnou ruku. Lokaci mince lze určit pomocí zvuku, který vydávají mince při bouchnutí o stůl.\n");
	    printf("POZN.: V týmu se lidé hodně hádají, takže se vyplatí určit jednoho zástupce a jedině on může určit, kterou ruku má protitým nadzvednout.\n ");
  	    printf("Zde pište příkazy: \n");
	} 

	  else if( strcmp(nahledinput,"#16") == 0 || strcmp(nahledinput,"pašerák") == 0 ){
	    printf("________________________________________________________________________________________________________________ \n");
	    printf("________________________________________________________________________________________________________________ \n");
printf("\t  ____       \\\\//           __  _    \n");  
printf("\t |  _ \\ __ _ _\\/  ___ _ __ /_/_| | __\n"); 
printf("\t | |_) / _` / __|/ _ \\ '__/ _` | |/ /\n");  
printf("\t |  __/ (_| \\__ \\  __/ | | (_| |   < \n");  
printf("\t |_|   \\__,_|___/\\___|_|  \\__,_|_|\\_\\ \n\n");  
                                     
		    printf("REKVIZITY: provaz, předměty, které se lehce dají skrýt na člověku\n");
	    printf("PRAVIDLA: Hráči se rozdělí na dva týmy - celníky a pašeráky (celníků je méně než pašeráků, poměr zhruba 3:2). Provazem se ohraničí kruh s poloměrem cca. 2 metry, který bude představovat zahraničí pro pašeráky. Určí se ještě území kolem zahraničí, které představuje celnici, a která je velká až 50 metrů. Úkolem pašeráků je mimo celnici se tajně smluvit, u nějakého pašeráka schovat pašovaný předmět a onen předmět propašovat do zahraničí. Stačí tedy, aby se člověk i s předmětem dostali do zahraničí a pašeráci vyhrají. Celníci vyhrají, když chytí pašeráka s předmětem, nebo uplyne předem stanovený limit. Pokud je pašerák v celnici, mohou ho celníci chytit a prošacovat (šacovat mohou jak dlouho chtějí, klidně i nemusejí). Pokud se celník dotkne pašeráka a nic nenajde, musí se pašerák vrátit zpět do mimo celnici a zahraničí. Pokud celníci chytí pašeráka a najdou předmět, pašeráci prohráli.\n");
  	    printf("Zde pište příkazy: \n");
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
	    printf("REKVIZITY: tři a více tenisáků\n");
	    printf("PRAVIDLA: Hráči se postaví do kruhu a hází si mezi sebou tenisáky. Mínusový bod dostane ten, kdo tenisák nechytí, nebo ho hodí tak, že nejde chytit. Taky ho však dostane ten, kdo má u sebe víc než jeden tenisák najednou. Vyhrává ten, kdo má nejméně mínusových bodů na konci hry. Smysl této hry spočívá v tom, že se hráči spiknou proti jiným hráčům a hodí mu několik tenisáků najednou a on musí reagovat rychle.\n");
  	    printf("Zde pište příkazy: \n");
	}  
	else if( strcmp(nahledinput,"#18") == 0 || strcmp(nahledinput,"plácačka") == 0 ){
	    printf("________________________________________________________________________________________________________________ \n");
	    printf("________________________________________________________________________________________________________________ \n");
printf("\t  ____  _   __             \\\\//_         \n");  
printf("\t |  _ \\| | /_/_  ___ __ _  _\\/| | ____ _ \n");  
printf("\t | |_) | |/ _` |/ __/ _` |/ __| |/ / _` |\n");  
printf("\t |  __/| | (_| | (_| (_| | (__|   < (_| |\n");  
printf("\t |_|   |_|\\__,_|\\___\\__,_|\\___|_|\\_\\__,_|\n\n");  
                                        
	    printf("REKVIZITY: - \n");
	    printf("PRAVIDLA: Utvoří se dvě řady hráčů, které se postaví naproti sobě ve vzdálenosti cca. 10 metrů. Hra probíhá tak, že na střídačku proti sobě řady posílají jednoho člověka. Vyslanec přijde k řadě lidí, kteří musí před sebe natáhnout obě ruce dlaněmi nahoru. Vyslanec poté musí plácnout tři dlaně z druhé řady. Jakmile plácne třetí, stane se jeho cílem doběhnout za svoji řadu a cílem plánutého se stane se ho dotknout. Komu se cíl podaří, ten konvertuje toho druhého do své řady. Hra skončí, až zbyde jen jedna řada (nebo tak, že zbyde jen člověk se dvěma rukama, kterého nebude moci druhá řada plácnout, a tak prohraje).\n");
  	    printf("Zde pište příkazy: \n");
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
	    printf("PRAVIDLA: Utvořte kruh z lana, do kterého si stoupnou všichni hráči. Je to hořící mrakodrap, ze kterého není úniku. Naštěstí přilétá vrtulník, ale v něm je místo pouze na jednoho hráče. Hráči se tedy snaží vytlačit ostatní z kruhu, aby vrtulník zachránil právě je.\n");
	    printf("POZN.: Určete jasně hranici vypadnutí z mrakodrapu, aby nenastaly sporné situace. Např. obě nohy ven z kruhu, polovina těla... Můžete také určit soudce, který bude nad hrou dohlížet a sporné případy rozhodovat.\n");
  	    printf("Zde pište příkazy: \n");
	  }


	  else if( strcmp(nahledinput,"#20") == 0 || strcmp(nahledinput,"australskýfotbal") == 0 ){
	    printf("________________________________________________________________________________________________________________ \n");
	    printf("________________________________________________________________________________________________________________ \n");
printf("    ___              __             __     __     __     ____      __  __          __\n");  
printf("   /   | __  _______/ /__________ _/ /____/ /____/_/_   / __/___  / /_/ /_  ____ _/ /\n");  
printf("  / /| |/ / / / ___/ __/ ___/ __ `/ / ___/ //_/ / / /  / /_/ __ \\/ __/ __ \\/ __ `/ / \n");  
printf(" / ___ / /_/ (__  ) /_/ /  / /_/ / (__  ) ,< / /_/ /  / __/ /_/ / /_/ /_/ / /_/ / /  \n");  
printf("/_/  |_\\__,_/____/\\__/_/   \\__,_/_/____/_/|_|\\__, /  /_/  \\____/\\__/_.___/\\__,_/_/   \n"); 
printf("                                            /____/                                   \n\n"); 
	    printf("REKVIZITY: tenisák\n");
	    printf("PRAVIDLA: Hráči se postaví do kruhu (=na obvod pomyslné kružnice) čelem ven a tak, aby se dotýkali nohama. Potom se shýbnou, aby se koukali mezi rozkročeným nohama. Jejich rozkročené nohy jsou branky. Dovnitř se hodí míč a hráči se snaží prohodit míč brankami ostatních. Pokud hráči někdo prohodí míč mezi nohama, nebo se hráč narovná, ztrácí jednu ruku, a když nemá ruku, tak vypadává. Hráči nesmí střílet na lidi těsně vedle sebe, takže vyhrávají poslední tři lidé.\n");
  	    printf("Zde pište příkazy: \n");
	  }
  
	else{
	printf("Toto ID neexistuje\n");
        printf("Zde pište příkazy: \n");
	}


}
