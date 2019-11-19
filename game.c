/*
Addison Kuykendall
this file contains the game function, which takes the user input as a parameter and then randomly generates rock paper or scissors and returns who wins
 */

#include "game.h"
#include <string.h>
#include <stdlib.h>
int game(char user[8]){
  int randnum = rand()%3;
  if(randnum==Rock){
    if(strcmp(user, "Scissors")==0){
	return 2;
    }
    else if(strcmp(user, "Paper")==0){
	return 1;
    }
    else{
      return 0;
    }
  }
  if(randnum==Paper){
    if(strcmp(user, "Scissors")==0){
      return 1;
    }
    else if(strcmp(user, "Rock")==0){
      return 2;
    }
    else{
      return 0;
    }
  }
  if(randnum==Scissors){
    if(strcmp(user, "Rock")==0){
      return 1;
    }
    else if(strcmp(user, "Paper")==0){
      return 2;
    }
    else{
      return 0;
    }
  }
}
