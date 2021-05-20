/*
** EPITECH PROJECT, 2020
** game
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

void game(Game *all)
{
    sfEvent event;

    all->fps = 120;
    create(all);
    sfRenderWindow_setMouseCursorVisible(all->window, sfFalse);
    sfRenderWindow_setFramerateLimit(all->window, all->fps);
    while (sfRenderWindow_isOpen(all->window) && all->play == 0) { play1(all);
        while (sfRenderWindow_pollEvent(all->window, &event))
            analyse_events(all->window, event, all);
        play2(all, &event);
        if (all->coeurs <= 0) {
            sfRenderWindow_drawSprite(all->window, all->sprite_gameover, NULL);
            sfRenderWindow_drawText(all->window, all->text_playagain, NULL);
        }
        display_highscore(all);
        sfSprite_setPosition(all->sprite_cursor, all->position_cursor);
        sfRenderWindow_drawSprite(all->window, all->sprite_cursor, NULL);
        sfRenderWindow_display(all->window);
        sfRenderWindow_clear(all->window, sfBlack);
    }
    destroy(all);
}
