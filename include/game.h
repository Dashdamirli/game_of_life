#include <stdio.h>
#include<unistd.h>
#include <stdlib.h>
#include <time.h>

#define col 40
#define row 40

int isValidCell(int, int, int,int);
int aliveNeighborCount(int i, int j, int a[col][row]);
void printArena(int a[col][row]);
void copy_arr(int old[row][col],int newa[row][col]);
