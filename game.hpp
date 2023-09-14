#ifndef Game_hpp
#define Game_hpp
#include <iostream>
#include <SDL.h>

class Game
{
public:
    Game();
    ~Game();
    void init(const char *title, int x, int y, int w, int h, bool fullscreen);
    void update();
    void draw();
    void input();
    void clean();
    bool isRunning() {return running;}
private:
    bool running;
    SDL_Window *window;
    SDL_Renderer *renderer;
};

#endif