#include<stdio.h>
int main(){
    int num =10;
    int*ptr= &num;// size of data type will print not based on system here
    printf("size of ptr is %lu\n",sizeof((ptr)));
     printf("size of ptr is %lu\n",sizeof((*ptr)));// size of data type will print not based on system here
}
//size is decide by system artitecture