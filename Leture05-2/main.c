#include <stdio.h> //printf 사용
#include <Windows.h> //void 안에 있는 것들 사용 COORD랑 SetConsole어쩌구

void gotoxy(int x, int y)
{
    COORD pos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() 
{
    gotoxy(10, 1);

    printf("\033[31m태양\033[0m\n");

    gotoxy(12, 7);

    printf("\033[33m\033[47m계란후라이계란후라이계란후라이\033[0m\n");

    gotoxy(15, 15);

    printf("\033[1m\033[34m바다\033[0m\n");

    return 0;

}