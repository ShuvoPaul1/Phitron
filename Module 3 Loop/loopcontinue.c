#include<stdio.h>
int main()
{
int i,N;
    scanf("%d",&N);
    for(i=1;i<=N; i+=1)
{
    if(i==7 )
{
    continue ;
}

   if(i==5 )
{
    continue ;
}
    printf("%d\n",i);
    
}

}