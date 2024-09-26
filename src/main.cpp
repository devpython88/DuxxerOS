#include <iostream>
#include <windows.h>
#include <conio.h>
#include "star_maker.hpp"
#include "log.hpp"

Log *mainLog;

void showLogs(){
    system("cls");
    for (const std::string &log : mainLog->GetLog()){
        std::cout << "| " << log << "\n";
    }
    std::cout << "Press any key to continue...";
    getch();
}

int main()
{
    system("cls");

    mainLog = new Log("(INFO) DUXXER HAS BOOTED");

    std::cout << "Starting up...\n";
    Sleep(225);
    std::cout << "Loading system...\n";
    Sleep(550);
    std::cout << "Welcome to Duxxer\nPress any key to start...";

    getch();

    while (true)
    {
        system("cls");
        std::cout << "select choice.\n";
        printf("1. Star Generator\n");
        printf("2. See logs (Troublshooting purposes)\n");
        printf("Q. Exit\n");

        char c = getch();
        if (c == '1')
        {
            starMakerMain(mainLog);
        }
        
        else if (c == '2'){
            showLogs();
        }

        else if (c == 'q'){
            break;
        }
    }

    std::cout << "Powering off...\n";
    Sleep(350);
    return 0;
}