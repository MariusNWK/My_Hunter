/*
** EPITECH PROJECT, 2020
** destroyer
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

void texts_destroyer(Game *all)
{
    sfText_destroy((*all).text_quit);
    sfText_destroy((*all).text_level);
    sfText_destroy((*all).text_points);
    sfText_destroy((*all).text_bestscore);
    sfText_destroy((*all).text_str);
    sfText_destroy((*all).text_score);
    sfText_destroy((*all).text_playagain);
}

void fonts_destroyer(Game *all)
{
    sfFont_destroy((*all).font);
    sfFont_destroy((*all).font_level);
}

void sprites_destroyer(Game *all)
{
    sfSprite_destroy((*all).sprite);
    sfSprite_destroy((*all).sprite_gameover);
    sfSprite_destroy((*all).sprite_fond);
    sfSprite_destroy((*all).sprite_cursor);
    sfSprite_destroy((*all).sprite_coeur);
    sfSprite_destroy((*all).sprite_coeur2);
    sfSprite_destroy((*all).sprite_coeur3);
    sfSprite_destroy((*all).sprite_robot);
    sfSprite_destroy((*all).sprite_robot2);
    sfSprite_destroy((*all).sprite_robot3);
    sfSprite_destroy((*all).sprite_robot4);
    sfSprite_destroy((*all).sprite_robot5);
    sfSprite_destroy((*all).sprite_robot6);
    sfSprite_destroy((*all).sprite_robot7);
    sfSprite_destroy((*all).sprite_explosion);
    sfSprite_destroy((*all).sprite_explosion2);
    sfSprite_destroy((*all).sprite_explosion3);
    sfSprite_destroy((*all).sprite_explosion4);
    sfSprite_destroy((*all).sprite_explosion5);
    sfSprite_destroy((*all).sprite_explosion6);
    sfSprite_destroy((*all).sprite_explosion7);
}

void textures_destroyer(Game *all)
{
    sfTexture_destroy((*all).texture);
    sfTexture_destroy((*all).texture_fond);
    sfTexture_destroy((*all).texture_cursor);
    sfTexture_destroy((*all).texture_coeur);
    sfTexture_destroy((*all).texture_robot);
    sfTexture_destroy((*all).texture_explosion);
    sfTexture_destroy((*all).texture_gameover);
}

void clocks_destroyer(Game *all)
{
    sfClock_destroy((*all).clock);
    sfClock_destroy((*all).clock_robot);
    sfClock_destroy((*all).clock_explosion);
    sfClock_destroy((*all).clock_explosion2);
    sfClock_destroy((*all).clock_explosion3);
    sfClock_destroy((*all).clock_explosion4);
    sfClock_destroy((*all).clock_explosion5);
    sfClock_destroy((*all).clock_explosion6);
    sfClock_destroy((*all).clock_explosion7);
    sfClock_destroy((*all).clock_game);
}
