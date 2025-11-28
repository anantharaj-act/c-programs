#include<stdio.h>
void mod(int *ptr ,int s)
{
    for(int i=0;i<s;i++){
        ptr[i]=ptr[i] *ptr[i];
    }
}
int main(){
    int arr[3]={1,10,3};
    mod(arr,3);
    for(int i=0;i<3;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n");
}
"dkskfl"