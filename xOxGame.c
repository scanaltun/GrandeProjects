#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>


char square[10]={'O','1','2','3','4','5','6','7','8','9'};
int checkWin();
void drawBoard();

int main(){
    system("color 3f");
    int player = 1,choice,i;
    char mark;
    do {
        drawBoard();
        player = (player%2) ? 1:2;
        printf("Player: %d,Enter The Choice:",player);
        scanf("%d",&choice);
        mark = (player == 1) ? 'O':'X';

        if(choice == 1 && square[1] =='1')
            square[1]= mark;
        else if (choice ==2 && square[2]=='2')
            square[2] = mark;
            else if (choice ==3 && square[3]=='3')
                square[3] = mark;
            else if (choice ==4 && square[4]=='4')
                square[4] = mark;
            else if (choice ==5 && square[5]=='5')
                square[5] = mark;
            else if (choice ==6 && square[6]=='6')
                square[6] = mark;
            else if (choice ==7 && square[7]=='7')
                square[7] = mark;
            else if (choice ==8 && square[8]=='8')
                square[8] = mark;
            else if (choice ==9 && square[9]=='9')
                square[9] = mark;

            else{

                printf("Invalid Option");
                player --;
                getch();
            }

            i=checkWin();
            player++;


    }while(i == -1);

    drawBoard();
    if(i==1){
        printf("Player %d Won",--player);

    }
    else {
        printf("Game Draw");
    }
    getch();
    return 0;
}

int checkWin(){
    if(square[1] == square[2] && square[2] == square[3] )
        return 1;
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
        else if (square[7] == square[8] && square[8] == square[9])
            return 1;
        else if (square[1] == square[4] && square[4] == square[7])
            return 1;
        else if (square[2] == square[5] && square[5] == square[8])
            return 1;
        else if (square[3] == square[6] && square[6] == square[9])
            return 1;
        else if (square[1] == square[5] && square[5] == square[9])
            return 1;
        else if (square[3] == square[5] && square[5] == square[7])
            return 1;
        else if (square[1]!='1' && square[2]!='2' && square[3]!='3' && square[4]!='4' && square[5]!='5' && square[6]!='6' &&square[7]!='7' &&square[8]!='8' && square[9]!='9' )
            return 0;
    else
        return -1;

}

void drawBoard(){
    system("cls");
    printf("\n\n  Welcome To XOX Game \n\n");
    printf("PLAYER 1 -O- | PLAYER 2 -X-\n\n\n");
    printf(" __________\n");
    printf("|%c | %c | %c | \n",square[1],square[2],square[3]);
    printf("|__|___|___|\n");
    printf("|  |   |   |             \n");
    printf("|%c | %c | %c | \n",square[4],square[5],square[6]);
    printf("|__|___|___|\n");
    printf("|  |   |   |             \n");
    printf("|%c | %c | %c | \n",square[7],square[8],square[9]);
    printf("|__|___|___|             \n\n\n");



}
