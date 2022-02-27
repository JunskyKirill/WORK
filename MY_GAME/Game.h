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
public :
    void Start();

private:
    using Fruit = Point;
    Fruit fruit      = {0 , 0};
    Snake snake;
    bool gameOver;
    const int width  = 70;
    const int height = 20;
    int x, y, score;
    eDirection dir;
    GameMenu menu;
    int selectedMenuVariant;

    void ShowMenu();
    void Setup();
    void Draw();
    void Input();
    void Logic();

};


#endif // GAME_H
