/*
** EPITECH PROJECT, 2020
** play2
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

void play2 (Game *all, sfEvent *event)
{
    robot_explosion_1_one(all, event);
    robot_explosion_1_two(all);
    robot_explosion_2_one(all, event);
    robot_explosion_2_two(all);
    robot_explosion_3_one(all, event);
    robot_explosion_3_two(all);
    robot_explosion_4_one(all, event);
    robot_explosion_4_two(all);
    robot_explosion_5_one(all, event);
    robot_explosion_5_two(all);
    robot_explosion_6_one(all, event);
    robot_explosion_6_two(all);
    robot_explosion_7_one(all, event);
    robot_explosion_7_two(all);
}
