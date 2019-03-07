#include<stdio.h>
#include<stdbool.h>
int main()
{
   char a[20];
   int i;
   bool key = true;
   char *op[]={"+","-","/","*","++","--","=","==","!=","?:",">","<",">=","<=","!","||","&&","&","%","+=","-=","*=","/=","%=","->",
                ".","sizeof()","|","~",">>","<<","^","()","[]","(type)","&=","^=","|=",">>=","<<=",","};

   printf("\nEnter $ and space for exit or Enter any word to recognize operator: ");
   gets(a);

   if(a[0]=='$')
    exit(0);

    for(i=0;i<41;i++){
       if(strcmp(op[i],a)==0){
            printf("\nOperator.");
            key = false;
            break;
       }
    }
    if(key == true){
        printf("\nNot Operator");
    }
    return main();
}
