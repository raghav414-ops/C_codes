#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#define max 5
struct stack{
    uint8_t a[max];
    uint8_t top;
};

void StackInit(struct stack *s)
{
    s->top=-1;
}

bool stackFull(struct stack *s)
{
    if(s->top==max)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void stackInput(struct stack *s,uint8_t data)
{
    if(stackFull(s)) 
    {
        printf("stack full\n");
        return;
    }
    printf("top location %x\n",s->top);
    s->a[++s->top]=data;
    printf("value %x at top location %x\n",s->a[s->top],s->top);
    // s->top++;
}
 bool stackEmpty(struct stack *s)
 {
    if(s->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
 }
void stackDelete(struct stack *s)
{
    if(stackEmpty(s)) 
    {
        printf("stack empty\n");
        return;
    }
    printf("top location %x\n",s->top);
    printf("value %x deleted from top location %x\n",s->a[s->top],s->top);
    s->top--;
}
int main()
{
    struct stack s;
    uint8_t data;
    StackInit(&s);
    data=0x32;
    stackInput(&s, data);
    data=0x22;
    stackInput(&s, data);
    stackDelete(&s);
    return 0;
}