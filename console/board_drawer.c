#include "board_drawer.h"

void printColored(int arena[row][col])
{

    //clear screen
    printf("\033[2J");

    //hide cursor
    printf("\033[?25l");

    //goto 0,0
    printf("\033[0;0H");

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            int c = (arena[i][j] == 1) ? 40 : 101;
            printf("\033[%dm ", c);
        }
        printf("\n");
    }

    //show cursor
    printf("\033[?25h");
}
