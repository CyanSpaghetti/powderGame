#include "game.hpp"

Game::Game()
{

}
Game::~Game()
{

}
void Game::init(const char*title, int x, int y, int w, int h, bool fullscreen)
{
    SDL_Init(SDL_INIT_EVERYTHING);
    window = SDL_CreateWindow(title, x, y, w, h, 0);
    renderer = SDL_CreateRenderer(window, -1, 0);
    running = true;
}
void Game::update()
{
    
}
void Game::draw()
{
    SDL_RenderSetScale(renderer, 8, 8);

    SDL_RenderClear(renderer);
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    
    SDL_SetRenderDrawColor(renderer, 0, 255, 255, 255); // ADD logic for the cube and shit
    SDL_RenderDrawPoint(renderer, 32, 24);

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderPresent(renderer);
}
void Game::input()
{
    SDL_Event e;
    SDL_PollEvent(&e);
    switch(e.type)
    {
        case SDL_QUIT:
            running = false;
            break;
    }
}
void Game::clean()
{
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
}