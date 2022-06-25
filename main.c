#include <stdio.h>
#include <stdlib.h>
#define TYPE int
#define SIZE 3

typedef struct{
    int top;
    TYPE items[SIZE];
}Stack;

void initialize(Stack*);
void push(TYPE,Stack* );
TYPE pop(Stack*);
int size(Stack*);
int isFull(Stack*);
int isEmpty(Stack*);
TYPE peak(Stack*);

int main()
{
    Stack s;
    initialize(&s);
    printf("top=%d ",s.top);
    push(1,&s);
    printf("top=%d ",s.top);
    push(2,&s);
    printf("top=%d ",s.top);
    push(3,&s);
    printf("top=%d ",s.top);
    //push(4,&s);
    printf("    %d",pop(&s));
    printf("    %d",pop(&s));
    printf("    %d",pop(&s));
    printf("    %d",pop(&s));


    printf("    Hello world! \n");
    return 0;
}

void initialize(Stack* s)
{
    s->top=-1;
}
int size(Stack* s)
{
    return s->top+1;
}
int isFull(Stack* s)
{
    if(s->top<SIZE-1)
        return 0;
    else
        return 1;
}
int isEmpty(Stack* s)
{
    if(s->top>-1)
        return 0;
    else
        return 1;
}
void push(TYPE item,Stack* s)
{
    if(isFull(s))
        printf("Stack is Full!");
    else
    {
        s->top++;
        s->items[s->top]=item;
    }


}
TYPE pop(Stack* s)
{
    TYPE value;
    if(isEmpty(s))
    {
        printf("Nothing to pop");
        return -1;
    }

    else
    {
        value=s->items[s->top];
        s->top--;
        return value;
    }
}
TYPE peak(Stack* s)
{
    TYPE value;
    if(isEmpty(s))
        {printf("Nothing to peak");
        return -1;}
    else
    {
        value=s->items[s->top];
        return value;
    }
}



