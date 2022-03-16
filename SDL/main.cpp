#include "head.h"
#include "Classes.cpp"

SDL_Texture* IMG_LoadTexture(SDL_Renderer* renderer, const char* file)
{
    SDL_Texture* texture = NULL;
    SDL_Surface* surface = IMG_Load(file);
    if (surface) {
        texture = SDL_CreateTextureFromSurface(renderer, surface);
        SDL_FreeSurface(surface);
    }
    return texture;
}

int mar(int x, int y)
{
    int arg[12][78]{
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0},
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 9, 9, 9, 9, 9, 9, 0, 0, 0, 9, 9, 9, 0, 0, 0, 0, 3, 3, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0},
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0},
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 9, 9, 9, 9, 9, 9, 9, 9, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 9, 9, 9, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, },
    };
    //cout<<arg[2][9]<<endl<<endl;
    return arg[y][x];
}

void Moving(bool & podnim, SDL_Renderer *&renderer, SDL_Texture*& Ptexture, SDL_Rect& Ptexr, SDL_Rect& Btexr, int &kol, int &pos, bool &isAlive)
{
    //CollisionCheck()

    //поднимаемся или опускаемся
    int x = roundf(float(Btexr.x * (-1) + Ptexr.x) / 64.1), 
        y = roundf(float(Ptexr.y + 30) / 64);

    if (mar(x, y) == 9)
        isAlive = false;

    if (podnim == true && (mar(x, y) != 1 && mar(x, y) != 2 && mar(x, y) != 3))
    {
        Ptexr.y -= 5;
        int x = roundf(float(Btexr.x * (-1) + Ptexr.x) / 64.1), y = roundf(float(Ptexr.y + 30) / 64);
        if (Ptexr.y <= pos - 220 || mar(x, y) == 1)
            podnim = false;

    }

    if ((podnim == false && mar(x, y + 1) != 1 && mar(x, y + 1) != 2 && mar(x, y + 1) != 3))
    {
        Ptexr.y += 5;
    }


    //смена текстуры
    if (podnim == false && (mar(x, y + 1) != 0))
        Ptexture = IMG_LoadTexture(renderer, "C:/mario_49x69.png");

    //сами действия
    if (GetKeyState('W') & 0x8000 && Ptexr.y >= 5)
    {

        Ptexture = IMG_LoadTexture(renderer, "C:/mar_jump.png");
        if (mar(x, y + 1) == 1 || mar(x, y + 1) == 2 || mar(x, y + 1) == 3) {
            if (mar(x, y + 1) == 3)
                pos = Ptexr.y - 100;
            else
                pos = Ptexr.y;
            podnim = true;

            Ptexr.y -= 5;
        }
    }
    if (GetKeyState('A') & 0x8000 && Btexr.x < 0)
    {
        if (Btexr.x <= -3700 && Ptexr.x > 120) {
            Ptexr.x -= 3;
        }

        //else if (Btexr.x <= -3700 && Ptexr.x <= 120 && mar(x - 1, y) == 0) {
        //    Btexr.x += 3;
        //}

        else {                  //Btexr.x += 5;
            if (kol % 70 > 35) {
                Ptexture = IMG_LoadTexture(renderer, "C:/beg_nazad1.png");
            }
            else {
                Ptexture = IMG_LoadTexture(renderer, "C:/beg_nazad2.png");
            }

            int x = roundf(float(Btexr.x * (-1) + Ptexr.x - 29) / 64.1),
                y = roundf(float(Ptexr.y + 70) / 64);

            if (mar(x - 1, y) != 1 && mar(x - 1, y) != 2 && mar(x - 1, y) != 3) {
                if (mar(x, y + 1) == 2) {
                    Btexr.x += 1;
                }
                else {
                    Btexr.x += 5;
                }
            }
        }
    }
    //delete
/*if (GetKeyState('S') & 0x8000 && Ptexr.y <= 656)
    {
        Ptexr.y += 5;
    }
*/
    if (GetKeyState('D') & 0x8000 && Btexr.x >= -5000 && Ptexr.x <= 1100)
    {
        if (Btexr.x <= -3700/* && Ptexr.x >= 120 */) {
            Ptexr.x += 3;
        }
        else {
            if (kol % 70 > 35)
                Ptexture = IMG_LoadTexture(renderer, "C:/beg1.png");
            else
                Ptexture = IMG_LoadTexture(renderer, "C:/beg2.png");
            int x = roundf(float(Btexr.x * (-1) + Ptexr.x + 20) / 64.1),
                y = roundf(float(Ptexr.y + 70) / 64);
            if (mar(x, y) != 1 && mar(x, y) != 2 && mar(x, y) != 3)
                if (mar(x, y + 1) == 2)
                    Btexr.x -= 15;
                else if (Btexr.x <= -3700)
                    Btexr.x -= 5;
                else
                    Btexr.x -= 5;
        }
    }
}

void CollisionCheck(bool &podnim, int &pos, SDL_Rect &Ptexr, SDL_Rect &Btexr, int x, int y)
{

}

int main(int argc, char* argv[])
{
    //Creating a window
    Window window = Window(1280, 704);

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        return 1;
    }

    //Uploading images
    setlocale(LC_NUMERIC, "Russian");
    SDL_Texture* textureIMG = IMG_LoadTexture(window.renderer, "C:/map1.png");
    SDL_Texture* texturePlayer = IMG_LoadTexture(window.renderer, "C:/mario_49x69.png");
    //Заливаем

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
    Player player = Player(texturePlayer, 120, 500, 49, 60);
    BackGround backGround = BackGround(textureIMG, 0, -16, 5000, 704);
    
    unsigned int lastUpdateTime = 0;
    bool podnim = false;
    int pos = player.texr.y;
    int x, y;
    int kol = 0;
    bool isAlive = true;
    //Infinity loop
    while (isAlive) {
        SDL_Event e;
        if (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT)
                break;
            else if (e.type == SDL_KEYUP && e.key.keysym.sym == SDLK_ESCAPE)
                break;
        }

        //CollisionCheck(podnim, pos, player.texr, backGround.texr, x, y);

        //Moving our character
        Moving(podnim, window.renderer, player.texture, player.texr, backGround.texr, kol, pos, isAlive);

        if (lastUpdateTime + 30 < SDL_GetTicks()) {
            lastUpdateTime = SDL_GetTicks();

            SDL_RenderClear(window.renderer);

            SDL_RenderCopy(window.renderer, backGround.texture, NULL, &backGround.texr);
            SDL_RenderCopy(window.renderer, player.texture, NULL, &player.texr);
            SDL_RenderPresent(window.renderer);
        }
        //Making a small delay
        Sleep(10);
        kol++;
    }
    SDL_DestroyTexture(textureIMG);
    SDL_DestroyTexture(texturePlayer);
    SDL_DestroyRenderer(window.renderer);
    SDL_DestroyWindow(window.window);

    return 0;
}