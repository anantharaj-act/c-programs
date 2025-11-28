#include <stdio.h>
int swap(int *n1,int *n2){
    mint temp=*n1;
*n1=*n2;
*n2=*n1;
}
int main(){
    int n1,n2;
    printf("enter the number:");
    scanf("%d%d",&n1,&n2);
    printf("before %d %d\n",n1,n2);
    swap(&n1,&n2);
     printf("after %d %d\n",n1,n2);
}