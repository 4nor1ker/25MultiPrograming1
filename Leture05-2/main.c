#include <stdio.h> //printf ���
#include <Windows.h> //void �ȿ� �ִ� �͵� ��� COORD�� SetConsole��¼��

void gotoxy(int x, int y)
{
    COORD pos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() 
{
    gotoxy(10, 1);

    printf("\033[31m�¾�\033[0m\n");

    gotoxy(12, 7);

    printf("\033[33m\033[47m����Ķ��̰���Ķ��̰���Ķ���\033[0m\n");

    gotoxy(15, 15);

    printf("\033[1m\033[34m�ٴ�\033[0m\n");

    return 0;

}