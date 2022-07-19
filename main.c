#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getCard (int nDeck) {
								 
	switch (nDeck) {
		case 1:
			return rand() % (43 + 1 - 1) + 1;
		case 2:
			return rand() % (40 + 1 - 1) + 1;
	}

}


int main() {

	int nMenuInput, nDeck, nDeckSelect, nTurnSelect, nHandInput, i;
	srand(time(NULL));

	// Decks
	char cDigitalBugs[43][50] = {"Mother Spider", "Spyder Spider", "Spyder Spider", "Spyder Spider",
								"Digital Bug Centibit", "Digital Bug Centibit", "Digital Bug Centibit", "Digital Bug Resistrider", 
								"Battlewasp - Twinbow the Attacker", "Battlewasp - Twinbow the Attacker", "Battlewasp - Twinbow the Attacker", "Bachibachibachi", 
								"Bachibachibachi", "Bachibachibachi", "Digital Bug Websolder", "Digital Bug Websolder", 
								"Digital Bug Websolder", "Digital Bug LEDybug", "Digital Bug LEDybug", "Digital Bug LEDybug", 
								"Digital Bug Cocoondenser", "Digital Bug Cocoondenser", "Digital Bug Cocoondenser", "Golden Ladybug", 
								"Golden Ladybug", "Golden Ladybug", "Bug Signal", "Bug Signal", 
								"Bug Signal", "Spider's Lair", "Spider's Lair", "Spider's Lair", 
								"Spider Web", "Spider Web", "Spider Web", "Bug Matrix", 
								"Bug Matrix", "Bug Matrix", "Bug Emergency", "Bug Emergency", 
								"Bug Emergency"};

	char cOjamaControl[40][50] = {"Ojama Green", "Ojama Green", "Ojama Green", "Ojama Yellow", 
								 "Ojama Yellow", "Ojama Yellow", "Ojama Black", "Ojama Black", 
								 "Ojama Blue",  "Ojama Blue", "Ojama Blue", "Ojama Red", 
								 "Ojama Red", "Ojama Red", "Big Shield Gardna", "Big Shield Gardna",
								 "Lava Golem", "Gagaga Gardna", "Gagaga Gardna", "Silent Swordsman",
								 "Silent Swordsman", "Mystic Mine", "Ojama Country", "Ojama Country", 
								 "Ojama Country", "Terraforming", "Ojamagic", "Ojamagic",
								 "Polymerization", "Polymerization", "Polymerization", "Fusion Sage", 
								 "Fusion Sage", "Robbin Goblin", "Robbin Goblin", "Royal Decree",
								 "Royal Decree", "Raigeki", "Lightning Storm", "Ojama Black"};
	// End of Decks

	while (nMenuInput != 0){

		// Input Reset
		nMenuInput = -1;

		system("cls");
		printf("\n     ===================================");
		printf("\n     |       YGO HAND SIMULATOR        |");
		printf("\n     ===================================");
		printf("\n\n");
		printf("\n [1] Start");
		printf("\n [0] Exit\n");

		while (nMenuInput != 1 && nMenuInput != 0) {

			printf("\n [INPUT]: ");
			scanf("%d", &nMenuInput);

		}

		if (nMenuInput == 1) {

			// Input Reset
			nDeckSelect = -1;

			system("cls");
			printf("\n [1] Digital Bugs Deck");
			printf("\n\n [2] Ojama Control Deck");
			printf("\n\n [0] Back\n");

			while (nDeckSelect > 2 || nDeckSelect < 0) {

				printf("\n [INPUT]: ");
				scanf("%d", &nDeckSelect);

				}

			if (nDeckSelect == 1 || nDeckSelect == 2) {

				system("cls");

				i = 0;
				nHandInput = -1;

				for (i = 0; i < 5; i++){

					if (nDeckSelect == 1){
						printf("\n [%d] %s [DEBUG = %d]", i + 1, cDigitalBugs[getCard(nDeckSelect)]), getCard(nDeckSelect);
					}
					else if (nDeckSelect == 2){
						printf("\n [%d] %s [DEBUG = %d]", i + 1, cOjamaControl[getCard(nDeckSelect)]), getCard(nDeckSelect);
					}
					
				}

				printf("\n\n %d cards in your hand.", i);
				printf("\n\n [0] Exit\n");

				while (nHandInput != 0){
					printf("\n [INPUT]: ");
					scanf("%d", &nHandInput);
				}	

			}

		}

	}

	return 0;
}