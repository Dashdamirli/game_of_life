#include<stdio.h>
// #include "game.c"
#define ROW 8
#define COLUMN 8
int main(){
   int arena [ROW][COLUMN] = {0};
   int i, j;
   
   
   for(i=0; i<ROW; i++) {
      for(j=0;j<COLUMN;j++) {
         printf("%d ", arena[i][j]);
      }
      printf("\n");
   }
   return 0;
}