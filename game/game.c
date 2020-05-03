#include "game.h"


/**
 * @brief This function checks if a neighbor is out of array boundries.
 *
 *The way it checks it is  ,it gets 4 parameters ,the @p x and @p y positions and array boundires
 *as in rows and and columns.
 * @return 1 if its in boundries and 0 if its out.
 */
int isValidCell(int x, int y, int r, int c)
{
    if ((x >= 0 && x < r) && (y >= 0 && y < c))
        return 1;
    else
        return 0;
}
/**
 * @brief Finds the alive neighbor count.
 *
 * Checks all cells arond the position and based on parameter of users choice find neighbors for 
 * circular or clipped integration.
 * for circular it checks the corresponding neighbors, mainly its parallels for sides and its reverse corner for diagonal.
 * For example, if the neighbor is out of boundaries from the top right corner it is gonna shift it and check the bottom left corner
 * @param arraysRow the x posotion of the arena.
 * @param arraysColumn the y posotion of the arena.
 * @param 2D_Array the arena.
 * @param isCircular Boolean to for circulator or clipped arenas.
 * @return number of alive neighbors.
 * @warning the 4th parameter takes 0 or 1 c.
 */
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
        if (isValidCell(x, y, col, row)) //check if doesnt cross the borders
        {
            if (a[x][y] == 1)
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

/**
 * @brief Dublicates an array
 *
 * Sets all values of an array to another array
 * @param oldarr original array.
 * @param newarr the dublicated one.

 */
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