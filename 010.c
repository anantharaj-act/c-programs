#include <stdio.h>
int prime(int num)
{
    for( int i=2;i*i<=num;i++)
    {
        if(num%i==0)
        return 0;
    }
    return 1;

}

int main(){
    int arr[5]={7,9,11,43,71};
    for(int i=0;i<5;i++){
    if (prime(arr[i]))
    {
        printf("%d it is prime\n",arr[i]);
    }
    else{
        printf("%d not prime\n",arr[i]);
    }
}
}
