/*
** EPITECH PROJECT, 2020
** scales_values
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

void scale_values(Game *all)
{
    (*all).scale_quit.x = 1.2;
    (*all).scale_quit.y = 1;
    (*all).scale_level.x = 1.2;
    (*all).scale_level.y = 1.2;
    (*all).scale_points.x = 1.2;
    (*all).scale_points.y = 1.2;
    (*all).scale_bestscore.x = 1.2;
    (*all).scale_bestscore.y = 1.2;
    (*all).scale_coeur.x = 0.05;
    (*all).scale_coeur.y = 0.05;
    (*all).scale_sprite.x = 1;
    (*all).scale_sprite.y = 1;
    (*all).scale_fond.x = 1;
    (*all).scale_fond.y = 1.03;
    (*all).scale_cursor.x = 0.1;
    (*all).scale_cursor.y = 0.1;
    (*all).scale_robot.x = 0.2;
    (*all).scale_robot.y = 0.2;
    (*all).scale_gameover.x = 0.4;
    (*all).scale_gameover.y = 0.4;
}
