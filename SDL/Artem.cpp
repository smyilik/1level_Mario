/*#include "head.h"
#include "Classes.cpp"

int main2(int argc, char* argv[])
{

    //Creating a window
    Window window = Window(1280, 720);

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        return 1;
    }

    //Uploading images
    setlocale(LC_NUMERIC, "Russian");
    SDL_Texture* textureIMG = IMG_LoadTexture(window.renderer, "C:/1st_Level.png");
    SDL_Texture* texturePlayer = IMG_LoadTexture(window.renderer, "C:/mario_49x69.png");

    //Checking if everything is OK
    if (textureIMG == nullptr) {
        cout << "IMG_LoadTexture img Error: " << SDL_GetError() << "\n";
        return 1;
    }
    else if (texturePlayer == nullptr) {
        cout << "IMG_LoadTexture player Error: " << SDL_GetError() << "\n";
        return 1;
    }

    //Creating a character and a background
    Player player = Player(texturePlayer, 120, 532, 49, 69);
    BackGround backGround = BackGround(textureIMG, 0, 0, 5000, 704);

    unsigned int lastUpdateTime = 0;

    bool podnim = false;
    int pos = player.texr.y;

    // main loop
    while (1) {
        SDL_Event e;
        if (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT)
                break;
            else if (e.type == SDL_KEYUP && e.key.keysym.sym == SDLK_ESCAPE)
                break;
        }
        int x = roundf(float(backGround.texr.x * (-1) + player.texr.x) / 64.1), y = roundf(float(player.texr.y + 30) / 64);
ddd
        if (podnim == true && (mar(x, y) != 1 && mar(x, y) != 2 && mar(x, y) != 3))
        {
            player.texr.y -= 5;
            int x = roundf(float(backGround.texr.x * (-1) + player.texr.x) / 64.1), y = roundf(float(player.texr.y + 30) / 64);
            if (player.texr.y <= pos - 220  mar(x, y) == 1)
                podnim = false;

        }


        //       cout << x << endl << y << endl << mar(x, y) << endl << endl;

        if ((podnim == false && mar(x, y + 1) != 1 && mar(x, y + 1) != 2 && mar(x, y + 1) != 3)) //mar[x][y] == 0)
        {
            player.texr.y += 5;
        }
        if (podnim == false && (mar(x, y + 1) != 0))
            player.texture = IMG_LoadTexture(window.renderer, "D:/school/super_mario/mario_49x69.png");

        if (GetKeyState('W') & 0x8000)
        {
            player.texture = IMG_LoadTexture(window.renderer, "D:/school/super_mario/mar_jump.png");
            if (mar(x, y + 1) == 1  mar(x, y + 1) == 2 || mar(x, y + 1) == 3) {
                if (mar(x, y + 1) == 3)
                    pos = player.texr.y - 100;
                else
                    pos = player.texr.y;
                podnim = true;
            }
            //      texrPlayer.y -= 5;
                  //cout << "You've pressed W" << endl;
        }
        if (GetKeyState('A') & 0x8000)
        {
            int x = roundf(float(backGround.texr.x * (-1) + player.texr.x - 29) / 64.1), y = roundf(float(player.texr.y + 70) / 64);
            if (mar(x, y) != 1 && mar(x, y) != 2 && mar(x, y) != 3)
                if (mar(x, y + 1) == 2)
                    backGround.texr.x += 1;
                else
                    backGround.texr.x += 4;
        }
        if (GetKeyState('D') & 0x8000)
        {
            player.texture = IMG_LoadTexture(window.renderer, "D:/school/super_mario/beg1.png");
            int x = roundf(float(backGround.texr.x * (-1) + player.texr.x + 20) / 64.1), y = roundf(float(player.texr.y + 70) / 64);
            if (mar(x, y) != 1 && mar(x, y) != 2 && mar(x, y) != 3)
                if (mar(x, y + 1) == 2)
                    backGround.texr.x -= 14;
                else
                    backGround.texr.x -= 4;
        }

        // paint the image once every 30ms, i.e. 33 images per second
        if (lastUpdateTime + 30 < SDL_GetTicks()) {
            lastUpdateTime = SDL_GetTicks();

            // clear the screen
            SDL_RenderClear(window.renderer);
            // copy the texture to the rendering context
            SDL_RenderCopy(window.renderer, backGround.texture, NULL, &backGround.texr);
            SDL_RenderCopy(window.renderer, player.texture, NULL, &player.texr);

            // flip the backbuffer
            // this means that everything that we prepared behind the screens is actually shown
            SDL_RenderPresent(window.renderer);
        }
        Sleep(10);
    }
    //future.Stop;   //async moving
    SDL_DestroyTexture(backGround.texture);
    SDL_DestroyTexture(player.texture);
    SDL_DestroyRenderer(window.renderer);
    SDL_DestroyWindow(window.window);

    return 0;
}*/