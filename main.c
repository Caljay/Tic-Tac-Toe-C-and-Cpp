#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool IsXTurn;
bool IsNotComplete = true;
void loadBoard(short board[]){




        for (int j = 0; j < 3; j++){
        
        if(board[j] == 0)
              printf("- ");
        
        if(board[j] == 1)
            printf("%c ", 'X');

        if(board[j] == 2)
            printf("%c ", 'O');

        }

        printf("\n");
       


}
void checkForGameOver(short top[], short middle[], short bottom[]){

int checker = 0;
for (int i = 0; i < 3; i++)
{

if(top[i] != 0 && bottom[i] != 0 && middle[i] != 0){
checker++;
}




}
if(checker >= 3 ){
    IsNotComplete = false;
}

return;
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

void setSpot(int index, short top[], short middle[], short bottom[]){

int place = 1;


if(IsXTurn)
    place = 2;





if(index < 4){
    if(top[index - 1] == 0)
        top[index - 1] = place;
}
    
    if(index >= 4){
    if(middle[index - 4] == 0)
        middle[index - 4] = place;
}

 if(index > 6)
 {      
     if(bottom[index - 7] == 0)
        bottom[index - 7] = place;
}
    

IsXTurn = !IsXTurn;
return;
}

int main(void){
  
    short top[3];
    short middle[3];
    short bottom[3];
    IsXTurn = true;
   intiate(top, middle, bottom);

while(IsNotComplete){
int input = 0;
printf("\nEnter a position!\nTop left is 1, bottom right is 9\n");
scanf("%d", &input);



if(input > 9 || input < 1){

    input = 0;
    continue;
}
system("cls");
setSpot(input, top, middle, bottom);

loadBoard(top);
loadBoard(middle);
loadBoard(bottom);
checkForGameOver(top, middle, bottom);

}
if(!IsNotComplete){
printf("\nThank you for playing!");

}
  exit(0);
}