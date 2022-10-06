#include<stdio.h>
#include<stdlib.h>

typedef struct stack{
    int stk[10];
    int top;
}stack;

void push(stack *s,int val,int size);
void pop(stack *s);
void peek(stack s);
void disp(stack s);
 
int main()
{
    stack s;
    s.top=(-1);
    int ch,val,size;
    printf("\n Enter maximum size of stack : ");
    scanf("%d",&size);
    do
    {
        printf("\n\n 1 : PUSH.\n 2 : POP.\n 3 : PEEK\n 4 : DISPLAY.\n 5 : EXIT.");
        printf("\n Enter your choise : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\n Enter value to push : ");
            scanf("%d",&val);
            push(&s,val,size);
            break;
    
            case 2:
            pop(&s);
            break;
   
            case 3:
            peek(s);
            break;
   
            case 4:
            disp(s);
            break;
   
            case 5:
            exit(0);
  
            default:
            printf("\n Invalid choise.");
        }
    }while(ch!=5);
    return 0;
}

void push(stack *s,int val,int size)
{
    if((size-1) == s->top)
    {
        printf("\n Stack Overflow.");
    }
    else
    {
        (s->top)++;
        s->stk[s->top]=val;
    }
}

void pop(stack *s)
{
    if((-1) == s->top)
    {
        printf("\n Stack Underflow.");
    }
    else
    {
        (s->top)--;
    }
}

void peek(stack s)
{
    if((-1) == s.top)
    {
        printf("\n Stack Underflow.");
    }
    else
    {
        printf("\n\n Element at top is : %d",s.stk[s.top]);
    }
}

void disp(stack s)
{
    int i;
    if((-1) == s.top)
    {
        printf("\n Stack Underflow.");
    }
    else
    {
        for(i=(s.top);i>=0;i--)
        {
        printf("\n %d : %d",i,s.stk[i]);
        }
    }
}
