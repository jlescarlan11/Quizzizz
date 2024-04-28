#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void separator();
void title_screen();
void display_score();
void about_screen();

typedef struct {
    char* name;
    int score;
} Player;

typedef struct {
    char* category;
    char* question;
    char* option;
    char* answer;
} Questions;

typedef struct {
    char* name;
    char* type;
} Powerups;


int main() {
    char choice;

    while (1) {
        system("cls");
        char* name; //to be removed, will use struct Player -> name but didn't know for a while how to use it
        title_screen();
        choice = getch();
        switch (choice) {
            case '1':
                system("cls");

                printf("\n\n\n\n\n\n\n\t\tEnter your name: ");
                scanf("%s", name); //to be change

                break;
            case '2':
                system("cls");
                about_screen();
                while (getch() != '1'){
                    getch();
                };
                break;
            case '3':
                system("cls");
                display_score();
                while (getch() != '1'){
                    getch();
                };
                break;
            case '4':
                exit(0);
                break;
            default:
                break;
        }
    }

    return 0;
}

void title_screen() {
    printf("=======================================================================\n"
           "\n"
           "\t  /$$$$$$            /$$                     /$$   /$$ \n"
           "\t /$$__  $$          |__/                    |__/  | $$   \n"
           "\t| $$  \\ $$ /$$   /$$ /$$ /$$$$$$$$ /$$$$$$$$ /$$ /$$$$$$  \n"
           "\t| $$  | $$| $$  | $$| $$|____ /$$/|____ /$$/| $$|_  $$_/  \n"
           "\t| $$  | $$| $$  | $$| $$   /$$$$/    /$$$$/ | $$  | $$    \n"
           "\t| $$/$$ $$| $$  | $$| $$  /$$__/    /$$__/  | $$  | $$ /$$\n"
           "\t|  $$$$$$/|  $$$$$$/| $$ /$$$$$$$$ /$$$$$$$$| $$  |  $$$$/\n"
           "\t \\____ $$$ \\______/ |__/|________/|________/|__/   \\___/  \n"
           "\t      \\__/                                                \n"
           "\n"
           "=======================================================================\n"
           "\t1: Start\t2: About\t3: Leaderboard\t4: Exit\n"
           "=======================================================================\n");
}

void separator() {
    printf("=======================================================================\n");
}

void about_screen() {
    printf("=======================================================================\n"
           "hey y'all\n"
           "this game was made by Lester and Merl as project in comsci 21\n"
           "=======================================================================\n"
           "Press 1 to Go Back\n"
           "=======================================================================\n");
}

void display_score() {
    printf("jshajSHJHL");
}
