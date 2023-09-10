#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef WORLDCUP_TEAM_H
#define WORLDCUP_TEAM_H

struct databaseT{
    int team_codes;
    char team_names[25];
    char team_group[3];
    char team_color;
    struct databaseT *next;
    
}*teams;

extern void AddTeams(void);
extern void search_teams(void);
extern void update_teams(void);
extern void print_teams(void);
extern void delete_teams (void);

#endif
