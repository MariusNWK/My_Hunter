/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h
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

typedef struct Game
{
    sfRenderWindow *window;
    sfSprite *sprite;
    sfSprite *sprite_fond;
    sfSprite *sprite_cursor;
    sfSprite *sprite_coeur;
    sfSprite *sprite_coeur2;
    sfSprite *sprite_coeur3;
    sfSprite *sprite_robot;
    sfSprite *sprite_robot2;
    sfSprite *sprite_robot3;
    sfSprite *sprite_robot4;
    sfSprite *sprite_robot5;
    sfSprite *sprite_robot6;
    sfSprite *sprite_robot7;
    sfSprite *sprite_explosion;
    sfSprite *sprite_explosion2;
    sfSprite *sprite_explosion3;
    sfSprite *sprite_explosion4;
    sfSprite *sprite_explosion5;
    sfSprite *sprite_explosion6;
    sfSprite *sprite_explosion7;
    sfSprite *sprite_gameover;
    sfTexture *texture;
    sfTexture *texture_fond;
    sfTexture *texture_cursor;
    sfTexture *texture_robot;
    sfTexture *texture_explosion;
    sfTexture *texture_coeur;
    sfTexture *texture_gameover;
    sfText *text_quit;
    sfText *text_level;
    sfText *text_points;
    sfText *text_bestscore;
    sfText *text_str;
    sfText *text_score;
    sfText *text_playagain;
    sfIntRect rect;
    sfIntRect rect_dragon;
    sfIntRect rect_explosion;
    sfIntRect rect_explosion2;
    sfIntRect rect_explosion3;
    sfIntRect rect_explosion4;
    sfIntRect rect_explosion5;
    sfIntRect rect_explosion6;
    sfIntRect rect_explosion7;
    sfIntRect rect_robot;
    sfClock *clock;
    sfClock *clock_robot;
    sfClock *clock_explosion;
    sfClock *clock_explosion2;
    sfClock *clock_explosion3;
    sfClock *clock_explosion4;
    sfClock *clock_explosion5;
    sfClock *clock_explosion6;
    sfClock *clock_explosion7;
    sfClock *clock_game;
    sfTime timesf;
    sfVector2f offset;
    sfVector2f offset_robot;
    sfVector2f offset_robot2;
    sfVector2f offset_robot3;
    sfVector2f offset_robot4;
    sfVector2f offset_robot5;
    sfVector2f offset_robot6;
    sfVector2f offset_robot7;
    sfVector2f position_quit;
    sfVector2f position_level;
    sfVector2f position_points;
    sfVector2f position_gameover;
    sfVector2f position_str;
    sfVector2f position_bestscore;
    sfVector2f position_score;
    sfVector2f position_playagain;
    sfVector2f position_robot;
    sfVector2f position_robot2;
    sfVector2f position_robot3;
    sfVector2f position_robot4;
    sfVector2f position_robot5;
    sfVector2f position_robot6;
    sfVector2f position_robot7;
    sfVector2f position_coeur;
    sfVector2f position_coeur2;
    sfVector2f position_coeur3;
    sfVector2f position_souris;
    sfVector2f scale_quit;
    sfVector2f scale_level;
    sfVector2f scale_points;
    sfVector2f scale_bestscore;
    sfVector2f scale_str;
    sfVector2f scale_coeur;
    sfVector2f scale_gameover;
    sfVector2f scale_sprite;
    sfVector2f scale_fond;
    sfVector2f scale_cursor;
    sfVector2f scale_robot;
    sfVector2f position_cursor;
    sfVector2u size_cursor;
    sfVector2u hotspot;
    sfUint32 style;
    sfUint8 *pixels;
    sfFont *font;
    sfFont *font_level;
    float seconds;
    float seconds_robot;
    float seconds_explosion;
    float seconds_explosion2;
    float seconds_explosion3;
    float seconds_explosion4;
    float seconds_explosion5;
    float seconds_explosion6;
    float seconds_explosion7;
    float seconds_game;
    float fps;
    int robot_destroyed;
    int robot_destroyed2;
    int robot_destroyed3;
    int robot_destroyed4;
    int robot_destroyed5;
    int robot_destroyed6;
    int robot_destroyed7;
    int ten_seconds;
    int twenty_seconds;
    int thirty_seconds;
    int fourty_seconds;
    int fifty_seconds;
    int sixty_seconds;
    int play;
    int points;
    int coeurs;
    int fd;
    char const *quit;
    char const *level1;
    char const *level2;
    char const *level3;
    char const *level4;
    char const *level5;
    char const *level6;
    char const *level7;
    char const *score;
    char const *bestscore;
    char const *newrecord;
    char const *playagain;
    char *points_str;
    char *str;
    int highscore;
} Game;

char *int_to_str_converter(int);
int my_getnbr(char *);
void respawn(Game *);
void respawn2(Game *);
void respawn3(Game *);
void respawn4(Game *);
void respawn5(Game *);
void respawn6(Game *);
void respawn7(Game *);
void initial_sprites(Game *);
void initial_textures(Game *);
void initial_texts(Game *);
void initial_clocks(Game *);
void initial_fonts(Game *);
void initial_seconds(Game *);
void initial_robots_destroyed(Game *);
void initial_stats_game(Game *);
void rect_values_one(Game *);
void rect_values_two(Game *);
void offset_values(Game *);
void position_values_one(Game *);
void position_values_two(Game *);
void scale_values(Game *);
void texts_params_one(Game *);
void texts_params_two(Game *);
void sprites_params_one(Game *);
void sprites_params_two(Game *);
void move_bird(Game *);
void move_robot(Game *);
void set_points(Game *);
void set_textures(Game *);
void set_textures_rect(Game *);
void draw_basics(Game *);
void hp_management(Game *);
void display_levels_one(Game *);
void display_levels_two(Game *);
void set_positions(Game *);
void robot_explosion_1_one(Game *, sfEvent *);
void robot_explosion_1_two(Game *);
void robot_explosion_2_one(Game *, sfEvent *);
void robot_explosion_2_two(Game *);
void robot_explosion_3_one(Game *, sfEvent *);
void robot_explosion_3_two(Game *);
void robot_explosion_4_one(Game *, sfEvent *);
void robot_explosion_4_two(Game *);
void robot_explosion_5_one(Game *, sfEvent *);
void robot_explosion_5_two(Game *);
void robot_explosion_6_one(Game *, sfEvent *);
void robot_explosion_6_two(Game *);
void robot_explosion_7_one(Game *, sfEvent *);
void robot_explosion_7_two(Game *);
void display_highscore(Game *);
void texts_destroyer(Game *);
void fonts_destroyer(Game *);
void sprites_destroyer(Game *);
void textures_destroyer(Game *);
void clocks_destroyer(Game *);
size_t getfilesize(char const *);
char *string_str(char const *);
void close_window(sfRenderWindow *);
void analyse_events(sfRenderWindow *, sfEvent, Game *);
void move_rect(sfIntRect *, int, int);
void create(Game *);
void play1(Game *);
void play2 (Game *, sfEvent *);
void destroy(Game *);
void game(Game *);
void description(void);
int my_strlen(char *);
