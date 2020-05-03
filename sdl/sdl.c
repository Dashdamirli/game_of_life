#include "sdl.h"

void draw(SDL_Renderer* renderer,int arena[row][col])
{
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	SDL_RenderClear(renderer);

	SDL_SetRenderDrawColor(renderer, 255,255,255,255);

    refresh(arena);

	for(int i=0; i<row; ++i)
	{
		for(int j= 0; j<col; ++j){
			if(arena[i][j]==1){
                SDL_SetRenderDrawColor(renderer, 255,0,0,255);
            }else{
                SDL_SetRenderDrawColor(renderer, 0,0,0,255);
            }
            SDL_RenderDrawPoint(renderer,i,j);
       }
	}

}



int drawPixel(int arena[row][col])
{
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		fprintf(stderr,"Problem can not init SDL2 \n");
		return 0;
	}

	SDL_Window* window = SDL_CreateWindow("Life",
										  SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
										  row, col, SDL_WINDOW_SHOWN|SDL_WINDOW_ALLOW_HIGHDPI);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1,SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC);
	assert (renderer != NULL);

// SIMPLE EVENT & DRAWING LOOP
	bool quit = false;
	while (!quit)
	{
		SDL_Event event;
		while (!quit && SDL_PollEvent(&event))
		{
			switch (event.type)
			{
			case SDL_QUIT:
				quit = true;
				break;
			}
		}
		draw(renderer,arena);
		SDL_RenderPresent(renderer);
	}
	SDL_Quit();
	return 0;
}