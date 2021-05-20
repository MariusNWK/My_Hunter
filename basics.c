/*
** EPITECH PROJECT, 2020
** basics
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

void draw_basics(Game *all)
{
    sfRenderWindow_drawSprite((*all).window, (*all).sprite_fond, NULL);
    sfRenderWindow_drawText((*all).window, (*all).text_quit, NULL);
    sfRenderWindow_drawText((*all).window, (*all).text_points, NULL);
    sfRenderWindow_drawText((*all).window, (*all).text_bestscore, NULL);
    sfRenderWindow_drawText((*all).window, (*all).text_str, NULL);
    sfRenderWindow_drawText((*all).window, (*all).text_score, NULL);
}

void hp_management(Game *all)
{
    if ((*all).coeurs >= 1) {
        sfRenderWindow_drawSprite((*all).window, (*all).sprite_coeur, NULL);
    }
    if ((*all).coeurs >= 2) {
        sfRenderWindow_drawSprite((*all).window, (*all).sprite_coeur2, NULL);
    }
    if ((*all).coeurs >= 3) {
        sfRenderWindow_drawSprite((*all).window, (*all).sprite_coeur3, NULL);
    }
}
