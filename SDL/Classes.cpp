#include "ClassHeader.h"

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
            window = SDL_CreateWindow("Mario", 500, 200, width, height, 0);
            renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
        }
};

class PauseMenu
{
    public:
        SDL_Texture* texture;
        SDL_Rect hitbox;
        PauseMenu(SDL_Texture*& texture, int x, int y, int w, int h)
        {
            this->texture = texture;
            hitbox.x = x;
            hitbox.y = y;
            hitbox.w = w;
            hitbox.h = h;
        }

        void Query()
        {
            SDL_QueryTexture(texture, NULL, NULL, &hitbox.w, &hitbox.h);
        }

        bool InContinue(int x, int y)
        {
            float k = (float)hitbox.w / (float)512;

            if (x >= hitbox.x + roundf(k * (float)60) && x <= hitbox.x + roundf(k * (float)345) &&
                y <= hitbox.y + roundf(k * (float)72) && y >= hitbox.y + roundf(k * (float)116)) return true;
        }
        bool InQuit(int x, int y)
        {
            float k = (float)hitbox.w / (float)512;

            if (x >= hitbox.x + roundf(k * (float)60) && x <= hitbox.x + roundf(k * (float)200) &&
                y <= hitbox.y + roundf(k * (float)162) && y >= hitbox.y + roundf(k * (float)206)) return true;
        }
};