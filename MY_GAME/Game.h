#ifndef GAME_H
#define GAME_H
#include "GameMenu.h"

struct Point
{
    int x;
    int y;
};

struct Snake
{
    int size;
    Point tail[100];
    Point lastPoint = {0, 0};
};

enum eDirection{ STOP = 0, LEFT, RIGHT, UP, DOWN};

class Game
{
    using Fruit = Point;
    Fruit fruit = {0 , 0};
    Snake snake;
    private : bool gameOver;
    private : const int width = 70;
    private : const int height = 20;
    private : int x, y, score;
    eDirection dir;
    GameMenu menu;
    int selectedMenuVariant;

    void ShowMenu();
    void Setup();
    void Draw();
    void Input();
    void Logic();

    public : void Start();
};


#endif // GAME_H
