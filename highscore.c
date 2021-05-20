/*
** EPITECH PROJECT, 2020
** highscore
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

void display_highscore(Game *all)
{
    if ((*all).points > (*all).highscore) {
        (*all).highscore = (*all).points;
        (*all).points_str = int_to_str_converter((*all).points);
        (*all).fd = open("./highscore.txt", O_WRONLY);
        write((*all).fd, (*all).points_str, getfilesize("./highscore.txt") + 1);
        close ((*all).fd);
        free((*all).str);
        (*all).str = string_str("./highscore.txt");
        sfText_setString((*all).text_str, (*all).str);
        sfText_setColor((*all).text_str, sfCyan);
        sfText_setString((*all).text_bestscore, (*all).newrecord);
        sfText_setColor((*all).text_bestscore, sfYellow);
        free((*all).points_str);
    }
}
