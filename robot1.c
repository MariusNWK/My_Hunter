/*
** EPITECH PROJECT, 2020
** robot1
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

void robot_explosion_1_one(Game *all, sfEvent *event)
{
    if (event->type == sfEvtMouseButtonPressed && (*all).coeurs > 0 &&
        ((*all).position_cursor.x > (*all).position_robot.x -
        ((*all).rect_robot.width * (*all).scale_robot.x) / 2 &&
        (*all).position_cursor.x < (*all).position_robot.x +
        ((*all).rect_robot.width * (*all).scale_robot.x) / 2 &&
        (*all).position_cursor.y > (*all).position_robot.y -
        ((*all).rect_robot.height * (*all).scale_robot.y) / 2 &&
        (*all).position_cursor.y < (*all).position_robot.y +
        ((*all).rect_robot.height * (*all).scale_robot.y) / 2)) {
        (*all).robot_destroyed = 1;
        (*all).position_robot.x = (*all).position_robot.x - 80;
        (*all).position_robot.y = (*all).position_robot.y - 80;
        (*all).rect_explosion.top = 0;
        sfSprite_setPosition((*all).sprite_explosion, (*all).position_robot);
        respawn(all);
        sfSprite_setPosition((*all).sprite_robot, (*all).position_robot);
        (*all).points = (*all).points + 100;
    }
}

void robot_explosion_1_two(Game *all)
{
    if ((*all).position_robot.x > 2021 || (*all).position_robot.x < -101) {
        (*all).coeurs = (*all).coeurs - 1;
        respawn(all);
        sfSprite_setPosition((*all).sprite_robot, (*all).position_robot);
    }
    sfRenderWindow_drawSprite((*all).window, (*all).sprite_robot, NULL);
    (*all).timesf = sfClock_getElapsedTime((*all).clock_explosion);
    (*all).seconds_explosion = (*all).timesf.microseconds / 1000000.0;
    if ((*all).robot_destroyed == 1 && (*all).seconds_explosion > 0.02 &&
        (*all).rect_explosion.top < 256 * 6) {
        move_rect(&(*all).rect_explosion, 256, 2048);
        if ((*all).rect_explosion.left == 0)
            (*all).rect_explosion.top = (*all).rect_explosion.top + 256;
        sfClock_restart((*all).clock_explosion);
    }
    if ((*all).robot_destroyed == 1) {
        sfRenderWindow_drawSprite((*all).window, (*all).sprite_explosion, NULL);
    }
}
