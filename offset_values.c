/*
** EPITECH PROJECT, 2020
** offset_values
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

void offset_values(Game *all)
{
    (*all).offset_robot.x = 2.5 * (100 / all->fps);
    (*all).offset_robot.y = 1 * (100 / all->fps);
    (*all).offset_robot2.x = 2.5 * (100 / all->fps);
    (*all).offset_robot2.y = 1 * (100 / all->fps);
    (*all).offset_robot3.x = 2.5 * (100 / all->fps);
    (*all).offset_robot3.y = 1 * (100 / all->fps);
    (*all).offset_robot4.x = 2.5 * (100 / all->fps);
    (*all).offset_robot4.y = 1 * (100 / all->fps);
    (*all).offset_robot5.x = 2.5 * (100 / all->fps);
    (*all).offset_robot5.y = 1 * (100 / all->fps);
    (*all).offset_robot6.x = 2.5 * (100 / all->fps);
    (*all).offset_robot6.y = 1 * (100 / all->fps);
    (*all).offset_robot7.x = 2.5 * (100 / all->fps);
    (*all).offset_robot7.y = 1 * (100 / all->fps);
}
