#ifndef STAR_MAKER_HPP
#define STAR_MAKER_HPP
#include <iostream>
#include <conio.h>
#include <windows.h>
#include "log.hpp"

inline void starMakerMain(Log *mainLog)
{
    system("cls");
    std::cout << "This is star maker.\n";

    // Variables
    int numberOfStars;
    int counter = 1;
    int spaces;

    std::cout << "Enter size of pyramid (upto 20): ";
    std::cin >> numberOfStars;

    // validate (>20 does not fit)
    if (numberOfStars > 20)
    {
        std::cerr << "Number of stars must be under 20\nPress any key to exit...";
        mainLog->AddLog("(ERROR from StarMaker.app) Number of stars must be under 20.");
        getch();
        return;
    }

    // calculate default spaces
    spaces = numberOfStars - 1;

    // do the thingy
    do
    {
        for (int i = 1; i <= spaces; i++)
        {
            printf(" ");
        }
        int j = 1;
        do
        {
            printf("*");
            j++;
        } while (j <= counter);

        j = 1;

        do
        {
            printf("*");
            j++;
        } while (j <= counter);

        printf("\n");
        spaces--;
        counter++;
        Sleep(110); // to give it a more old weak computer style

    } while (counter <= numberOfStars);

    // exit (conio good)
    printf("Press R to do it again.\nOR\nPress Q to continue...");

    mainLog->AddLog("(INFO from StarMaker.app) Star Pyramid created with width " + std::to_string(numberOfStars));
    char ch = getch();
    if (ch == 'q') return;
    else starMakerMain(mainLog);
}

#endif // STAR_MAKER_HPP
