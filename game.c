#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int rock;
    int paper;
    int scissor;
    char player1_name[100];
    char player2_name[100];
    char PLAYER1_choice[2], PLAYER2_choice[2];

    // Input the name of the player one
    printf("enter the name of player one  = ");
    scanf("%s", player1_name);
    getchar();

    printf("Enter the name of player two = ");
    scanf("%s", player2_name);
    getchar();

    int SCORE_OF_PLAYER1 = 0;
    int SCORE_OF_PLAYER2 = 0;
    int j = 0, k = 0;
    int round;

    printf("how many time do you want to play ?\t");
    scanf("%d", &round);
    printf("\n\n");
    for (int i = 1; i <= round; i++)
    {

        printf("%s PLEASE CHOOSE THE ROCK PAPER & SCISSOR  :\n", player1_name);
        char *e = getpass("ENTER R FOR ROCK:\n ENTER P FOR PAPER:\n ENTER S FOR  SCISSOR:\t "); // Player one
        strcpy(PLAYER1_choice, e);
        PLAYER1_choice[0] = tolower(PLAYER1_choice[0]);
        printf("\n\n");

        // input the name of the player two
        /*printf("Enter the name for player two = ");
        scanf("%s",name2);
        getchar();*/
        printf("%s PLEASE CHOOSE ROCK PAPER SCISSOR :\n", player2_name);
        char *f = getpass("ENTER R FOR ROCK:\n ENTER P FOR PAPER:\n ENTER S FOR  SICOR:\t ");
        strcpy(PLAYER2_choice, f);
        PLAYER2_choice[0] = tolower(PLAYER2_choice[0]);
        printf("\n\n");

        // it show the who choose what
        printf("%s choose : %s\n", player1_name, PLAYER1_choice);
        printf("%s choose :%s \n ", player2_name, PLAYER2_choice);
        // strcpy(choice2,f);
        printf("\n\n");

        // Player Two

        // players enter rock paper sicsor Whatever they want
        // char *e =  getpass("Enter RPS ");

        // char *e =  getpass("Enter RPS "); // Player one
        // char *f=  getpass("Enter RPS"); // Player Two

        if (PLAYER1_choice[0] == PLAYER2_choice[0])
        {
            printf("That the tie ");
            printf("\n\n");
        }
        else if ((PLAYER1_choice[0] == 'r' && PLAYER2_choice[0] == 's') ||
                 (PLAYER1_choice[0] == 'p' && PLAYER2_choice[0] == 'r') ||
                 (PLAYER1_choice[0] == 's' && PLAYER2_choice[0] == 'p'))
        {
            printf(" SO %s IS THE WINNER \n ", player1_name);
            printf("\n\n");
            SCORE_OF_PLAYER1++;
            printf(" %s's the score is %d", player1_name, SCORE_OF_PLAYER1);
        }
        else if ((PLAYER1_choice[0] == 's' && PLAYER2_choice[0] == 'r') ||
                 (PLAYER1_choice[0] == 'r' && PLAYER2_choice[0] == 'p') ||
                 (PLAYER1_choice[0] == 'p' && PLAYER2_choice[0] == 's'))
        {

            printf(" SO %s IS THE WINNER \n", player2_name);
            SCORE_OF_PLAYER2++;
            printf("%s's score is %d", player2_name, SCORE_OF_PLAYER2);
        }
        else
        {
            printf(" PLEASE ENTER THE  VALID ALPHABET");
        }

        printf("\n\n");
    }

    printf("THE TOTAL SCORE of %s is %d\n", player1_name, SCORE_OF_PLAYER1);
    printf("THE TOTAL SCORE Of %s is %d\n", player2_name, SCORE_OF_PLAYER2);

    if (SCORE_OF_PLAYER1 > SCORE_OF_PLAYER2)
    {
        printf("%s is the winner by %d points", player1_name, SCORE_OF_PLAYER1 - SCORE_OF_PLAYER2);
    }
    else if (SCORE_OF_PLAYER2 > SCORE_OF_PLAYER1)
    {
        printf("%s is the the winner by %d points ", player2_name, SCORE_OF_PLAYER2 - SCORE_OF_PLAYER1);
    }
    else if (SCORE_OF_PLAYER1 == SCORE_OF_PLAYER2)
    {
        printf("thats the tie match :)");
    }
    else
    {
        printf("INVALID");
    }

    return 0;
}