/// Lex recognize positive negative float

#include<stdio.h>
#include<stdbool.h>
int main()
{
    char a[100];
    int i, b;
    bool key;


    printf("\nPlease enter a number or $ for exit: ");
    gets(a);
    b=strlen(a);

    if(a[0]=='$')
        exit(0);

    for(i = 0; i<b; i++){
        if(a[i]== '.'){
            printf("\nIt is floating point number.\n");
            key = false;
            break;

        }
        else{
           key = true;
        }
    }
    if(key == true){
        printf("\nIt is a integer number.");
    }
    if(a[0]=='-'){
        printf("\nIt is a negative number.");
    }else{
        printf("\nIt is a positive number.");
    }
    return main();
}
