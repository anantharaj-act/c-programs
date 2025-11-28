#include <stdio.h>

int main(){
    int num1=5,num2=10;
    printf("before calling function\nnum1=%d\tnum2=%d\n,num1,num2");
swap(&num1,&num2);
 printf("after calling function\nnum1=%d\tnum2=%d\n,num1,num2");
}

void swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
