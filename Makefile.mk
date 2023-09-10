worldCupDB: worldCupDB.o worldCup_player.o worldCup_team.o
    gcc -o worldCupDB worldCupDB.o worldCup_player.o worldCup_team.o

worldCupDB.o: worldCupDB.c worldCup_player.h worldCup_team.h
    gcc -c worldCupDB.c

worldCup_player.o: worldCup_player.c worldCup_player.h
    gcc -c worldCup_player.c

worldCup_team.o: worldCup_team.c worldCup_team.h
    gcc -c worldCup_player.c
