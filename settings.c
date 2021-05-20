/*
** EPITECH PROJECT, 2020
** settings
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

void set_points(Game *all)
{
    (*all).points_str = int_to_str_converter((*all).points);
    sfText_setString((*all).text_points, (*all).points_str);
    free((*all).points_str);
}

void set_textures(Game *all)
{
    sfSprite_setTexture(all->sprite_fond, all->texture_fond, sfTrue);
    sfSprite_setTexture(all->sprite, all->texture, sfTrue);
    sfSprite_setTexture(all->sprite_cursor, all->texture_cursor, sfTrue);
    sfSprite_setTexture(all->sprite_gameover, all->texture_gameover, sfTrue);
    sfSprite_setTexture(all->sprite_coeur, all->texture_coeur, sfTrue);
    sfSprite_setTexture(all->sprite_coeur2, all->texture_coeur, sfTrue);
    sfSprite_setTexture(all->sprite_coeur3, all->texture_coeur, sfTrue);
    sfSprite_setTexture(all->sprite_robot, all->texture_robot, sfTrue);
    sfSprite_setTexture(all->sprite_robot2, all->texture_robot, sfTrue);
    sfSprite_setTexture(all->sprite_robot3, all->texture_robot, sfTrue);
    sfSprite_setTexture(all->sprite_robot4, all->texture_robot, sfTrue);
    sfSprite_setTexture(all->sprite_robot5, all->texture_robot, sfTrue);
    sfSprite_setTexture(all->sprite_robot6, all->texture_robot, sfTrue);
    sfSprite_setTexture(all->sprite_robot7, all->texture_robot, sfTrue);
    sfSprite_setTexture(all->sprite_explosion, all->texture_explosion, sfTrue);
    sfSprite_setTexture(all->sprite_explosion2, all->texture_explosion, sfTrue);
    sfSprite_setTexture(all->sprite_explosion3, all->texture_explosion, sfTrue);
    sfSprite_setTexture(all->sprite_explosion4, all->texture_explosion, sfTrue);
    sfSprite_setTexture(all->sprite_explosion5, all->texture_explosion, sfTrue);
    sfSprite_setTexture(all->sprite_explosion6, all->texture_explosion, sfTrue);
    sfSprite_setTexture(all->sprite_explosion7, all->texture_explosion, sfTrue);
}

void set_textures_rect(Game *all)
{
    sfSprite_setTextureRect((*all).sprite, (*all).rect);
    sfSprite_setTextureRect((*all).sprite_robot, (*all).rect_robot);
    sfSprite_setTextureRect((*all).sprite_robot2, (*all).rect_robot);
    sfSprite_setTextureRect((*all).sprite_robot3, (*all).rect_robot);
    sfSprite_setTextureRect((*all).sprite_robot4, (*all).rect_robot);
    sfSprite_setTextureRect((*all).sprite_robot5, (*all).rect_robot);
    sfSprite_setTextureRect((*all).sprite_robot6, (*all).rect_robot);
    sfSprite_setTextureRect((*all).sprite_robot7, (*all).rect_robot);
    sfSprite_setTextureRect((*all).sprite_explosion, (*all).rect_explosion);
    sfSprite_setTextureRect((*all).sprite_explosion2, (*all).rect_explosion2);
    sfSprite_setTextureRect((*all).sprite_explosion3, (*all).rect_explosion3);
    sfSprite_setTextureRect((*all).sprite_explosion4, (*all).rect_explosion4);
    sfSprite_setTextureRect((*all).sprite_explosion5, (*all).rect_explosion5);
    sfSprite_setTextureRect((*all).sprite_explosion6, (*all).rect_explosion6);
    sfSprite_setTextureRect((*all).sprite_explosion7, (*all).rect_explosion7);
}

void set_positions(Game *all)
{
    (*all).position_cursor.x =
    sfMouse_getPositionRenderWindow((*all).window).x - 25;
    (*all).position_cursor.y =
    sfMouse_getPositionRenderWindow((*all).window).y - 25;
    (*all).position_robot = sfSprite_getPosition((*all).sprite_robot);
    (*all).position_robot2 = sfSprite_getPosition((*all).sprite_robot2);
    (*all).position_robot3 = sfSprite_getPosition((*all).sprite_robot3);
    (*all).position_robot4 = sfSprite_getPosition((*all).sprite_robot4);
    (*all).position_robot5 = sfSprite_getPosition((*all).sprite_robot5);
    (*all).position_robot6 = sfSprite_getPosition((*all).sprite_robot6);
    (*all).position_robot7 = sfSprite_getPosition((*all).sprite_robot7);
}
