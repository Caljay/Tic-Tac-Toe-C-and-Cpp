#include <stdio.h>
#include <stdlib.h>

int board[9] = {1, 1, 2, 2, 1, 0, 2, 0, 1};

void initializeBoard() {

	for (int i = 0; i < 9; i++) {

		board[i] = 0;

	}


}
void printBoard() {

	for (int i = 0; i < 9; i++) {

		if (board[i] == 0) {


				printf("- ");
			
		}
		if (board[i] == 1) {
			printf("X ");
		}
		if (board[i] == 2) {
			printf("O ");

		}



		if ((1 + i) % 3 == 0) {
			printf("\n");
		}

	}


}

bool IsXTurn = true;
void setPos(int* input) {


	if (IsXTurn && board[*input - 1] == 0) {
		board[*input - 1] = 1;
		IsXTurn = !IsXTurn;
	}
	else if(board[*input - 1] == 0) {
		board[*input - 1] = 2;
		IsXTurn = !IsXTurn;
	}

	

}

bool checkForGameOver() {

	int index = 0;
	for (int i = 0; i < 9; i++) {

		if (board[i] == 0) {
			
			index++;
		}

		
	}
	if (index > 0) {
		return true;
	}
	else
		return false;
}
int main(void) {

	initializeBoard();
	
	int input = -1;
	bool isStillPlaying = true;

	while (isStillPlaying) {

		system("cls");
		printBoard();

		printf("\nPick a position!\n");
		printf("Top left is 1 bottom right is 9!\n");

		scanf_s("%i", &input);

		setPos(&input);
		input = -1;

		isStillPlaying = checkForGameOver();

		if (isStillPlaying == false) {

			system("cls");
			printBoard();
			break;
		}
	}
	printf("Game Over");
	printf("\nCheck who won!");
	printf("\nRun again to play again!");
	printf("\nPress any key to exit...");
	getchar();
	return 0;


	






}