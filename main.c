#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char* welcome(void){

    char* p_playerName = malloc(16);
    system("cls");
    
    printf("Welcome to Story Game!\n");
    printf("What is your name? ");
    scanf("%s", p_playerName);

    printf("Welcome %s, We hope you survive...", p_playerName);
    return p_playerName;




}




int main(void){
    printf("Hello Story");
char* p_playerName = welcome();








    return 0;
}