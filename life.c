#include<stdio.h>
#include<stdlib.h>
#include"cell.c"

int main(int argc, char const *argv[]){
    struct cell c = C_new(2,3);
    C_print(c,"cell");

    return 0;
}