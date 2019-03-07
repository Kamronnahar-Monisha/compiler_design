#include<stdio.h>

int main()
{
   char a[200];

   printf("\nEnter $ and space for exit or Enter any word to recognize operator: ");
   gets(a);

   if(a[0]=='$')
    exit(0);
    if((a[0]=='/'&& a[1]=='/')){
        printf("It's a single line comment.");
    }else if(a[0]=='/'&& a[1]=='*'){
        printf("It's a multiple line comment.");
    }else{
        printf("It's not comment.");
    }

    return main();
}
