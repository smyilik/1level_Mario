#include "head.h"

class Player
{
public:
    SDL_Texture *texture;
    SDL_Rect texr;
    
    Player(SDL_Texture *&texture, int x, int y, int w, int h) {
        this->texture = texture;
        texr.x = x;
        texr.y = y;
        texr.w = w;
        texr.h = h;
        SDL_QueryTexture(texture, NULL, NULL, &texr.w, &texr.h);
    }
};

class BackGround
{
public:
    SDL_Texture* texture;
    SDL_Rect texr;
    
    BackGround(SDL_Texture *&texture, int x, int y, int w, int h)
    {
        this->texture = texture;
        texr.x = x;
        texr.y = y;
        texr.w = w;
        texr.h = h;
        SDL_QueryTexture(texture, NULL, NULL, &texr.w, &texr.h);
    }
};

class Window
{
    public:
        SDL_Window* window;
        SDL_Renderer* renderer;

        Window(int width, int height)
        {
            window = SDL_CreateWindow("Mario", 0, 78, width, height, 0);
            renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
        }
};