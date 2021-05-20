/*
** EPITECH PROJECT, 2020
** initialiser2
** File description:
** myhunter
*/
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "my.h"

void initial_fonts(Game *all)
{
    (*all).font = sfFont_createFromFile("./fonts/KGDefyingGravity.ttf");
    (*all).font_level = sfFont_createFromFile("./fonts/AQUARIUM.otf");
}

void initial_seconds(Game *all)
{
    (*all).seconds = 0;
    (*all).seconds_robot = 0;
    (*all).seconds_explosion = 0;
    (*all).seconds_explosion2 = 0;
    (*all).seconds_explosion3 = 0;
    (*all).seconds_explosion4 = 0;
    (*all).seconds_explosion5 = 0;
    (*all).seconds_explosion6 = 0;
    (*all).seconds_explosion7 = 0;
    (*all).seconds_game = 0;
    (*all).ten_seconds = 0;
    (*all).twenty_seconds = 0;
    (*all).thirty_seconds = 0;
    (*all).fourty_seconds = 0;
    (*all).fifty_seconds = 0;
    (*all).sixty_seconds = 0;
}

void initial_robots_destroyed(Game *all)
{
    (*all).robot_destroyed = 0;
    (*all).robot_destroyed2 = 0;
    (*all).robot_destroyed3 = 0;
    (*all).robot_destroyed4 = 0;
    (*all).robot_destroyed5 = 0;
    (*all).robot_destroyed6 = 0;
    (*all).robot_destroyed7 = 0;
}

void initial_stats_game(Game *all)
{
    (*all).points = 0;
    (*all).coeurs = 3;
    (*all).fd = 0;
    (*all).quit = "to quit the game press Q";
    (*all).level1 = "Wave 1";
    (*all).level2 = "Wave 2";
    (*all).level3 = "Wave 3";
    (*all).level4 = "Wave 4";
    (*all).level5 = "Wave 5";
    (*all).level6 = "Wave 6";
    (*all).level7 = "Wave 7";
    (*all).score = "SCORE :";
    (*all).bestscore = "BEST SCORE :";
    (*all).newrecord = "NEW RECORD :";
    (*all).playagain = "Press Enter\nto restart";
    (*all).str = string_str("./highscore.txt");
    (*all).highscore = my_getnbr((*all).str);
}
