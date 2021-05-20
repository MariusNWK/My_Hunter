/*
** EPITECH PROJECT, 2020
** position_values
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

void position_values_one(Game *all)
{
    (*all).position_quit.x = 10;
    (*all).position_quit.y = 0;
    (*all).position_level.x = 900;
    (*all).position_level.y = 0;
    (*all).position_points.x = 600;
    (*all).position_points.y = 0;
    (*all).position_robot.x = -100;
    (*all).position_robot.y = 50;
}

void position_values_two(Game *all)
{
    (*all).position_coeur.x = 1200;
    (*all).position_coeur.y = 5;
    (*all).position_coeur2.x = 1250;
    (*all).position_coeur2.y = 5;
    (*all).position_coeur3.x = 1300;
    (*all).position_coeur3.y = 5;
    (*all).position_gameover.x = 660;
    (*all).position_gameover.y = 400;
    (*all).position_bestscore.x = 1600;
    (*all).position_bestscore.y = 0;
    (*all).position_score.x = 500;
    (*all).position_score.y = 0;
    (*all).position_str.x = 1750;
    (*all).position_str.y = 0;
    (*all).position_playagain.x = 860;
    (*all).position_playagain.y = 700;
}
