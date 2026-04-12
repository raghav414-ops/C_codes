#include<stdio.h>
#include<stdint.h>

union print{
int16_t x;
struct node{
    int8_t a,b;
}s;
};

int main()
{
    union print p;
    p.s.a=0x12;
    p.s.b=0x78;
    printf("data in x=%x",p.x);
    return 0;
}