#include<stdio.h>
int main(){
    int num=100;
    int *iptr = &num;
    printf("address of num is %p\n",&num);
    printf("iptr is %p\n",iptr);
    printf("iptr i %d\n",*iptr);

}