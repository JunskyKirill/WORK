#include "Game.h"
#include <curses.h>
#include <time.h>
#include <iostream>
using namespace std;

void Game::Start()
{
    ShowMenu();

    while(selectedMenuVariant == 1)
    {
        initscr();
        noecho();
        keypad(stdscr, TRUE);
        halfdelay(1);

        start_color();
        init_pair(1, COLOR_WHITE, COLOR_WHITE);
        init_pair(2, COLOR_BLACK, COLOR_GREEN);
        init_pair(3, COLOR_GREEN, COLOR_GREEN);
        init_pair(4, COLOR_MAGENTA, COLOR_YELLOW);
        init_pair(5, COLOR_WHITE, COLOR_BLACK);
        init_pair(6, COLOR_BLACK, COLOR_BLACK);


        snake.tail[0] = { 34, 10 };
        snake.tail[1] = { 34, 11 };
        snake.tail[2] = { 34, 12 };
        snake.size = 3;

        x = snake.tail[0].x;
        y = snake.tail[0].y;

        srand(time(nullptr));


        fruit = { max(rand() % width, 1), max(rand() % height, 1) };
        curs_set(0);

        Setup();

        while(!gameOver)
        {
            Draw();
            Input();
            Logic();
        }

        endwin();

        ShowMenu();
    }
}

void Game::ShowMenu()
{
    menu.PrintMenu(score, gameOver);
    selectedMenuVariant = menu.GetVariant();
}

void Game::Setup()
{
    gameOver = false;
    dir = UP;
    score = 0;
}

void Game::Draw()
{

    color_set(1, nullptr);
    for (int j = 0; j < height + 1; ++j)
    {
        for (int i = 0; i < width + 1; ++i)
        {
            if (i == 0 || j == 0 || i == width || j == height)
                mvaddch(j, i, '#');
        }
    }
    color_set(2, nullptr);
    mvaddch(snake.tail[0].y, snake.tail[0].x, '8');

    color_set(3, nullptr);
    for (int i = 1; i < snake.size; ++i)
    {
        mvaddch(snake.tail[i].y, snake.tail[i].x, 'o');
    }
    color_set(6,nullptr);
    if (snake.lastPoint.x != 0 && snake.lastPoint.y != 0)
    {
        mvaddch(snake.lastPoint.y, snake.lastPoint.x, ' ');
    }

    color_set(4, nullptr);
    if (fruit.x != 0 && fruit.y != 0)
    {
        mvaddch(fruit.y, fruit.x, ' ');
    }
    color_set(5,nullptr);
    mvaddstr(21,10,("Score: " + to_string(score)).c_str());

}

void Game::Input()
{
    auto input = getch();
    if (input == 27)
    {
     gameOver = true;
     return;
    }

    switch (input) {
    case 'a' :
        if(dir != RIGHT)
            dir = LEFT;
        break;
    case 'd' :
        if(dir != LEFT)
            dir = RIGHT;
        break;
    case 'w' :
        if(dir != DOWN)
            dir = UP;
        break;
    case 's' :
        if(dir != UP)
            dir = DOWN;
        break;
    }
}

void Game::Logic()
{
    switch (dir)
    {
    case STOP:
        break;
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    }


    Point prev = snake.tail[0];
    snake.tail[0] = { x, y };
    for (int i = 1; i < snake.size; i++){
        Point prev2 = snake.tail[i];
        snake.tail[i] = prev;
        prev = prev2;
    }

    snake.lastPoint = prev;

    if(x == fruit.x && y == fruit.y){
        score += 10;
        fruit = { max(rand() % width, 1), max(rand() % height, 1)};
        snake.tail[snake.size] = snake.tail[snake.size - 1];
        snake.size++;
    }

    bool eatSelf;
    for(int i = 4; i < snake.size; i++)
    {
        if (snake.tail[i].x == x && snake.tail[i].y == y)
        {
            eatSelf = true;
            break;
        }
    }

    if(x >= width || x <= 0 || y >= height || y <= 0 || eatSelf)
         gameOver = true;
}
