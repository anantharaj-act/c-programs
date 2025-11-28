#include <stdio.h>
int display(int *ptr,int size){
for(int i=0;i<size;i++){
    printf("%d\n",*ptr);
    ptr++;
}
}
int main(){
    int arr[5]={1,4,3,4,5};
 display(arr,5);
}