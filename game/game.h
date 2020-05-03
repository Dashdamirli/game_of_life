#include <stdio.h>
#include<unistd.h>
#include <stdlib.h>
#include <time.h>

#define col 1000
#define row 1000

int isValidCell(int, int, int,int);
int aliveNeighborCount(int i, int j, int a[col][row],int circular);
void printArena(int a[col][row]);
void copy_arr(int old[row][col],int newa[row][col]);
void refresh(int arena[row][col],int circular);
