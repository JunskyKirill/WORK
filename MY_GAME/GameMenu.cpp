#include "GameMenu.h"
#include <iostream>
using namespace std;

int GameMenu::GetVariant()
{
    int variant;
    string s; // строка для считывания введённых данных
    getline(cin, s); // считываем строку

    // пока ввод некорректен, сообщаем об этом и просим повторить его
    while (sscanf(s.c_str(), "%d", &variant) != 1 || variant < 1 || variant > 2)
    {
      cout << "Incorrect input. Try again: "; // выводим сообщение об ошибке
      getline(cin, s); // считываем строку повторно
    }

    return variant;
}

void GameMenu::PrintMenu(int score, bool isGameOver)
{
    system("cls"); // очищаем экран
    if (isGameOver)
    {
      cout << endl;
      cout << endl;
      cout << "YOU LOOSE"<< endl;
      cout << endl;
      cout << "YOUR SCORE IS : "<< score << endl;
      cout << endl;
      cout << endl;
      cout << "1. TRY AGAIN" << endl;
    }

    if(!isGameOver)
    {
      cout << endl;
      cout << endl;
      cout << "1. NEW GAME" << endl;
    }
    cout << "2. EXIT" << endl;
    cout << endl;
    cout << endl;
    cout << "(C) All Rights Reserved";
    cout << endl;
    cout << endl;
    cout << ">";
}
