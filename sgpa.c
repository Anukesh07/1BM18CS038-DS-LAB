#include<stdio.h>
#include<conio.h>
struct stud
{
    int marks[10];
};
void main()
{
    struct stud s;
    float sgpa;
    int i,p,g[10];
    printf("\n enter 8 subject marks \n");
    for(i=0;i<8;i++)
    {
        scanf("%d",&s.marks[i]);
    }
    for(i=0;i<8;i++)
    {
        if(s.marks[i]>=90)
        p=10;
        else if(s.marks[i]>=75&&s.marks[i]<90)
        p=9;
        else if(s.marks[i]>=60&&s.marks[i]<75)
        p=8;
        else if(s.marks[i]>=50&&s.marks[i]<60)
        p=7;
        else if(s.marks[i]>=40&&s.marks[i]<50)
        p=6;
        else
        p=0;
        g[i]=p;
    }
    sgpa=(float)((g[1]*4)+(g[2]*4)+(g[0]*4)+(g[3]*4)+(g[4]*3)+(g[5]*3)+(g[6]*2)+(g[7]*1))/25;
    printf("sgpa= %f",sgpa);
    getch();
}
