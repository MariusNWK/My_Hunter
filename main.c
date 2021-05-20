/*
** EPITECH PROJECT, 2020
** myhunter
** File description:
** graphique
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

size_t getfilesize(char const *filepath)
{
    struct stat st;

    if (stat(filepath, &st) != 0)
        return (0);
    return (st.st_size);
}

char *string_str(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char *str;

    str = malloc(getfilesize(filepath) + 1);
    read(fd, str, getfilesize(filepath));
    str[getfilesize(filepath)] = '\0';
    close(fd);
    return (str);
}

void analyse_events(sfRenderWindow *window, sfEvent event, Game *all)
{
    sfKeyEvent key;

    if (event.key.code == sfKeyQ) {
        sfRenderWindow_close(window);
    }
    if (event.key.code == sfKeyEnter && (*all).coeurs <= 0) {
        (*all).play = 1;
    }
}

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    (*rect).left = (*rect).left + offset;
    if ((*rect).left >= max_value) {
        (*rect).left = 0;
    }
}

int main(int ac, char **av)
{
    Game all;
    all.play = 1;
    sfVideoMode mode = {1920, 1080, 32};

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h' && my_strlen(av[1]) == 2)
        description();
    else if (ac == 1) {
        all.window = sfRenderWindow_create(mode, "SFML windows",
        sfFullscreen, NULL);
        while (all.play == 1) {
            all.play = 0;
            game(&all);
        }
        sfRenderWindow_destroy(all.window);
    }
    else {
        write(2, "Use ./my_hunter or ./my_hunter -h\n", 35);
        return (84);
    }
    return (0);
}
