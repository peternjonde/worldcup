#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef WORLDCUP_PLAYER_H
#define WORLDCUP_PLAYER_H


struct database{
    int player_codes;
    char player_names[50];
    int player_age;
    char player_club[50];
    struct database *next;
}*players;

extern void AddPlayer(void);
extern void search(void);
extern void update(void);
extern void print(void);
extern void delete_player (void);

#endif
