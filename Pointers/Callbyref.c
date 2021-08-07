#include<stdio.h>
#include<stdlib.h>

void increment(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int x = 5;
    int y = 6;
    printf("%d %d\n",x, y);
    increment(&x,&y);
    printf("%d %d\n",x ,y);



}

