
#include "worldcup_team.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void AddTeams(void){
    int num = 0;
    
        struct databaseT *team = malloc(sizeof(struct databaseT)); // create pointer
        
        if (team == NULL){
            printf("DataBase full remove Teams to add more :)"); // see if space in memory
            goto end;
        }
        
        int code = 0;
      
        printf("Enter Team code: ");
        scanf("%d", &code);
        
        struct databaseT *check;
    // checks if code already used
        for (check = teams; check != NULL ; check = check->next){
            
            if (check->team_codes == code){
                
                printf("Team code already used try again :)\n");
                goto end;
                
                
            }
        }
        
    team->team_codes = code;
        
        printf("Enter Team name: ");
        scanf(" %24[^\n]", team->team_names); // only takes 24 inputs and stops at newline
        
        struct databaseT *check2;
        for (check2 = teams; check2 != NULL ; check2 = check2->next){
        
        if (check2->team_names == team->team_names){
            
            printf("Team name already used try again :)\n");
            goto end;
        
        }
    }
    
    printf("Enter Team group: ");
    scanf(" %2[^\n]", team->team_group); // only take 2 characters
    
    struct databaseT *check3;
    
    for (check3 = teams; check3 != NULL ; check3 = check3->next){
    
    if (check3->team_group == team->team_group){
        
        printf("Team group already used :)\n");
        goto end;
    
    }
             
}
    if ( team->team_group[0] == 'A' ||team->team_group[0] == 'B' ||team->team_group[0] == 'C' ||team->team_group[0] == 'D' ||team->team_group[0] == 'E' ||team->team_group[0] == 'F' ||team->team_group[0] == 'G' ||team->team_group[0] == 'H'){
        
    }
    
    if (team->team_group[1] == '1' || team->team_group[1] == '2' ||team->team_group[1] == '3' ||team->team_group[1] == '4'){
        
    }
    else{
        printf("Error with group name try again :)\n");
        goto end;
    }
       
        
    printf("Enter Team colour: ");
    scanf(" %c", &team->team_color);
    
    if (team->team_color == 'R' || team->team_color == 'O'||team->team_color == 'Y'|| team->team_color == 'G'|| team->team_color == 'B'|| team->team_color == 'I'|| team->team_color == 'V'){
        
    
    }
    else{
        printf("Error with team color try again :)\n");
        goto end;
    }
       
        
      
        team->next = teams;
        teams = team;
        
      
    
end:
    num = num;

}
void search_teams(void){
    int code = 0;
    int help = 0;
    printf("Enter Team code: ");
    scanf("%d", &code);
    
    struct databaseT *check;
    for (check = teams; check != NULL ; check = check->next){
        
        if (check->team_codes == code){
            
            printf("\nTeam Code     Team Name         Group         Colour");
           
            printf("\n%d            %s              %s          %c\n  ",check->team_codes,check->team_names,check->team_group,check->team_color );
            goto end;
            
        }
    }

  
    printf("\nPlayer code not found");
    
end:
    help = help;
}
void update_teams(void){
    int code = 0;
    int help = 0;
    printf("Enter Team code: ");
    scanf("%d", &code);
    
    struct databaseT *check , *check2;
    
    for (check = teams ,check2 = NULL; check != NULL ; check2 = check ,check = check->next){
        
        if (check->team_codes == code){
            help++;
            
            struct databaseT *team = malloc(sizeof(struct databaseT));
            
            if (team == NULL){
                printf("DataBase full remove Team to add more :)");
                goto end;
            }
            
            team->team_codes = code;
            
            printf("Enter Team name: ");
            scanf(" %24[^\n]", team->team_names);
            
            struct databaseT *check3;
            for (check3 = teams; check3 != NULL ; check3 = check3->next){
            
            if (check3->team_names == team->team_names){
                
                printf("Team name already used try again :)\n");
                goto end;
            
            }
        }
            
            printf("Enter Team group: ");
            scanf(" %2[^\n]", team->team_group);
            
            struct databaseT *check4;
            
            for (check4 = teams; check4 != NULL ; check4 = check4->next){
            
            if (check4->team_group == team->team_group){
                
                printf("Team group already used :)\n");
                goto end;
            
            }
                     
        }
            if ( team->team_group[0] == 'A' ||team->team_group[0] == 'B' ||team->team_group[0] == 'C' ||team->team_group[0] == 'D' ||team->team_group[0] == 'E' ||team->team_group[0] == 'F' ||team->team_group[0] == 'G' ||team->team_group[0] == 'H'){
                
            }
            
            if (team->team_group[1] == '1' || team->team_group[1] == '2' ||team->team_group[1] == '3' ||team->team_group[1] == '4'){
                
            }
            else{
                printf("Error with group name try again :)\n");
                goto end;
            }
        
            printf("Enter Team colour: ");
            scanf(" %c", &team->team_color);
            
            if (team->team_color == 'R' || team->team_color == 'O'||team->team_color == 'Y'|| team->team_color == 'G'|| team->team_color == 'B'|| team->team_color == 'I'|| team->team_color == 'V'){
                
            
            }
            else{
                printf("Error with team color try again :)\n");
                goto end;
            }
           
                // to remove the old team with the new updated one
                check2->next = check->next;
                free(check);
                team->next = teams;
                teams = team;
                goto end;
            
           
            
            
            
        }
    }
    
end:
    if (help == 0)
        printf("\nTeam code not found try again :)\n");
    help = help;
}
void print_teams(void){
    
    printf("\nTeam Code     Team Name         Group         Colour");
    
    struct databaseT *check;
    for (check = teams; check != NULL ; check = check->next){
        
            printf("\n%d            %s              %s          %c\n  ",check->team_codes,check->team_names,check->team_group,check->team_color );
          
            
        
    }
}
void delete_teams (void){
    int code = 0;
    int num = 0;
    printf("Enter Team code: ");
    scanf("%d", &code);
    
    struct databaseT *help;
    for (help = teams; help != NULL ; help = help->next){
        
        if (help->team_codes == code){
            num++;
            struct databaseT *check , *check2;
            
            for (check = teams, check2 = NULL; check != NULL && check->team_codes != code; check2 = check , check = check->next){
                
            }
            if (check == NULL){
                
            }
            if (check2 == NULL){
                teams = teams->next; // looks if its the first one
            }
            else{
                
                check2->next = check->next;
                free(check);
            }
            goto end;
        }
    }
end:
    if (num == 0)
        printf("\nPlayer code not found try again :)\n");
    num = num ;
    
}
//int main(int argc, const char * argv[]) {
//
//    printf("****************** \n* 2211 World Cup * \n******************\n");
//    char operation;
//    while (0 == 0){
//
//        printf("\nEnter operation code: ");
//        scanf(" %c",&operation);
//        if (operation == 'i'){
//
//            AddTeams();
//
//        }
//        else if (operation == 's'){
//
//            search();
//
//        }
//        else if (operation == 'u'){
//
//            update();
//
//        }
//        else if (operation == 'p'){
//
//            print();
//
//        }
//        else if (operation == 'd'){
//
//            delete();
//
//        }
//        else if (operation == 'q'){
//            free(teams);
//            exit(0);
//
//        }
//        else{
//            printf("\nWrong input try again :)");
//        }
//    }
//    return 0;
//}
