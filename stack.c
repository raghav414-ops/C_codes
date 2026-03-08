#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#define size 5
struct stack{
	uint8_t a[size];
	uint8_t top;
};

bool full(struct stack *s)
{
	if(s->top!=size)
	{
		return false;
	}
	else
	{
		printf("stack overflow\n");
		return true;
	}

}

bool empty(struct stack *s)
{
	if(s->top!=0)
	{
		return false;
	}
	else
	{
		printf("stack underflow\n");
		return true;
	}

}

void stackInit(struct stack *s)
{
	s->top=0;
}

void stackInput(struct stack *s,uint8_t *data)
{
	if(!full(s))
	{
		s->a[s->top] = *data;
		printf("data %x at location %x\n",s->a[s->top],s->top);
		s->top++;
		printf("location of top %x\n",s->top);
	}
}

void stackRemove(struct stack *s)
{
	if(!empty(s))
	{
        s->top--;
		printf("data %x removed from location %x\n",s->a[s->top],s->top);
		printf("location of top %x\n",s->top);
	}
}




int main()
{
	struct stack s;
	stackInit(&s);
	uint8_t data;
	data=0x23;     
	stackInput(&s,&data);
    data=0x34;     
	stackInput(&s,&data);
    data=0x43;     
	stackInput(&s,&data);
    data=0x65;     
	stackInput(&s,&data);
    data=0x78;     
	stackInput(&s,&data);
    stackRemove(&s);
    data=0x19;     
	stackInput(&s,&data);
	
}
