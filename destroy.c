/*
** EPITECH PROJECT, 2020
** destroy
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

void destroy(Game *all)
{
    texts_destroyer(all);
    fonts_destroyer(all);
    sprites_destroyer(all);
    textures_destroyer(all);
    clocks_destroyer(all);
}
