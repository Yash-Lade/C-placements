#include<stdio.h>

int main(){

    char *str= "napeshcdgi";

    printf("%c ", *((str-- +2)+1)-3);

    printf("%c ", *(--str+3)-32);

    printf("%c ",*(++str+2)+4);
}