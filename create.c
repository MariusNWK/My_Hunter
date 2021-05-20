/*
** EPITECH PROJECT, 2020
** create
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

void create(Game *all)
{
    initial_sprites(all);
    initial_textures(all);
    initial_texts(all);
    initial_clocks(all);
    initial_fonts(all);
    initial_seconds(all);
    initial_robots_destroyed(all);
    initial_stats_game(all);
    rect_values_one(all);
    rect_values_two(all);
    offset_values(all);
    position_values_one(all);
    position_values_two(all);
    scale_values(all);
    texts_params_one(all);
    texts_params_two(all);
    sprites_params_one(all);
    sprites_params_two(all);
}
