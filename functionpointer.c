#include<stdio.h>
#include<stdint.h>

uint8_t add(uint8_t c,uint8_t d)
{
    return c+d;
}
int main()
{
    uint8_t a=0x03,b=0x32;
    uint8_t (*p)(uint8_t,uint8_t);
    p=&add;
    printf("sum=%x",p(a,b));
    return 0;
}