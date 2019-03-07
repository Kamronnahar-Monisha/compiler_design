#include<stdio.h>
#include<stdbool.h>
int main()
{
   char a[20];
   int i, b;
   bool key = true;
   char *keyword[]={"asm","auto","break","case","cdecl","char","class","const",
       "continue","_cs","default","delete","do","double","_ds","else","enum",
       "_es","extern","_export","far","_fastcall","float","for","friend","goto",
       "huge","if","inline","int","interrupt","_loadds","long","near","new","operator",
       "pascal","private","protected","public","register","return","_saveregs","_seg",
       "short","signed","sizeof","_ss","static","struct","switch","template","this",
       "typedef","union","unsigned","virtual","void","volatile","while"};

   printf("\nEnter $ and space for exit or Enter any word to recognize identifier: ");
   gets(a);
   b = strlen(a);

   if(a[0]=='$' && a[1]== ' ')
    exit(0);

    for(i=0;i<60;i++){
       if(strcmp(keyword[i],a)==0){
            printf("\nNot Identifier.");
            key = false;
            break;
       }
    }
    for(i = 0; i<b; i++){
        if(a[i]== ' ' || a[i]== '.' ||a[i]== '!' || a[i]== '@' || a[i]== '#' || a[i]== '$' || a[i]== '%' ||
           a[i]== '^' || a[i]== '&' || a[i]== '*' || a[i]== '-' || a[i]== '=' || a[i]== '+' || a[i]== '[' ||
           a[i]== ']' || a[i] == '(' || a[i] == ')' || a[i] == '{' || a[i] == '}' || a[i] == '>'|| a[i] == '.'||
           a[i] == '<' || a[i] == ',' || a[i] == '?' || a[i] == '/'||a[i] == ';' || a[i] == ':'||a[i] == '"' || a[i] == '|'){
            printf("\nNot Identifier.\n");
            key = false;
            break;
        }
    }
    if(a[0]=='1'||a[0] == '2' || a[0] == '3'||a[0]=='4'||a[0] == '5' || a[0] == '6'||a[0]=='7'||a[0] == '8' || a[0] == '9'||a[0]==0){
        printf("\nNot Identifier");
        key = false;
    }
    if(key == true){
        printf("\nIdentifier");
    }
    return main();
}
