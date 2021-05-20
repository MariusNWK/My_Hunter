/*
** EPITECH PROJECT, 2020
** robot5
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

void robot_explosion_5_one(Game *all, sfEvent *event)
{
    if (event->type == sfEvtMouseButtonPressed && (*all).coeurs > 0 &&
        ((*all).position_cursor.x > (*all).position_robot5.x -
        ((*all).rect_robot.width * (*all).scale_robot.x) / 2 &&
        (*all).position_cursor.x < (*all).position_robot5.x +
        ((*all).rect_robot.width * (*all).scale_robot.x) / 2 &&
        (*all).position_cursor.y > (*all).position_robot5.y -
        ((*all).rect_robot.height * (*all).scale_robot.y) / 2 &&
        (*all).position_cursor.y < (*all).position_robot5.y +
        ((*all).rect_robot.height * (*all).scale_robot.y) / 2)) {
        (*all).robot_destroyed5 = 5;
        (*all).position_robot5.x = (*all).position_robot5.x - 80;
        (*all).position_robot5.y = (*all).position_robot5.y - 80;
        (*all).rect_explosion5.top = 0;
        sfSprite_setPosition((*all).sprite_explosion5, (*all).position_robot5);
        respawn5(all);
        sfSprite_setPosition((*all).sprite_robot5, (*all).position_robot5);
        (*all).points = (*all).points + 100;
    }
}

void suite_5(Game *all)
{
    if ((*all).robot_destroyed5 == 5 && (*all).seconds_explosion5 > 0.02 &&
        (*all).rect_explosion5.top < 256 * 6) {
        move_rect(&(*all).rect_explosion5, 256, 2048);
        if ((*all).rect_explosion5.left == 0)
            (*all).rect_explosion5.top = (*all).rect_explosion5.top + 256;
        sfClock_restart((*all).clock_explosion5);
    }
    if ((*all).robot_destroyed5 == 5) {
        sfRenderWindow_drawSprite((*all).window,
        (*all).sprite_explosion5, NULL);
    }
}

void robot_explosion_5_two(Game *all)
{
    if ((*all).position_robot5.x > 2021 || (*all).position_robot5.x < -101) {
        (*all).coeurs = (*all).coeurs - 1;
        respawn5(all);
        sfSprite_setPosition((*all).sprite_robot5, (*all).position_robot5);
    }
    (*all).timesf = sfClock_getElapsedTime((*all).clock_game);
    (*all).seconds_game = (*all).timesf.microseconds / 1000000.0;
    if ((*all).seconds_game > 40) {
        sfRenderWindow_drawSprite((*all).window, (*all).sprite_robot5, NULL);
        (*all).fourty_seconds = 1;
    }
    (*all).timesf = sfClock_getElapsedTime((*all).clock_explosion5);
    (*all).seconds_explosion5 = (*all).timesf.microseconds / 1000000.0;
    suite_5(all);
}
