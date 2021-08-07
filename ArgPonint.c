#include<stdio.h>
#include<stdlib.h>
int sumOfElement(int* A,int size) //Here A[] is interpreted as int *A
{
    //Array don't passed as whole array instead is passed the first value
    //Because passing whole array is waste of memory.
    //if we use sizeof method in this function to determine the size of
    //the array it will give 4/4 or 1. Because only address of first element
    //is passed when array argument passed.

    int sum = 0;
    for(int i = 0;i<size;i++){
        sum = sum+A[i];
    }
    return sum;
}
int main(){
    int arr[5] = {5,6,7,1,3};
    printf("%d \n",sizeof(arr)); //return total size of arr in bytes
    int size = sizeof(arr)/sizeof(arr[0]);
    /*to get size divide the total size with any single int size.
    */
    printf("%d \n",size);
    int result = sumOfElement(arr,size);
    printf("%d \n",result);
    //Array are always passed call by reference method



}

