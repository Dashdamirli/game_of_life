#include "game.c"
#include "board_drawer.c"

int main(){
   int arena[row][col] = {0};
   int new_arena[row][col] = {0};
   srand(time(NULL));

   for(int r=0;r<100;r++){
      int r1 = rand()%(row-1);
      int r2 = rand()%(col-1);
      arena[r1][r2] = 1;      
   }
   // printArena(arena);
   // printColored(arena);
   
   int k=0;
   while(k<500){
   printf("\n\n");
      for(int i=0;i<row;i++){
         for(int j=0;j<col;j++){
            if(arena[i][j]==0){
               if(aliveNeighborCount(i,j,arena) == 3) new_arena[i][j] = 1;
               else new_arena[i][j] = 0;
            }else{
               if(aliveNeighborCount(i,j,arena) == 2 || aliveNeighborCount(i,j,arena) == 3)  new_arena[i][j] = 1;
               else new_arena[i][j] = 0;
            }
         }
      }
      sleep(1);
      copy_arr(new_arena,arena);
      // printArena(arena);
      printColored(arena);
   }



   return 0;
}