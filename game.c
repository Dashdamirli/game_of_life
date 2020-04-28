#include "game.h"

int isValidCell(int x, int y, int r, int c)
{
    if ((x >= 0 && x < r) && (y >= 0 && y < c))
        return 1;
    else
        return 0;
}

int aliveNeighborCount(int i, int j, int a[col][row])
{
    int counter = 0;
    int x = -1, y = -1;
    int neighbors[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, //TOP
                        {0, -1}, {0, 1},//LEFT N RIGHT
                        {1, -1}, {1, 0}, {1, 1}};//BOTTOM

    for (int k = 0; k < 8; k++)
    {
        x = i + neighbors[k][0];
        y = j + neighbors[k][1];
        if (isValidCell(x, y, col, row))//check if doesnt cross the borders
        {
            if (a[x][y] == 1)
                counter++;
        }
    }

    return counter;
}

void printArena(int a[col][row]){
    for(int i=0; i<row; i++) {
      for(int j=0;j<col;j++) {
         printf("%d ", a[i][j]);
      }
      printf("\n");
    }
}

void copy_arr(int old[row][col],int new[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            new[i][j] = old[i][j];
        }
    }
}