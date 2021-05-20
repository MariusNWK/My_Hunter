/*
** EPITECH PROJECT, 2020
** initialiser1
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

void initial_sprites(Game *all)
{
    (*all).sprite = sfSprite_create();
    (*all).sprite_fond = sfSprite_create();
    (*all).sprite_cursor = sfSprite_create();
    (*all).sprite_coeur = sfSprite_create();
    (*all).sprite_coeur2 = sfSprite_create();
    (*all).sprite_coeur3 = sfSprite_create();
    (*all).sprite_robot = sfSprite_create();
    (*all).sprite_robot2 = sfSprite_create();
    (*all).sprite_robot3 = sfSprite_create();
    (*all).sprite_robot4 = sfSprite_create();
    (*all).sprite_robot5 = sfSprite_create();
    (*all).sprite_robot6 = sfSprite_create();
    (*all).sprite_robot7 = sfSprite_create();
    (*all).sprite_explosion = sfSprite_create();
    (*all).sprite_explosion2 = sfSprite_create();
    (*all).sprite_explosion3 = sfSprite_create();
    (*all).sprite_explosion4 = sfSprite_create();
    (*all).sprite_explosion5 = sfSprite_create();
    (*all).sprite_explosion6 = sfSprite_create();
    (*all).sprite_explosion7 = sfSprite_create();
    (*all).sprite_gameover = sfSprite_create();
}

void initial_textures(Game *all)
{
    (*all).texture = sfTexture_createFromFile("./images/sprite.png", NULL);
    (*all).texture_fond = sfTexture_createFromFile("./images/fond.jpg", NULL);
    (*all).texture_cursor = sfTexture_createFromFile("./images/cursor.png",
    NULL);
    (*all).texture_robot = sfTexture_createFromFile("./images/robot.png", NULL);
    (*all).texture_explosion =
    sfTexture_createFromFile("./images/explosion.png", NULL);
    (*all).texture_coeur = sfTexture_createFromFile("./images/coeur.png", NULL);
    (*all).texture_gameover = sfTexture_createFromFile("./images/gameover.png",
    NULL);
}

void initial_texts(Game *all)
{
    (*all).text_quit = sfText_create();
    (*all).text_level = sfText_create();
    (*all).text_points = sfText_create();
    (*all).text_bestscore = sfText_create();
    (*all).text_str = sfText_create();
    (*all).text_score = sfText_create();
    (*all).text_playagain = sfText_create();
}

void initial_clocks(Game *all)
{
    (*all).clock = sfClock_create();
    (*all).clock_robot = sfClock_create();
    (*all).clock_explosion = sfClock_create();
    (*all).clock_explosion2 = sfClock_create();
    (*all).clock_explosion3 = sfClock_create();
    (*all).clock_explosion4 = sfClock_create();
    (*all).clock_explosion5 = sfClock_create();
    (*all).clock_explosion6 = sfClock_create();
    (*all).clock_explosion7 = sfClock_create();
    (*all).clock_game = sfClock_create();
}
