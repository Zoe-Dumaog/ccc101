#
#include "stdio.h"
#include "stdlib.h"
#include "windows.h"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define GOLD    "\033[93m"
#define PINK    "\033[95m"

void enableColors()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD mode;

    GetConsoleMode(hConsole, &mode);
    SetConsoleMode(hConsole, mode | ENABLE_VIRTUAL_TERMINAL_PROCESSING);
}

void gotoxy(int x, int y)
{
    COORD pos;

    pos.X = x;
    pos.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void fireworks(int x, int y, int frame)
{
    if (frame % 3 == 0)
    {
        gotoxy(x, y);
        printf(PINK "       *" RESET);

        gotoxy(x, y + 1);
        printf("      \\ | /");

        gotoxy(x, y + 2);
        printf("    -- *** --");

        gotoxy(x, y + 3);
        printf("      / | \\");
    }
    else if (frame % 3 == 1)
    {
        gotoxy(x, y);
        printf(GOLD "   *  .  *" RESET);

        gotoxy(x, y + 1);
        printf("     \\ | /");

        gotoxy(x, y + 2);
        printf("  * -- + -- *");

        gotoxy(x, y + 3);
        printf("     / | \\");
    }
    else
    {
        gotoxy(x, y);
        printf(CYAN "    +  *  +" RESET);

        gotoxy(x, y + 1);
        printf("     \\ | /");

        gotoxy(x, y + 2);
        printf("   -- + --");

        gotoxy(x, y + 3);
        printf("     / | \\");
    }
}

void showFace()
{
    printf(CYAN);

    printf("                                         ..::^^:::::::::::..\n");
    printf("                                      ..:::^^^::::^:..:^^^^^::.\n");
    printf("                                    .::::::::::.:!7^:.::^^^^^^^^:.\n");
    printf("                                  .:......::^^:^~?J7~^::^^^^:::::^:.\n");
    printf("                                .:........:^^~!7?JYJ??7!~~^::.....:^:.\n");
    printf("                               .:........:~!?JYY555555YYYJ?!^:......^^.\n");
    printf("                              ::.......:~7JYY555PPPPPPPPP55YJ7~::....:^.\n");
    printf("                             ::......:~7JYY5555PPPPGGGPPPP555YJ7^.....^^.\n");
    printf("                            .:......^!?JYYY555PPPPGGGGGGPPP55YYJ?^:....^^\n");
    printf("                           .:.....:~7?JYYYY55PPPPGGGGGGGPPP555YYJ?~:...:^:\n");
    printf("                           ......:^!?JYYY555PPPGGGGGGGGGGPPPP55YYJ7^:...::.\n");
    printf("                          ... ...^~7?JJJJYY5PPGGGGGGGGGGGGGP55YYYYJ!^:..:::\n");
    printf("                          ... ..:~777!7???7??JYPPGGGGGPPYJJ?????77JJ!:. .:^.\n");
    printf("                         .... ..^77?JYYYYYYYYJJY5PPPPP5YJYY5P5555YJJ?^: .:::\n");
    printf("                         ......:~???7~^^:^~~?YYJY5PPPYYYY?!~~~~~!?YYJ!:..:::.\n");
    printf("                         ......:!?JJ7!!?!!!?JJP5Y5GG555PJ?7~!!?!!?YYY7^...:^:\n");
    printf("                        ......:^!JYYYYYYYYYY5PP555GGP55PP55YYYYY5555Y7^...:^:.\n");
    printf("                        ......^^!JY55PPPPPPPPP5555PGP5PPPPPPPPPPPPP5Y?^..::::.\n");
    printf("                       .......:^!JY5PPPGGGGPP5555PGGGPPPPPGGGGGGGPP5Y7:.::::::\n");
    printf("                       .:......^!?Y55PPPPPPPYY5555GGP55PP5PPPGGGPPP5Y~..:.::.:\n");
    printf("                      .:.:.... :!?JY55PP55PPYJJ???YYJ??JY5PP55PPP55YJ^.::..:.:.\n");
    printf("                      .:::.......7?JY55YY55555555555PPPPPPP55YY55YYJ7 .::..::::\n");
    printf("                      :::...: .. ^JJYYYJJJJJYYYYY55PP555555YYYYY5YYY^ .:::.::.^.\n");
    printf("                     .:::........ 7JJY55YJ!~!JJYY5P5P5YYJ?!7J5555YY7. .::::.::^^.\n");
    printf("                     .::......... .7JYYP555J?JY55GGGBGP5YJY5P5P5YY7.  .:::.::^^^.\n");
    printf("                     .::.........   ~JJY555YJ?JJYYYYYYYJJY5P555Y?~.....:::.:::^^:.\n");
    printf("                     .:...........   :?JYYYY5YYJJJJJJJYY55555YJ!. ....::::..::^^^.\n");
    printf("                     .:...........   .!7?JYYY55PPPPPPPPPP55YJ7!. ..:..:::::..:^^^:\n");
    printf("                     .............   .!77??JJY55PPPPPPP5YJ?777!...::.::::::..::^~^.\n");
    printf("                    .:..........     ^7???????JJJYYYJJJ?7??JJ?!:..::.::::::::::^~^:\n");
    printf("                   ...........     .^7?JJJJJJ???????????JJYYJ?!:..:::::::^:::::::^^.\n");
    printf("                 .::...... ...:^^^~7?JJJYYYYYYJJJYYYYYYYY55YYJ7: .::..:::::::::::^^.\n");
    printf("               .:..  . ..:~!?5P??JJYYYYYYY55555YY55555555555YJ?:..:...::::^^:::.::::\n");
    printf("              ::^^~!?YY5PG###&GYY55555555555PPPPP5PP5PPPP5555Y?:.......::::^:::..:::.\n");
    printf("           ~?5PGB############&B5555PPPPPPP55PPPPGPPPPPPPPP55557..  ... .::::^^::..::^~:.\n");
    printf("        :?P#&#&&##########&&&&&PYY55555555PPPPGGGGGGGGGPPPP555!..   .   ...::::::..:7GBG5J!.\n");
    printf("      ~5#&&&&&&&&&&&&&&&&&&&&&&#GPPPPPPPPPPPPPPGGGGGPPPPPPPPPY^..   .    ....::::.::!PB##&&B?.\n");
    printf("    :Y#&##&&&&&&&&&&&&&&&&&&&&&&&BGGGGGGGGGGGGGGGGGPPPGGGGGGGJ...   .. .  ...:::^:::^PB#&&&&&B?.\n");
    printf("   :G####&&&&&&&&&&&&&&&&&&&&&&&&&#GGGGGGGGGGGGGGGGGGGGGGGGGP7.... . ..... ..:::^^^:~P#&&&&&&&&G^\n");
    printf("  :G###&&&#&&&&&&&&&&&&&&&&&&&&&&&&&#BGGGGGGGGGGGGGGGGGGGGGGP!................:^::^:7G#&&&&&&&&&#~\n");
    printf("  5####&&&##&&&&&&&&&&&&&&&&&&&&&&&&&&&#BBGGGGGGGGGGGGGGGGGGBJ..................::::?B&&&&&&&&&&&#^\n");
    printf(" ?#####&&&&##&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&#############&&&&P:...................:^~G&&&&&&&&&&&&G.\n");
    printf("^B####B#&&&&#&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&B!..........::..:::::::^7#&&&#&&&&&&&&5\n");
    printf("P######B#&&&##&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&#5:.::..:..::^:::^~?!~:^^P&&##&&&&&&&#&\n");
    printf("B#####&##&&&##&&&&#&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&#BJ^.::::::::^^^:^~JJ?~^!J&&#&&&&&&&&&#\n");
    printf("B#####&###&&#&#&&#&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&##B5~:::::::::^^:::^~J?^!?##&&&&&#&&&&#\n");
    printf("B####&#&#B#&&######&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&##BY~:^::::::::..::^~~7Y##&&&&#&&&&&&\n");
    printf("########&###&##B###&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&###BYJJJ?!^::::...:^!7P##&&&#&&&&&&#\n");
    printf("##########&&&##BG########&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&##BG5GGPB####&&&&&&&&&&\n");
    printf("#########&###&#BB########&#&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&#####BB#&&&&&&&&&&&&&\n");
    printf("#########&&####BBB#######&#&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&#####&&&&&&&&&&&&&&&\n");
    printf("#########&####BGBBB######&##&&#&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&####B#&&&&&&&&&&&&&&\n");
    printf("B##&&&########BPGBBB#########&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&####B###&&&&&&&&&&&&\n");
    printf("?JYPGBB###&####P5BBBB##########&&###&&&&&&&&&&&&&&&&&&&##&#&&##&&&&&&&&&&&&#&&#####BB###&&&&&&&&&&##\n");
    printf("7?JJYY55PPPGGP5??GGGBBB########&####&&&&&&&&#&&&#####&&##&#&&#&&&#&&&&&&&&&#&######GG#########BGP5YJ\n");
    printf("??JYY55555PP5YJ77PGGBBBB############&#&&&&&&#&&###&#&&###&#&&&&###&&#&&&&&#########P?Y5PPPPPPP555YYJ\n");
    printf("7?JJY555555555J7:?PGGBBB########&##&&&&&&##&##&###&#&&&##&#&&&&&&#&&&&&##&#######BP^!JY555PPPP555YYJ\n");

    printf(RESET);
}

void showHeart(int y)
{
    gotoxy(105, y);
    printf(PINK "       **       **");

    gotoxy(105, y + 1);
    printf("     ******   ******");

    gotoxy(105, y + 2);
    printf("    *****************");

    gotoxy(105, y + 3);
    printf("     ***************");

    gotoxy(105, y + 4);
    printf("       ***********");

    gotoxy(105, y + 5);
    printf("         *******");

    gotoxy(105, y + 6);
    printf("           ***");

    gotoxy(105, y + 7);
    printf("            *" RESET);
}

void runningWords()
{
    int x, i;

    for (i = 0; i < 2; i++)
    {
        for (x = 0; x <= 85; x++)
        {
            system("cls");

            gotoxy(x, 5);
            printf(GOLD "HAPPY NEW YEAR 2027!" RESET);

            fireworks(20, 12, x);
            fireworks(65, 12, x + 1);

            Sleep(70);
        }
    }
}


void countdown()
{
    int i;

    for (i = 5; i >= 1; i--)
    {
        system("cls");

        printf(GOLD "\n\n");
        printf("       ***********************************\n");
        printf("          COUNTDOWN TO NEW YEAR 2027!\n");
        printf("       ***********************************\n");
        printf(RESET);

        printf(PINK "\n\n");
        printf("                  %d\n", i);
        printf(RESET);

        fireworks(30, 12, i);

        printf(CYAN "\n\n          GET READY FOR A NEW BEGINNING!\n");
        printf(RESET);

        Sleep(1000);
    }
}

void main()
{
    int i;
    int heartY;

    enableColors();

   
    countdown();

   
    runningWords();


    for (i = 0; i < 12; i++)
    {
        system("cls");

       
        fireworks(5 + (i * 3), 2, i);
        fireworks(65 - (i * 2), 2, i + 1);

        
        if (i % 2 == 0)
            heartY = 20;
        else
            heartY = 25;

        showHeart(heartY);

        
        if (i % 2 == 0)
        {
            gotoxy(0, 8);
            showFace();
        }
        else
        {
            gotoxy(0, 8);
            printf(CYAN "\n\n\n\n\n\n\n\n");
            printf("             * * * HAPPY NEW YEAR! * * *\n");
            printf(RESET);
        }

        gotoxy(20, 65);
        printf(GREEN "       MAY YOUR YEAR BE FILLED WITH JOY!" RESET);

        gotoxy(35, 67);
        printf(YELLOW "* * * CHEERS TO 2027! * * *" RESET);

        Sleep(700);
    }


    system("cls");

    printf(GOLD "\n\n");
    printf("       ***********************************\n");
    printf("             HAPPY NEW YEAR 2027!\n");
    printf("       ***********************************\n");
    printf(RESET);

    printf(PINK "\n          A NEW YEAR, A NEW BEGINNING!\n");
    printf(RESET);

    showHeart(15);

    gotoxy(35, 30);
    printf(CYAN "THANK YOU!" RESET);

    Sleep(2000);
}
