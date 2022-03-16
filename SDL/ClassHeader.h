#pragma once

#include <SDL.h>
#include <SDL_image.h>

#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include <future>

using namespace std;

void Moving(bool& podnim, SDL_Renderer*& renderer, SDL_Texture*& Ptexture, SDL_Rect& Ptexr, SDL_Rect& Btexr, int& kol, int& pos, bool& isAlive);
void CollisionCheck(bool& podnim, int& pos, SDL_Rect& Ptexr, SDL_Rect& Btexr, int x, int y);
int mar(int x, int y);
int OurRoundf(float number);