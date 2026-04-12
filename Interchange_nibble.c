#include<stdio.h>
#include<stdint.h>

int main()
{
    int8_t x=0x87;
    int8_t a,b;
    a=x & 0x0f;
    a<<=4;
    printf("a=%x\n",a);
    b=x & 0xf0;
    b>>=4;
    printf("b=%x\n",b);
    printf("original=%x and interchange number=%x",x,a|b);
    return 0;
}