#include <iostream>
#include "game.hpp"
#include "game.cpp"

Game *game = nullptr;    
int main(int argc, char *argv[])
{
    game = new Game();
    game->init("POWDER GAME", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, false);
    while(game->isRunning())
    {
        game->input();
        game->update();
        game->draw();
    }
    game->clean();
    return 0;
}