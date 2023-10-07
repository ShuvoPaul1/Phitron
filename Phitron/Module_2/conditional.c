#include<stdio.h>
int main()
{
int tk;
scanf("%d",&tk);
if(tk>=100)
{
    printf("home");
}
else if(tk>10)
{
    printf("Road");
}
else 
{
    printf("School");
}
}