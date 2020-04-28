#include <stdio.h>
#define col 8
#define row 8

int isValidCell(int x, int y, int r, int c)
{
    if ((x - 1 >= 0 && x + 1 < r) && (y - 1 > 0 && y + 1 < c))

        return 1;
    else
        return 0
}

int aliveNeighborCount(int i, int j, int a[col][row])
{
    int counter = 0;
    //TOP
    if (a[i - 1][j - 1] == 1 )
        counter++;
    if (a[i - 1][j] == 1)
        counter++;
    if (a[i - 1][j + 1] == 1)
        counter++;
    //MIDDLE
    if (a[i][j - 1] == 1)
        counter++;
    if (a[i][j + 1] == 1)
        counter++;
    //BOTTOM
    if (a[i + 1][j - 1] == 1)
        counter++;
    if (a[i + 1][j] == 1)
        counter++;
    if (a[i + 1][j + 1] == 1)
        counter++;

    return counter;
}

int main(int argc, char const *argv[])
{
    int arena[8][8] = {0};
    arena[1][0] = 1;
    printf("%d", aliveNeighborCount(1, 1, arena));
    return 0;
}
