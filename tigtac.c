#include<stdio.h>
#include<stdlib.h>
#define BOARD_SIZE 3

typedef struct {
    int player;
    int computer;
    int draw;
}Score;

int difficulty;
Score score  = {.player=0,.computer=0,.draw=0};


void input_difficulty();
void clear_screen();
void print_board();

void main(){ 
    char board[BOARD_SIZE][BOARD_SIZE] = {
        {},
        {},
        {}
    };
    input_difficulty();
    print_board(board);

 
    }

    void print_board(char board[BOARD_SIZE][BOARD_SIZE]){
        clear_screen();
        printf("\nScore - Player X : %d,Computer : %d , Draws : %d",
        score.player,score.computer,score.draw);

    }


    void input_difficulty(){
           while(1){
    printf("\nSelect difficulty level: ");
    printf("\n1.Human (Standard)");
    printf("\n2.God (Impossible to win)");
    printf("\n Enter your choice : ");
    scanf("%d",&difficulty);
    if(difficulty != 1 && difficulty != 2){
        printf("\n Incorrect choice enter (1/2)!!");
    }else{
        break;
    }
    }
    }


    void clear_screen(){
        #ifdef _Wind32
        system("cls");
        #else
        system("clear");
        #endif
    }