/*
Addison Kuykendall
This is the main function which contains a while loop that repeatedly asks for user input of Rock Paper Scissors or exit and 
then calls the game function with the input.
*/
#include "game.h"
#include <string.h>
#include <stdio.h>
void main(){
  char input[8];
  int result = 7;
  while(!strcmp(input, "exit")==0){
    result = 7;
    printf("Rock Paper Scissors! (Type one in please, and capitalize the first letter,  or exit to quit)\n");
    scanf("%s", input);
    if(strcmp(input, "exit")==0){
      result = 10;
    }
    else  if(strcmp(input, "Rock")==0||strcmp(input, "Paper")==0||strcmp(input, "Scissors")==0||strcmp(input, "exit")==0){
      result = game(input);
    }
    else{
      printf("Invalid Input\n");
    }
    if(result == 0){
      printf("Tie\n");
    }
    if(result==1){
      printf("Win\n");
    }
    if(result==2){
      printf("Lose\n");
    }
  }
}
  
  
