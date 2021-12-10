//1.Раскидать по файлам  (функции с переменными) Структура Game
//3. МЕНЮ ( СЧЕТ, Новая игра, выход)

#include "Game.h"

int main()
{
    auto game = new Game();
    game->Start();

    return 0;
}

