/*
** EPITECH PROJECT, 2020
** robot2
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

void robot_explosion_2_one(Game *all, sfEvent *event)
{
    if (event->type == sfEvtMouseButtonPressed && (*all).coeurs > 0 &&
        ((*all).position_cursor.x > (*all).position_robot2.x -
        ((*all).rect_robot.width * (*all).scale_robot.x) / 2 &&
        (*all).position_cursor.x < (*all).position_robot2.x +
        ((*all).rect_robot.width * (*all).scale_robot.x) / 2 &&
        (*all).position_cursor.y > (*all).position_robot2.y -
        ((*all).rect_robot.height * (*all).scale_robot.y) / 2 &&
        (*all).position_cursor.y < (*all).position_robot2.y +
        ((*all).rect_robot.height * (*all).scale_robot.y) / 2)) {
        (*all).robot_destroyed2 = 2;
        (*all).position_robot2.x = (*all).position_robot2.x - 80;
        (*all).position_robot2.y = (*all).position_robot2.y - 80;
        (*all).rect_explosion2.top = 0;
        sfSprite_setPosition((*all).sprite_explosion2, (*all).position_robot2);
        respawn2(all);
        sfSprite_setPosition((*all).sprite_robot2, (*all).position_robot2);
        (*all).points = (*all).points + 100;
    }
}

void suite_2(Game *all)
{
    if ((*all).robot_destroyed2 == 2 && (*all).seconds_explosion2 > 0.02 &&
        (*all).rect_explosion2.top < 256 * 6) {
        move_rect(&(*all).rect_explosion2, 256, 2048);
        if ((*all).rect_explosion2.left == 0)
            (*all).rect_explosion2.top = (*all).rect_explosion2.top + 256;
        sfClock_restart((*all).clock_explosion2);
    }
    if ((*all).robot_destroyed2 == 2) {
        sfRenderWindow_drawSprite((*all).window,
        (*all).sprite_explosion2, NULL);
    }
}

void robot_explosion_2_two(Game *all)
{
    if ((*all).position_robot2.x > 2021 || (*all).position_robot2.x < -101) {
        (*all).coeurs = (*all).coeurs - 1;
        respawn2(all);
        sfSprite_setPosition((*all).sprite_robot2, (*all).position_robot2);
    }
    (*all).timesf = sfClock_getElapsedTime((*all).clock_game);
    (*all).seconds_game = (*all).timesf.microseconds / 1000000.0;
    if ((*all).seconds_game > 10) {
        sfRenderWindow_drawSprite((*all).window, (*all).sprite_robot2, NULL);
        (*all).ten_seconds = 1;
    }
    (*all).timesf = sfClock_getElapsedTime((*all).clock_explosion2);
    (*all).seconds_explosion2 = (*all).timesf.microseconds / 1000000.0;
    suite_2(all);
}
