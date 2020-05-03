#include "game.h"

int isValidCell(int x, int y, int r, int c)
{
    if ((x >= 0 && x < r) && (y >= 0 && y < c))
        return 1;
    else
        return 0;
}

//original
// int aliveNeighborCount(int i, int j, int a[col][row])
// {
//     int counter = 0;
//     int x = -1, y = -1;
//     int neighbors[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, //TOP
//                         {0, -1}, {0, 1},//LEFT N RIGHT
//                         {1, -1}, {1, 0}, {1, 1}};//BOTTOM

//     for (int k = 0; k < 8; k++)
//     {
//         x = i + neighbors[k][0];
//         y = j + neighbors[k][1];
//         if (isValidCell(x, y, col, row))//check if doesnt cross the borders
//         {
//             if (a[x][y] == 1)
//                 counter++;
//         }
//     }

//     return counter;
// }
//updated
int aliveNeighborCount(int i, int j, int a[col][row])
{
    int counter = 0;
    int x = -1, y = -1;
    int neighbors[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, //TOP
                           {0, -1},
                           {0, 1}, //LEFT N RIGHT
                           {1, -1},
                           {1, 0},
                           {1, 1}}; //BOTTOM

    for (int k = 0; k < 8; k++)
    {
        x = i + neighbors[k][0];
        y = j + neighbors[k][1];
        // printf("x is %d and y is %d\n", x, y);
        if (isValidCell(x, y, col, row)) //check if doesnt cross the borders
        {
            if (a[x][y] == 1)
                counter++;
        }
        //diogonals
        else if (x == -1 && y == -1) //top left
        {
            if (a[row-1][col-1] == 1)
                counter++;
        }
        else if (x == -1 && y == col) //top right
        {
            if (a[row-1][0] == 1)
                counter++;
        }
        else if (x == row && y == -1) //bottom left
        {
            if (a[0][col-1] == 1)
                counter++;
        }
        else if (x == row && y == col) //bottom right
        {
            if (a[0][0] == 1)
                counter++;
        }
        //row shifts
        else if (x == row) //row bottom
        {
            if (a[0][y] == 1)
                counter++;
        }
        else if (x == -1) //row up
        {
            if (a[col-1][y] == 1)
               counter++;
        }
        //column shifts
        else if (y == col) //columup down
        {
           if (a[x][0] == 1)
               counter++;
        }
        else if (y == -1) //column up
        {
           if (a[x][col-1] == 1)
               counter++;
        }
    }

    return counter;
}

void printArena(int a[col][row])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void copy_arr(int oldarr[row][col], int newarr[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            newarr[i][j] = oldarr[i][j];
        }
    }
}

void refresh(int arena[row][col]){
    int new_arena[row][col] = {0};
    
    printf("\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
        if (arena[i][j] == 0)
        {
            if (aliveNeighborCount(i, j, arena) == 3)
                new_arena[i][j] = 1;
            else
                new_arena[i][j] = 0;
        }
        else
        {
            if (aliveNeighborCount(i, j, arena) == 2 || aliveNeighborCount(i, j, arena) == 3)
                new_arena[i][j] = 1;
            else
                new_arena[i][j] = 0;
        }
        }
    }
    sleep(0.1);
    copy_arr(new_arena, arena);
}