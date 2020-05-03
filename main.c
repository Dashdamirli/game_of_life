#include "game.h"
#include "board_drawer.h"
#include "sdl.h"

int main()
{
   int arena[row][col] = {0};
   
   srand(time(NULL));

   for (int r = 0; r < 70000; r++)
   {
      int r1 = rand() % (row - 1);
      int r2 = rand() % (col - 1);
      arena[r1][r2] = 1;
   }

   drawPixel(arena);

   return 0;
}