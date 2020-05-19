#include "board_drawer.h"

/**
 * @brief Prints the game onto the console
 * @param arena the space where it will be build
 */
void printColored(int arena[row][col],int circular)
{
    int k = 0;
    while (k < 500)
    {
        //clear screen
        printf("\033[2J");

        //hide cursor
        printf("\033[?25l");

        //goto 0,0
        printf("\033[0;0H");

        for (int i = 0; i < 40; ++i)
        {
            for (int j = 0; j < 40; ++j)
            {
                int c = (arena[i][j] == 1) ? 40 : 101;
                printf("\033[%dm ", c);
            }
            printf("\n");
        }

        //show cursor
        printf("\033[?25h");
        refresh(arena, circular);
    }
}
