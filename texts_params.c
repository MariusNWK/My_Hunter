/*
** EPITECH PROJECT, 2020
** texts_params
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

void texts_params_one(Game *all)
{
    sfText_setFont((*all).text_quit, (*all).font);
    sfText_setColor((*all).text_quit, sfWhite);
    sfText_setString((*all).text_quit, (*all).quit);
    sfText_setPosition((*all).text_quit, (*all).position_quit);
    sfText_setScale((*all).text_quit, (*all).scale_quit);
    sfText_setFont((*all).text_level, (*all).font_level);
    sfText_setPosition((*all).text_level, (*all).position_level);
    sfText_setScale((*all).text_level, (*all).scale_level);
    sfText_setFont((*all).text_points, (*all).font_level);
    sfText_setColor((*all).text_points, sfCyan);
    sfText_setPosition((*all).text_points, (*all).position_points);
    sfText_setScale((*all).text_points, (*all).scale_points);
    sfText_setFont((*all).text_playagain, (*all).font_level);
    sfText_setString((*all).text_playagain, (*all).playagain);
    sfText_setPosition((*all).text_playagain, (*all).position_playagain);
}

void texts_params_two(Game *all)
{
    sfText_setFont((*all).text_bestscore, (*all).font_level);
    sfText_setString((*all).text_bestscore, (*all).bestscore);
    sfText_setPosition((*all).text_bestscore, (*all).position_bestscore);
    sfText_setScale((*all).text_bestscore, (*all).scale_bestscore);
    sfText_setFont((*all).text_str, (*all).font_level);
    sfText_setString((*all).text_str, (*all).str);
    sfText_setColor((*all).text_str, sfGreen);
    sfText_setPosition((*all).text_str, (*all).position_str);
    sfText_setScale((*all).text_str, (*all).scale_level);
    (*all).text_score = sfText_copy((*all).text_bestscore);
    sfText_setPosition((*all).text_score, (*all).position_score);
    sfText_setString((*all).text_score, (*all).score);
}
