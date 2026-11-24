#include "stdio.h"
#include "windows.h"

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void main() {
    int x;
    int y;



        for(x = 0; x <= 128; x++){
            system("cls");
            gotoxy(x, 0);
            printf("ZOE");
        }

        for(y = 0; y <= 35; y++){
            system("cls");
            gotoxy(128, y);
            printf("ZOE");
        }

        for(x = 127 ; x >= 0; x--){
            system("cls");
            gotoxy(x, 35);
            printf("ZOE");
        }

        for(y = 34; y >= 0; y--){
            system("cls");
            gotoxy(0, y);
            printf("ZOE");
        }
    }
