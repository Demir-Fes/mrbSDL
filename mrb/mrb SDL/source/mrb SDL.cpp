//============================================================================
// Name        : mrb.cpp
// Author      : Demir Fes
//============================================================================

#include<SDL.h>

SDL_Window* window = 0;
SDL_Renderer* renderer = 0;

int main(int argc, char* args[]) {

	if (SDL_Init(SDL_INIT_EVERYTHING) >= 0) {

		window = SDL_CreateWindow("mrb SDL",
				SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480,
				SDL_WINDOW_SHOWN);

		if (window != 0) {
			renderer = SDL_CreateRenderer(window, -1, 0);
		}
	} else {
		return 1;
	}



	SDL_SetRenderDrawColor(renderer, 255, 222, 222, 255);

	SDL_RenderClear(renderer);

	SDL_RenderPresent(renderer);

	SDL_Delay(2000);

	SDL_Quit();

	return 0;
}
