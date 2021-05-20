/*
** EPITECH PROJECT, 2020
** display_levels
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

void display_levels_one(Game *all)
{
    if ((*all).ten_seconds != 1) {
        sfText_setString((*all).text_level, (*all).level1);
        sfText_setColor((*all).text_level, sfWhite);
        sfRenderWindow_drawText((*all).window, (*all).text_level, NULL);
    }
    if ((*all).ten_seconds == 1 && (*all).twenty_seconds != 1) {
        sfText_setString((*all).text_level, (*all).level2);
        sfText_setColor((*all).text_level, sfCyan);
        sfRenderWindow_drawText((*all).window, (*all).text_level, NULL);
    }
    if ((*all).twenty_seconds == 1 && (*all).thirty_seconds != 1) {
        sfText_setString((*all).text_level, (*all).level3);
        sfText_setColor((*all).text_level, sfRed);
        sfRenderWindow_drawText((*all).window, (*all).text_level, NULL);
    }
    if ((*all).thirty_seconds == 1 && (*all).fourty_seconds != 1) {
        sfText_setString((*all).text_level, (*all).level4);
        sfText_setColor((*all).text_level, sfBlue);
        sfRenderWindow_drawText((*all).window, (*all).text_level, NULL);
    }
}

void display_levels_two(Game *all)
{
    if ((*all).fourty_seconds == 1 && (*all).fifty_seconds != 1) {
        sfText_setString((*all).text_level, (*all).level5);
        sfText_setColor((*all).text_level, sfGreen);
        sfRenderWindow_drawText((*all).window, (*all).text_level, NULL);
    }
    if ((*all).fifty_seconds == 1 && (*all).sixty_seconds != 1) {
        sfText_setString((*all).text_level, (*all).level6);
        sfText_setColor((*all).text_level, sfMagenta);
        sfRenderWindow_drawText((*all).window, (*all).text_level, NULL);
    }
    if ((*all).sixty_seconds == 1) {
        sfText_setString((*all).text_level, (*all).level7);
        sfText_setColor((*all).text_level, sfBlack);
        sfRenderWindow_drawText((*all).window, (*all).text_level, NULL);
    }
}
