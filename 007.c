#include <stdio.h>
int main(){
    int unsigned num=0x12345678;
    char *cptr=(char*)&num;
    if(*cptr == 0x78){
        printf("cptr is %d\t%x\n",*cptr,*cptr);
    }
    else{
        printf("bigendian");

    }
}