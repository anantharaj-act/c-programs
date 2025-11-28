#include <stdio.h>
int square(int *p1,int *p2)
{
    // n1=n1*n1;
    // n2=n2*n2;
    // return n1,n2;
    *p1=*p1**p1;
    *p2=*p2**p2;
}
//pass by reference
int main(){
    int num1=5,num2=10;
 printf("num1 is %d\nnum2 is %d\n",num1, num2); // 5 and 10
    square(&num1,&num2);
    //printf("res is %d\n",res);
    printf("num1 is %d\nnum2 is %d\n",num1, num2); //25 and 100
}