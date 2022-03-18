#include "head.h"

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
    { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0},
    { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 9, 9, 9, 9, 9, 9, 0, 0, 0, 9, 9, 9, 0, 0, 0, 0, 3, 3, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0},
    { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0},
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 9, 9, 9, 9, 9, 9, 9, 9, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 9, 9, 9, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, },
    };
    return arg[y][x];
}

void Moving(Window& window, Player &player, BackGround &backGround, bool &podnim, int &kol, int &pos, bool &victory, SDL_Texture *&Ptexture)
{
    SDL_Texture* texturePlayer = IMG_LoadTexture(window.renderer, "C:/mario_49x69.png");
    SDL_Texture* textureJump = IMG_LoadTexture(window.renderer, "C:/mar_jump.png");
    SDL_Texture* textureBack = IMG_LoadTexture(window.renderer, "C:/beg_nazad1.png");
    SDL_Texture* textureBack2 = IMG_LoadTexture(window.renderer, "C:/beg_nazad2.png");
    SDL_Texture* textureForward = IMG_LoadTexture(window.renderer, "C:/beg1.png");
    SDL_Texture* textureForward2 = IMG_LoadTexture(window.renderer, "C:/beg2.png");
    int x = roundf(float(backGround.texr.x * (-1) + player.texr.x) / 64.1), 
        y = roundf(float(player.texr.y + 30) / 64);

    if (mar(x, y + 1) == 9) {
        int count = 4 - player.Hearts();
        player = Player(Ptexture, 120, 500, 49, 60);
        backGround = BackGround(backGround.texture, 0, -16, 5000, 704);
        for (int i = 0; i < count; i++) {
            player.HealthRemove();
        }
        if (!player.Alive()) {
            return;
        }
    }

    else if (mar(x, y) == 5) {
        victory = true;
        return;
    }

    if (podnim == true && (mar(x, y) != 1 && mar(x, y) != 2 && mar(x, y) != 3)) {
        player.texr.y -= 5;
        int x = roundf(float(backGround.texr.x * (-1) + player.texr.x) / 64.1), y = roundf(float(player.texr.y + 30) / 64);
        if (player.texr.y <= pos - 220 || mar(x, y) == 1) {
            podnim = false;
        }
    }

    if ((podnim == false && mar(x, y + 1) != 1 && mar(x, y + 1) != 2 && mar(x, y + 1) != 3))
    {
        player.texr.y += 5;
    }


    if (podnim == false && (mar(x, y + 1) != 0))
        player.texture = texturePlayer;

    if (GetKeyState('W') & 0x8000 && player.texr.y >= 5)
    {

        player.texture = textureJump;
        if (mar(x, y + 1) == 1 || mar(x, y + 1) == 2 || mar(x, y + 1) == 3) {
            if (mar(x, y + 1) == 3)
                pos = player.texr.y - 100;
            else
                pos = player.texr.y;
            podnim = true;

            player.texr.y -= 5;
        }
    }
    if (GetKeyState('A') & 0x8000 && backGround.texr.x < 0)
    {
        if (kol % 70 > 35) {
            player.texture = textureBack;
        }
        else {
            player.texture = textureBack2;
        }

        if (backGround.texr.x <= -3700 && player.texr.x > 10) {
            player.texr.x -= 2;
        }

        else {
            int x = roundf(float(backGround.texr.x * (-1) + player.texr.x - 29) / 64.1),
                y = roundf(float(player.texr.y + 70) / 64);

            if (mar(x - 1, y) != 1 && mar(x - 1, y) != 2 && mar(x - 1, y) != 3) {
                if (mar(x, y + 1) == 2) {
                    backGround.texr.x += 1;
                }
                else {
                    backGround.texr.x += 3;
                }
            }
        }
    }
    if (GetKeyState('D') & 0x8000 && backGround.texr.x >= -5000 && player.texr.x <= 1100)
    {
        if (kol % 70 > 35) {
            player.texture = textureForward;
        }
        else {
            player.texture = textureForward2;
        }

        if (backGround.texr.x <= -3700/* && Ptexr.x >= 120 */) {
            player.texr.x += 3;
        }
        else {
            int x = roundf(float(backGround.texr.x * (-1) + player.texr.x + 20) / 64.1),
                y = OurRoundf(float(player.texr.y + 70) / 64);
            if (mar(x, y) != 1 && mar(x, y) != 2 && mar(x, y) != 3)
                if (mar(x, y + 1) == 2)
                    backGround.texr.x -= 15;
                else if (backGround.texr.x <= -3700)
                    backGround.texr.x -= 5;
                else
                    backGround.texr.x -= 5;
        }
    }
}

int OurRoundf(float number)
{
    if ((int)(number * 10) % 10 > 1) return (int)number + 1;
    else return roundf(number);
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
    SDL_Texture* texturePauseMenu = IMG_LoadTexture(window.renderer, "C:/PauseMenu.png");
    SDL_Texture* textureMenu = IMG_LoadTexture(window.renderer, "C:/menu.png");
    SDL_Texture* textureMenuStart = IMG_LoadTexture(window.renderer, "C:/menu_start.png");
    SDL_Texture* textureHeart = IMG_LoadTexture(window.renderer, "C:/heart.png");
    SDL_Texture* textureWasted = IMG_LoadTexture(window.renderer, "C:/Wasted.png");
    SDL_Texture* textureVictory = IMG_LoadTexture(window.renderer, "C:/victory.png");

    //Checking if everything is OKw
    if (textureIMG == nullptr) {
        cout << "IMG_LoadTexture img Error: " << SDL_GetError() << "\n";
        return 1;
    }
    else if (texturePlayer == nullptr) {
        cout << "IMG_LoadTexture player Error: " << SDL_GetError() << "\n";
        return 1;
    }
    else if (texturePauseMenu == nullptr) {
        cout << "IMG_LoadTexture PauseMenu Error: " << SDL_GetError() << "\n";
        return 1;
    }
    else if (textureMenu == nullptr) {
        cout << "IMG_LoadTexture menu Error: " << SDL_GetError() << "\n";
        return 1;
    }
    else if (textureWasted == nullptr) {
        cout << "IMG_LoadTexture Wasted Error: " << SDL_GetError() << "\n";
        return 1;
    }

    //Creating a character and a background
    Player player = Player(texturePlayer, 120, 500, 49, 60);
    BackGround backGround = BackGround(textureIMG, 0, -16, 5000, 704);
    PauseMenu pause = PauseMenu(texturePauseMenu, 384, 200, 512, 290);
    MainMenu menu = MainMenu(textureMenu, 0, 0, 1280, 704);
    
    unsigned int lastUpdateTime = 0;
    bool podnim = false;
    int pos = player.texr.y;
    int wastedW = 1280, wastedH = 704, victoryW = 1280, victoryH = 704;
    int mouseX, mouseY;
    int kol = 0;
    bool shutDown = false, toMainMenu, victory;
    SDL_Event e;
    SDL_Rect heartTexr, wastedTexr, victoryTexr;
    wastedTexr.x = 0;
    wastedTexr.y = 0;
    victoryTexr.x = 0;
    victoryTexr.y = 0;

    //Infinity loop
    while (!shutDown) {
        shutDown = false;
        victory = false;
        toMainMenu = false;
        SDL_GetMouseState(&mouseX, &mouseY);
        if (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT ||
                (menu.InExit(mouseX, mouseY) && (GetKeyState(VK_LBUTTON) & 0x8000) != 0)) {
                shutDown = true;
                break;
            }
        }

        if (menu.InStart(mouseX, mouseY)) {
            menu.texture = textureMenuStart;
            if ((GetKeyState(VK_LBUTTON) & 0x8000) != 0) {
                menu.texture = textureMenu;
                backGround = BackGround(textureIMG, 0, -16, 5000, 704);
                player = Player(texturePlayer, 120, 500, 49, 60);
                PlaySound(TEXT("C:/soundtrek.wav"), NULL, SND_ASYNC | SND_LOOP);
                while (player.Alive() && !shutDown && !toMainMenu && !victory) {
                    if (SDL_PollEvent(&e)) {
                        if (e.type == SDL_QUIT) {
                            shutDown = true;
                            break;
                        }
                        else if (e.type == SDL_KEYUP && e.key.keysym.sym == SDLK_ESCAPE) {
                            Paused(window, pause, shutDown, toMainMenu);
                            if (shutDown || toMainMenu) {
                                break;
                            }
                            SDL_RenderPresent(window.renderer);
                        }
                    }

                    //Moving our character
                    Moving(window, player, backGround, podnim, kol, pos, victory, texturePlayer);

                    if (lastUpdateTime + 30 < SDL_GetTicks()) {
                        lastUpdateTime = SDL_GetTicks();

                        SDL_RenderClear(window.renderer);

                        SDL_RenderCopy(window.renderer, backGround.texture, NULL, &backGround.texr);
                        SDL_RenderCopy(window.renderer, player.texture, NULL, &player.texr);
                        ShowHearts(player, window, textureHeart);
                        SDL_RenderPresent(window.renderer);
                    }
                    //Making a small delay
                    Sleep(10);
                    kol++;
                }
                PlaySound(NULL, NULL, 0);
                if (!player.Alive()) {
                    SDL_QueryTexture(textureWasted, NULL, NULL, &wastedW, &wastedH);
                    wastedTexr.w = wastedW;
                    wastedTexr.h = wastedH;
                    PlaySound(TEXT("C:/wasted.wav"), NULL, SND_FILENAME | SND_ASYNC);
                    while (!shutDown) {
                        SDL_PollEvent(&e);
                        if (e.type == SDL_QUIT) {
                            shutDown = true;
                        }
                        else if ((GetKeyState(VK_LBUTTON) & 0x8000) != 0) {
                            break;
                        }
                        SDL_RenderCopy(window.renderer, textureWasted, NULL, &wastedTexr);
                        SDL_RenderPresent(window.renderer);
                    }
                }
                else if (victory) {
                    SDL_QueryTexture(textureVictory, NULL, NULL, &victoryW, &victoryH);
                    victoryTexr.w = victoryW;
                    victoryTexr.h = victoryH;
                    PlaySound(TEXT("C:/victory.wav"), NULL, SND_FILENAME | SND_ASYNC);
                    while (!shutDown) {
                        SDL_PollEvent(&e);
                        if (e.type == SDL_QUIT) {
                            shutDown = true;
                        }
                        else if ((GetKeyState(VK_LBUTTON) & 0x8000) != 0) {
                            break;
                        }
                        SDL_RenderCopy(window.renderer, textureVictory, NULL, &victoryTexr);
                        SDL_RenderPresent(window.renderer);
                    }
                }
            }
        }

        else {
            menu.texture = textureMenu;
        }

        SDL_RenderCopy(window.renderer, menu.texture, NULL, &menu.hitbox);
        SDL_RenderPresent(window.renderer);
        Sleep(10);
    }
    SDL_DestroyTexture(textureIMG);
    SDL_DestroyTexture(texturePlayer);
    SDL_DestroyTexture(texturePauseMenu);
    SDL_DestroyTexture(textureMenu);
    SDL_DestroyTexture(texturePauseMenu);
    SDL_DestroyTexture(textureHeart);
    SDL_DestroyTexture(textureWasted);
    SDL_DestroyTexture(textureVictory);


    SDL_DestroyRenderer(window.renderer);
    SDL_DestroyWindow(window.window);
    
    return 0;
}

void Paused(Window &window, PauseMenu &pause, bool &shutDown, bool &tomainMenu)
{
    SDL_Event e;
    int x, y;
    pause.Query();
    while (1) {
        SDL_PollEvent(&e);
        SDL_GetMouseState(&x, &y);
        if ((e.type == SDL_KEYUP && e.key.keysym.sym == SDLK_ESCAPE) ||
            ((GetKeyState(VK_LBUTTON) & 0x8000) != 0 && pause.InContinue(x, y))) {
            break;
        }

        else if (pause.InQuit(x, y) && (GetKeyState(VK_LBUTTON) & 0x8000) != 0) {
            tomainMenu = true;
            break;
        }

        else if (e.type == SDL_QUIT) {
            shutDown = true;
            break;
        }

        else {
            SDL_RenderCopy(window.renderer, pause.texture, NULL, &pause.hitbox);
            SDL_RenderPresent(window.renderer);
        }
    }
}

void ShowHearts(Player player, Window& window, SDL_Texture*& heart)
{
    SDL_Rect texr;
    for (int i = 0; i < player.Hearts(); i++) {
        texr.x = (i * 70) + 10;
        texr.y = 10;
        texr.w = 64;
        texr.h = 61;
        SDL_RenderCopy(window.renderer, heart, NULL, &texr);
    }
}