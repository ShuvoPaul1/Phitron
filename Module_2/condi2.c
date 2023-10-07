#include<stdio.h>
int main()
{
int tk;
scanf("%d",&tk);
if(tk>=3000)
{
    printf("cox's bazar\n");
     if(tk>=3600)
     {
        printf("bdam");

     }
     else if(tk>=3100)
     {
        printf("Creame");
     }
     else
     {
        printf("Muri");
     }
     /*Of course, using symbolic notation, the summary can be presented as:

- \( tk \geq 3600 \) : "cox's bazar" → "bdam"
- \( 3100 \leq tk < 3600 \) : "cox's bazar" → "Creame"
- \( 3000 \leq tk < 3100 \) : "cox's bazar" → "Muri"
- \( tk < 3000 \) : [No output]*/
}
else if(tk>=2000)
{
    printf("Road trip\n");
    if(tk>=2500)
    {
        printf("Gari");
    }
    else
    {
        printf("Bus");
    }
}
/*Using symbolic notation, the summary for the provided code is:

- \( tk \geq 2500 \) : "Road trip" → "Gari"
- \( 2000 \leq tk < 2500 \) : "Road trip" → "Bus"
- \( tk < 2000 \) : [No output]*/
else 
{
    printf("School");
}
}