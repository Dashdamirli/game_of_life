#include<stdio.h>
#include<stdlib.h>
#include"cell.c"
#include"arena.c"

int main(int argc, char const *argv[]){
    // struct cell c = C_new(2,3);
    // struct arena ar = A_new(5,5);

    const int N = 10;

    //clear screen
    printf("\033[2J");

    //hide cursor
    printf("\033[?25l");

    for(int i=0;i<N;++i){
        printf("\033[%d;4H",i+2);
        for(int j=0;j<N;++j){
            int c= (i%2==j%2) ?40 : 104;
            printf("\033[%dm ",c);
        }
        printf("\n");
    }

    printf("\033[?25h");


    return 0;
}