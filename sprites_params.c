/*
** EPITECH PROJECT, 2020
** sprites_params
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

void sprites_params_one(Game *all)
{
    sfSprite_setPosition((*all).sprite_gameover, (*all).position_gameover);
    sfSprite_setScale((*all).sprite_gameover, (*all).scale_gameover);
    sfSprite_setScale((*all).sprite_fond, (*all).scale_fond);
    sfSprite_setColor((*all).sprite_cursor, sfWhite);
    sfSprite_setScale((*all).sprite_cursor, (*all).scale_cursor);
    sfSprite_setScale((*all).sprite_robot, (*all).scale_robot);
    sfSprite_setPosition((*all).sprite_robot, (*all).position_robot);
    (*all).sprite_robot2 = sfSprite_copy((*all).sprite_robot);
    sfSprite_setColor((*all).sprite_robot2, sfCyan);
    (*all).sprite_robot3 = sfSprite_copy((*all).sprite_robot);
    sfSprite_setColor((*all).sprite_robot3, sfRed);
    (*all).sprite_robot4 = sfSprite_copy((*all).sprite_robot);
    sfSprite_setColor((*all).sprite_robot4, sfBlue);
    (*all).sprite_robot5 = sfSprite_copy((*all).sprite_robot);
    sfSprite_setColor((*all).sprite_robot5, sfGreen);
    (*all).sprite_robot6 = sfSprite_copy((*all).sprite_robot);
    sfSprite_setColor((*all).sprite_robot6, sfMagenta);
    (*all).sprite_robot7 = sfSprite_copy((*all).sprite_robot);
    sfSprite_setColor((*all).sprite_robot7, sfBlack);
}

void sprites_params_two(Game *all)
{
    sfSprite_setColor((*all).sprite_explosion2, sfCyan);
    sfSprite_setColor((*all).sprite_explosion3, sfRed);
    sfSprite_setColor((*all).sprite_explosion4, sfBlue);
    sfSprite_setColor((*all).sprite_explosion5, sfGreen);
    sfSprite_setColor((*all).sprite_explosion6, sfMagenta);
    sfSprite_setColor((*all).sprite_explosion7, sfBlack);
    sfSprite_setPosition((*all).sprite_coeur, (*all).position_coeur);
    sfSprite_setScale((*all).sprite_coeur, (*all).scale_coeur);
    sfSprite_setPosition((*all).sprite_coeur2, (*all).position_coeur2);
    sfSprite_setScale((*all).sprite_coeur2, (*all).scale_coeur);
    sfSprite_setPosition((*all).sprite_coeur3, (*all).position_coeur3);
    sfSprite_setScale((*all).sprite_coeur3, (*all).scale_coeur);
}
