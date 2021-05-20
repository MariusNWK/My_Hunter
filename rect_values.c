/*
** EPITECH PROJECT, 2020
** rect_values
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

void rect_values_one(Game *all)
{
    (*all).rect.top = 0;
    (*all).rect.left = 0;
    (*all).rect.width = 110;
    (*all).rect.height = 110;
    (*all).rect_explosion.top = 0;
    (*all).rect_explosion.left = 0;
    (*all).rect_explosion.width = 256;
    (*all).rect_explosion.height = 256;
    (*all).rect_explosion2.top = 0;
    (*all).rect_explosion2.left = 0;
    (*all).rect_explosion2.width = 256;
    (*all).rect_explosion2.height = 256;
    (*all).rect_explosion3.top = 0;
    (*all).rect_explosion3.left = 0;
    (*all).rect_explosion3.width = 256;
    (*all).rect_explosion3.height = 256;
    (*all).rect_explosion4.top = 0;
    (*all).rect_explosion4.left = 0;
    (*all).rect_explosion4.width = 256;
    (*all).rect_explosion4.height = 256;
}

void rect_values_two(Game *all)
{
    (*all).rect_explosion5.top = 0;
    (*all).rect_explosion5.left = 0;
    (*all).rect_explosion5.width = 256;
    (*all).rect_explosion5.height = 256;
    (*all).rect_explosion6.top = 0;
    (*all).rect_explosion6.left = 0;
    (*all).rect_explosion6.width = 256;
    (*all).rect_explosion6.height = 256;
    (*all).rect_explosion7.top = 0;
    (*all).rect_explosion7.left = 0;
    (*all).rect_explosion7.width = 256;
    (*all).rect_explosion7.height = 256;
    (*all).rect_robot.top = 80;
    (*all).rect_robot.left = 90;
    (*all).rect_robot.width = 500;
    (*all).rect_robot.height = 350;
}
