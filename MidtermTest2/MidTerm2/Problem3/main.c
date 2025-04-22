#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y)
{
    COORD pos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main()
{
    gotoxy(13, 1);  printf("\033[33;40mo\033[0m");
    gotoxy(20, 1);  printf("\033[33;40mo\033[0m");
    gotoxy(13, 2);  printf("\033[34;40m|\033[0m");
    gotoxy(20, 2);  printf("\033[32;40m|\033[0m");
    gotoxy(4, 3);   printf("\033[40;37m-----------------------\033[0m");
    gotoxy(4, 4);   printf("\033[40;37m|\033[45;37m\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\\033[40;37m|\033[0m");
    gotoxy(4, 5);   printf("\033[40;37m|\033[47;30m                     \033[40;37m|\033[0m");
    gotoxy(4, 6);   printf("\033[40;37m-----------------------\033[0m");
    gotoxy(1, 7);   printf("\033[40;33m \033[0m");
    gotoxy(1, 8);   printf("\033[40;37m-------------------------------\033[0m");
    gotoxy(1, 9);   printf("\033[40;37m|\033[45;37m\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\\033[40;37m|\033[0m");
    gotoxy(1, 10);  printf("\033[40;37m|\033[47;30m                             \033[40;37m|\033[0m");
    gotoxy(1, 11);  printf("\033[40;37m-------------------------------\033[0m");

    return 0;
}
