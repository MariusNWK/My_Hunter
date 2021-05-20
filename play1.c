/*
** EPITECH PROJECT, 2020
** play1
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

void play1(Game *all)
{
    move_robot(all);
    set_points(all);
    set_textures(all);
    set_textures_rect(all);
    draw_basics(all);
    hp_management(all);
    display_levels_one(all);
    display_levels_two(all);
    set_positions(all);
}
