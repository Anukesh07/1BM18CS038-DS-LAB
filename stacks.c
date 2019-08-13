#include<stdio.h>
int main()
{
    int stack[100],top=-1,el,x,num=-1;
    while(num!=0)
    {
        printf("Enter 1 for push, 2 for pop and 3 for display and 0 for exit\n");
        scanf("%d",&num);
    switch(num)
    {
        case 1:
            printf("Enter the element to be pushed\n");
            scanf("%d",&el);
            push(el,stack,&top);
            display(stack,top);
            break;
        case 2:
            printf("You have chosen to pop");
            x=pop(stack,&top);
            printf("Element popped is %d\n",x);
            display(stack,top);
            break;
        case 3:
            printf("The elements are");
            display(stack,top);
            break;
        default:
            printf("Program exited");
            break;
    }
    }
    return 0;
}
void push(int el,int s[100],int *t)
{
    if(*t==99)
    {
        printf("Stack overflow\n");
        return;
    }
    *t=*t+1;
    s[*t]=el;

}
void display(int s[100],int t)
{
    int i;
    if(t==-1)
    {
        printf("Stack underflow\n");
        return;
    }
    for(i=t;i>=0;i--)
        printf("%d\n",s[i]);
}
int pop(int s[100],int *t)
{
    int el;
    if(t==-1)
    {
        printf("Stack overflow");
        return -9999;
    }
    el=s[*t];
    *t=*t-1;
    return el;
}
