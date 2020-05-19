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
   char input;
   int circular;
   printf("Enter 1 for circular and 0 for clipped version\n");
   scanf("%d", &circular);
   printf("Enter [t] for terminal and [s] for SDL version\n");
   scanf("%c", &input);

   while (1)
   {
      if (input == 't')
      {
         printColored(arena, circular);
         break;
      }
      else if (input == 's')
      {
         drawPixel(arena);
         break;
      }
      else
         printf("Please enter either [t] or [s]\n");
   }

   return 0;
}