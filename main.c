#include <stdbool.h>
#include <stdio.h>

void loadBoard(short board[3]){

{


        for (int j = 0; j < 3; j++){
        
        if(board[j] == 0)
              printf("- ");

        
        }

        printf("\n");
       


    }

}

void intiate(short top[], short middle[],short bottom[]){

 for(int i = 0; i < 3; i++){

        top[i] = 0;
        middle[i] = 0;
        bottom[i] = 0;
    }

printf("\n\nWelcome to Tic Tac Toe\nHere is your board:\n");
loadBoard(top);
loadBoard(middle);
loadBoard(bottom);
}


int main(void){
    short top[3];
    short middle[3];
    short bottom[3];
    
   intiate(top, middle, bottom);

int input = 0;
printf("\nEnter a position!\nTop left is 1, bottom right is 9\n");
scanf("%d",&input);
printf("\n%d", input);

    


}