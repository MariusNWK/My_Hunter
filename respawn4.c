/*
** EPITECH PROJECT, 2020
** respawn4
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

void switch_respawn4(int alea, float add, Game *all)
{
    switch (alea) {
    case 2 : all->position_robot4.x = -100;
        all->position_robot4.y = 500;
        all->offset_robot4.x = (2.5 + add) * (100 / all->fps);
        all->offset_robot4.y = 0.2 * (100 / all->fps); break;
    case 3 : all->position_robot4.x = 2020;
        all->position_robot4.y = 500;
        all->offset_robot4.x = (-2.5 - add) * (100 / all->fps);
        all->offset_robot4.y = 0.2 * (100 / all->fps); break;
    case 1 : all->position_robot4.x = -100;
        all->position_robot4.y = 500;
        all->offset_robot4.x = (2.5 + add) * (100 / all->fps);
        all->offset_robot4.y = 0.2 * (100 / all->fps); break;
    case 4 : all->position_robot4.x = 2020;
        all->position_robot4.y = 500;
        all->offset_robot4.x = (-2.5 - add) * (100 / all->fps);
        all->offset_robot4.y = 0.2 * (100 / all->fps); break;
    }
}

void respawn4(Game *all)
{
    int alea = 0;
    float add = 0;

    if (all->seconds_game > 90) {
        add = 1.5;
    }
    srand(time(NULL));
    alea = rand() % 4 + 1;
    switch_respawn4(alea, add, all);
}
