#include<stdio.h>

main()

{
 int L, S,R;
 scanf ("%d,%d",&L,&S);

do
{
R=L%S;
L=S;
S=R;
}
 while(R!=0);
 printf ("GSC is %d",L);
 }
