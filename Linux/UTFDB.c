#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*       TODO: NOTED SYMBOL       */

int filtr(int bypass); int c;
char nahled(char boi[20]);


int main() {
/*Možnosti: */	 bool FAE= 1;

unsigned int input [20];

		/* Startup screen */
printf("      __/ ___ _    ___ _         _    __            ___ __     _/    _      ___      _   /   __ ___        _  _  \n");
printf("  \\  / |   | |_   | | |_   \\  / |_   (_  |/  /\\  | | | (_  |/ |_    | \\  /\\  |  /\\  |_)  /\\   /  |    |_| |_ |_) \n");
printf("   \\/ _|_  | |_ \\_| | |_    \\/  |_   __) |\\ /--\\ |_| | __) |\\ |_    |_/ /--\\ | /--\\ |_) /--\\ /_ _|_   | | |_ | \\ \n");
printf("\nZadejte číslo, nebo jméno hry, kterou chcete zobrazit.\n");   printf("Nejste-li si jisti, zkuste napsat help\n");
		/*Dostávání­ inputu od uživatele */
LOOP:scanf("%s", input);    int g;
while ( (g = getchar()) != EOF && g != '\n') { }
printf("Napsali jste: %s \n", input);

if(strcmp(input, "help") == 0 || strcmp(input, "pomoc", 1) == 0){ 	/*nápověda*/
	printf("Seznam příkazů:\n help  --> pomoc\n konec --> ukončit program\n hry   --> zobrazí seznam všech her\n filtr --> vyhledávání \n cisto --> vyčistí obrazovku\n"); goto LOOP;
}
if(strcmp(input, "konec") == 0|| strcmp(input, "k", 1) == 0){  /*ukončení­ programu*/
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

if(strcmp(input, "filtr") == 0 || strcmp(input, "fl") == 0){  /*odkaz na vyhledávací­ funkci */
	filtr(0);
	goto LOOP;
}
if(strcmp(input, "hry") == 0 || strcmp(input, "ls") == 0){  /*zobrazí­ seznam všech her */
	filtr(1);
	goto LOOP;
}


if(strncmp(input,"#", 1)==0){
   nahled(input);
	goto LOOP;
}
if(strncmp(input,"dementball", 9)==0 || (strncmp(input,"najelena", 9)==0 ) || (strncmp(input,"chaos", 9)==0 ) ){
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


else{  /* Když zadaj něco náhodnýho */
	printf("Toto není validní příkaz, zkuste to znovu\n");

}
	goto LOOP;
	END : return 0;
}

int filtr(int bypass){ /* funkce na vytvoření filtrovaného seznamu */
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
FILTROVANI:printf("Zadejte vaše požadované vyhledávací kritéria (nebo help pro zobrazení možných kritérií):\n");
	scanf("%s", input);    int c; 			while ( (c = getchar()) != EOF && c != '\n') { }
		/*  Zadávání­ kritérií­  */
		/* normální­ kritéria */
		if(strcmp(input, "h", 1) == 0){ h=1; goto FILTROVANI;}else if(strcmp(input, "z", 1) == 0){ z=1; goto FILTROVANI;}else if(strcmp(input, "vyzv", 1) == 0){ vyzv=1; goto FILTROVANI;}
		else if(strcmp(input, "b") == 0){ b=1; goto FILTROVANI;}else if(strcmp(input, "p") == 0){ p=1; goto FILTROVANI;}else if(strcmp(input, "m") == 0){ m=1; goto FILTROVANI;}else if(strcmp(input, "sp") == 0){ sp=1; goto FILTROVANI;}
		else if(strcmp(input, "ch") == 0){ ch=1; goto FILTROVANI;}else if(strcmp(input, "l") == 0){ l=1; goto FILTROVANI;}else if(strcmp(input, "lk") == 0){ lk=1; goto FILTROVANI;}else if(strcmp(input, "kl") == 0){ kl=1; goto FILTROVANI;}else if(strcmp(input, "vlak") == 0){ vlak=1; goto FILTROVANI;}
		else if(strcmp(input, "zsch") == 0){ zsch=1; goto FILTROVANI;}else if(strcmp(input, "psch") == 0){ psch=1; goto FILTROVANI;}else if(strcmp(input, "ksch") == 0){ ksch=1; goto FILTROVANI;}else if(strcmp(input, "vsch") == 0){ vsch=1; goto FILTROVANI;}
		else if(strcmp(input, "bez") == 0){ bez=1; goto FILTROVANI;}else if(strcmp(input, "srek") == 0){ srek=1; goto FILTROVANI;}else if(strcmp(input, "nic") == 0){ nic=1; goto FILTROVANI;}
		else if(strcmp(input, "noc") == 0){ noc=1; goto FILTROVANI;}
		/*  čas */
		else if(strcmp(input, "cas", 1) == 0){
			printf("Zadejte minimální čas v minutách:");
			if (fgets(temp, sizeof(temp), stdin) != NULL){
				mint = atoi(temp);
			}
			printf("Zadejte maximální čas v minutách:");
			if (fgets(temp, sizeof(temp), stdin) != NULL){
				maxt = atoi(temp);
			}	goto FILTROVANI;
		}

	/*  Misc. příkazy  */
		if(strcmp(input, "konec", 1) == 0 || strcmp(input, "k", 1) == 0) {
			printf("Mission aborted \n");
			goto BACK;
		}
		else if(strcmp(input, "help", 1) == 0 || (strcmp(input, "ls", 1) == 0)){
			printf("Toto jsou dostupná kritéria: \n");
			printf("hry (h), závody (z), výzvy (vyzv)\n");
			printf("brutální a náročné (b), přemýšlecí (m), pohodové (p), speciální (sp) \n");
			printf("za pochodu (ch), do lesa (l), na louku nebo plácek (lk), do místnosti (kl), do vlaku (vlak)\n");
			printf("na začátek schůzky (zsch), doprostřed schůzky (psch), na konec schůzky (ksch), na ven na schůzce (vsch) \n");
			printf("bez speciálních rekvizit (bez), s rekvizitami (srek), bez čehokoliv (nic) \n");
			printf("noční hry (noc) \n");
			goto FILTROVANI;
		}
		else if(strcmp(input, "hledat", 1) == 0 || strcmp(input, "hl", 1) == 0) {
			goto ZOBRAZ;
		}
		else{
			printf("Toto není validní příkaz, zkuste to znovu\n");
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
		if(b == true){printf("BRUTÁLNÍCH ");} if(m == true){printf("PŘEMÝŠLECÍCH ");} if(p == true){printf("POHODOVÝCH ");} if(sp == true){printf("SPECIÁLNÍCH ");}
		if(noc == true){printf("NOČNÍCH ");} printf("HER ");
		if(ch == true){printf("ZA POCHODU ");} if(l == true){printf("DO LESA ");} if(lk == true){printf("NA LOUKU ");} if(kl == true){printf("DO MÍSTNOSTI ");} if(vlak == true){printf("DO VLAKU ");}
		if(zsch == true){printf("NA ZAČÁTEK SCH. ");} if(psch == true){printf("DOPROSTŘED SCH. ");} if(ksch == true){printf("NA KONEC SCH. ");} if(vsch == true){printf("NA VEN NA SCH. ");}
		if(mint != -1){ printf("TRVAJÍCÍCH OD %dmin DO %dmin", mint, maxt);} printf("<<< \n");
		if(bez == true){printf("BEZ SP. REKVIZIT ");} if(srek == true){printf("S REKVIZITAMI ");} if(nic == true){printf("NA KTERÉ NIC NEPOTŘEBUJETE ");}

	/* časový filtr, který nejdřív hodí­všechny hry true */
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
		dementball = 0; najelena = 0;chaos=0;
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
  		printf("   | | `.\\  .---.  _ .--..--.  .---.  _ .--. `| |-'| |.--.   ,--.   | |  | | 		 POHODOVÁ\n ");
  		printf("   | |  | |/ /__\\ [ `.-. .-. |/ /__\\\\[ `.-. | | |  | '/'`\\\\  '_\\ :  | |  | |		 DO MÍSTNOSTI\n ");
 		printf("  _| |_.' /| \\__., | | | | | || \\__., | | | | | |, |  \\__/ |// | |, | |  | |  	NA ZAČÁTEK SCH., DOPROSTŘED SCH.\n ");
		printf(" |______.'  '.__.'[___||__||__]'.__.'[___||__]\\__/[__;.__.' \\'-;__/[___][___] 	   	 S REKVIZITAMI\n \n");
		printf("REKVIZITY: Tenisák, klubko vlny, nebo jiný malý míček                ,-'''-,   "); printf("OMEZENÍ: -míče se lze dotýkat  \n");
        printf("PRAVIDLA: Základ je podobný jako vybíjené - cílem je trefit         /\\     /\\  "); printf("jen jednou rukou najednou\n");
        printf("ostatní míčem a nebýt sám trefen (kdo je trefen vypadl).            | |   | |  "); printf("-míč se odpaluje JEN nadhozením \n");
        printf("Ježto se však hra jmenuje Dementball, mají hráči určité omezení.    \\/     \\/  "); printf("jednou rukou a úderem druhou \n");
        printf("Roleplay 'dementů' je vítán. Kdo vyhraje, má titul vrchního dementa. '-...-'"); printf("-musíte se dotýkat 3 končetinami země \n \n");
		printf("ALTERNATIVNÍ PRAVIDLA: Můžete podle potřeby zmínit omezení. Např. ještě horší omezení pohybu a odpalování míče \npouze hlavou. \n");
		printf("POZN.: U nás celkem populární hra. Je třeba hru urychlit, aby posledních pár hráčů nebojovalo zbytečně dlouho a lidi \nse nenudili. Komentář z role sportovního komentátora může být vtipný. \n");
	}
	else if(strcmp(boi,"#02")==0 || strcmp(boi,"najelena")==0){
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
	}

	else if(strcmp(boi,"#03")==0 || strcmp(boi,"chaos")==0){
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
		printf("\\/____________/\\/_/    \\/_/ \\_\\___\\     /____/_/\\/_________/   \\_____\\/  -Matka: brání Romeovi, aby se dostal k Julii\n ");
		printf("                                                                        -Den: snaží se, aby bylo rozsvíceno\n");
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
	}
	else{
	printf("Toto ID neexistuje \n");
	}
}






// if(counter % 2 == 0){printf("          ");} else{printf("..........");}
