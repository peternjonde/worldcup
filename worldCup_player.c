
#include "worldcup_player.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void AddPlayer(void){
    int num = 0;
    
        struct database *player = malloc(sizeof(struct database));
        
        if (player == NULL){
            printf("DataBase full remove players to add more :)");
            goto end;
        }
        
        int code = 0;
      
        printf("Enter player code: ");
        scanf("%d", &code);
        
        struct database *check;
        for (check = players; check != NULL ; check = check->next){
            
            if (check->player_codes == code){
                
                printf("Player code already used try again :)\n");
                goto end;
                
                
            }
        }
        
        player->player_codes = code;
        
        printf("Enter player name: ");
        scanf(" %49[^\n]", player->player_names);
       
        
        printf("Enter player age: ");
        scanf("%d", &player->player_age);
        
        if (player->player_age < 17 || player->player_age > 99){
            
            printf("Player age invalid try again :)\n");
            goto end;
        }
       
        
        printf("Enter Player club: ");
        scanf(" %49[^\n]", player->player_club);
        
        
        player->next = players;
        players = player;
        
    
   // so that if something is wrong it just goes back to the main operation screen
end:
    num = num;

}
void search(void){
    int code = 0;
    int help = 0;
    printf("Enter player code: ");
    scanf("%d", &code);
    
    struct database *check;
    for (check = players; check != NULL ; check = check->next){
        
        if (check->player_codes == code){
            
            printf("\nPlayer Code   Player Name                 Age               Club");
           
            printf("\n%d           %s                       %d                            %s\n",check->player_codes,check->player_names,check->player_age,check->player_club );
            goto end;
            
        }
    }

  
    printf("\nPlayer code not found");
    
end:
    help = help;
}
void update(void){
    int code = 0;
    int help = 0;
    printf("Enter player code: ");
    scanf("%d", &code);
    
    struct database *check , *check2;
    
    for (check = players ,check2 = NULL; check != NULL ; check2 = check ,check = check->next){
        
        if (check->player_codes == code){
            help++;
            struct database *player = malloc(sizeof(struct database));
            
            if (player == NULL){
                printf("DataBase full remove players to add more :)");
                goto end;
            }
            
            player->player_codes = code;
            
            printf("Enter player name: ");
            scanf(" %49[^\n]", player->player_names);//team[num_teams].team_names)
           
            
            printf("Enter player age: ");
            scanf("%d", &player->player_age);//team[num_teams].team_group
            
            if (player->player_age < 17 || player->player_age > 99){
                
                printf("Player age invalid try again :)\n");
                goto end;
            }
           
            
            printf("Enter Player club: ");
            scanf(" %49[^\n]", player->player_club);
            
            check2->next = check->next;
            free(check);
            player->next = players;
            players = player;
            goto end;
            
            
        }
    }
    
end:
    if (help == 0)
        printf("\nPlayer code not found try again :)\n");
    help = help;
}
void print(void){
    
    printf("\nPlayer Code   Player Name         Age         Club");
    
    struct database *check;
    for (check = players; check != NULL ; check = check->next){
        
            printf("\n%d             %s        %d          %s\n  ",check->player_codes,check->player_names,check->player_age,check->player_club );
          
            
        
    }
}
void delete_player(void){
    int code = 0;
    int num = 0;
    printf("Enter player code: ");
    scanf("%d", &code);
    
    struct database *help;
    for (help = players; help != NULL ; help = help->next){
        
        if (help->player_codes == code){
            num++; // to see if they find a match 
            struct database *check , *check2;
            
            for (check = players, check2 = NULL; check != NULL && check->player_codes != code; check2 = check , check = check->next){
                
            }
            if (check == NULL){
                
            }
            if (check2 == NULL){
                players = players->next; // looks if its the first one
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
    
    
}
