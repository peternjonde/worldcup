//
//  main.c
//  final
//
//  Created by Peter Njonde on 2022-11-29.
//
#include "worldcup_team.h"
#include "worldcup_player.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void help(void){
    
    printf("Welcome to the help section\n\nPress q to quit\nt for team operation\np for player operations\n");
}
int main(int argc, const char * argv[]) {
    char operations;
    printf("****************** \n* 2211 World Cup * \n******************\n");
    while (0 == 0){
    printf("\nEnter operation code: ");
    scanf(" %c",&operations);
    
    if (operations == 'h'){
        help();
    }
    else if (operations == 'q'){
        exit(0);
    }
        // calls functions from worldcup_team
    else if (operations == 't'){
        printf("TEAM MODE:");
        char operation;
         while (0 == 0){
     
             printf("\nEnter operation code for team: ");
             scanf(" %c",&operation);
             if (operation == 'i'){
     
                 AddTeams();
     
             }
             else if (operation == 's'){
     
                 search_teams();
     
             }
             else if (operation == 'u'){
     
                 update_teams();
     
             }
             else if (operation == 'p'){
     
                 print_teams();
     
             }
             else if (operation == 'd'){
     
                 delete_teams();
     
             }
             else if (operation == 'q'){
                 exit(0);
     
             }
             else{
                 printf("\nWrong input try again :)");
             }
         }
    }
        // calls functions from worldcup_player
    else if (operations == 'p'){
        printf("PPLAYER MODE:");
        char oper;
         while (0 == 0){
     
             printf("\nEnter operation code for player: ");
             scanf(" %c",&oper);
             if (oper == 'i'){
     
                 AddPlayer();
     
             }
             else if (oper == 's'){
     
                 search();
     
             }
             else if (oper == 'u'){
     
                 update();
     
             }
             else if (oper == 'p'){
     
                 print();
     
             }
             else if (oper == 'd'){
     
                 delete_player();
     
             }
             else if (oper == 'q'){
                 exit(0);
     
             }
             else{
                 printf("\nWrong input try again :)");
             }
         }
    }
    else{
        printf("Wrong input try again :)");
    }
    
    }
        return 0;
}
