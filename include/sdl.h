#ifndef __GAME_H__
#define __GAME_H__
#include"../game/game.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <stdint.h>
#include <time.h>

// for initializing and sutdown functions 
#include <SDL2/SDL.h> 
// for rendering images and graphics on screen 
#include <SDL2/SDL_image.h> 
// for using SDL_Delay() functions 
#include <SDL2/SDL_timer.h> 
void draw(SDL_Renderer* renderer,int arena[row][col]);
int drawPixel(int arena[row][col]);

#endif
