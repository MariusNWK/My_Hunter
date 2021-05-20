/*
** EPITECH PROJECT, 2020
** description
** File description:
** myhunter
*/
#include <unistd.h>

void description(void)
{
    write(1, "\nShoot the robots before they reach the limits of the map", 57);
    write(1, "\nYou lose a life everytime a robot escapes\n", 43);
    write(1, "You start the game with 3 lives\n", 32);
    write(1, "Try to beat the best score everytime\n", 37);
    write(1, "Use ./my_hunter to play !\n", 26);
    write(1, "When the game is over, press Enter to play again\n", 49);
    write(1, "Press Q to quit the game\n\n", 26);
}
