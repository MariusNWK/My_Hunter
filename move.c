/*
** EPITECH PROJECT, 2020
** move
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

void move_robot(Game *all)
{
    (*all).timesf = sfClock_getElapsedTime((*all).clock_robot);
    (*all).seconds_robot = (*all).timesf.microseconds / 1000000.0;
    if ((*all).seconds_robot > 1 / all->fps) {
        sfSprite_move((*all).sprite_robot, (*all).offset_robot);
        if ((*all).ten_seconds == 1)
            sfSprite_move((*all).sprite_robot2, (*all).offset_robot2);
        if ((*all).twenty_seconds == 1)
            sfSprite_move((*all).sprite_robot3, (*all).offset_robot3);
        if ((*all).thirty_seconds == 1)
            sfSprite_move((*all).sprite_robot4, (*all).offset_robot4);
        if ((*all).fourty_seconds == 1)
            sfSprite_move((*all).sprite_robot5, (*all).offset_robot5);
        if ((*all).fifty_seconds == 1)
            sfSprite_move((*all).sprite_robot6, (*all).offset_robot6);
        if ((*all).sixty_seconds == 1)
            sfSprite_move((*all).sprite_robot7, (*all).offset_robot7);
        sfClock_restart((*all).clock_robot);
    }
}
