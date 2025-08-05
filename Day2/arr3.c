#include<stdio.h>

int main(){

    int arr[5]={10,20,30,40,50};

    int *ptr;
    ptr=arr;

    printf("%d ",*++ptr+3);
    printf("%d ", *(ptr--+2)+5);
    printf("%d ", *(ptr+3)-10);
}