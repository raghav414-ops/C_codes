#include<stdio.h>
#include<stdint.h>


int main()
{
    int16_t a[1];
    int16_t* p1=&a[0];
    int16_t* p2=&a[1];

    long int size=(char*) p2- (char*) p1;
    printf("actual size of long int=%ld bytes\n",sizeof(size));
    printf("size of datatype=%x bytes",size);
    return 0;
}