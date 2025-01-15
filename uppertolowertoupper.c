#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
char myText[100];
int choice;
int i;
void lowerToUpper(char* ptr);
void upperToLower(char* ptr);
int main(){
    
    puts("1-Upper to lower");
    puts("2-Lower to upper");
    printf("---");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        puts("enter a sentence which has uppercase");
        fgets(myText,100,stdin);
        printf("---------------\n");
        upperToLower(myText);
        break;
    case 2:
        puts("enter a sentence which has lowercase");
        fgets(myText,100,stdin);
        printf("---------------\n");
        lowerToUpper(myText);
        break;
    
    default:
        break;
    }

    return 0;
}
void upperToLower(char* ptr){
    fgets(myText,100,stdin);
    printf("---------------\n");
    for (;*ptr!='\0';ptr++)
    {
        if (*ptr>='A' && *ptr<='Z')
        {
            putchar(*ptr+32);
        }else{
            putchar(*ptr);
        }
        
    }printf("---------------\n");
    
}
void lowerToUpper(char* ptr){
    fgets(myText,100,stdin);
    printf("---------------\n");
    for (;*ptr!='\0';ptr++)
    {
        if (*ptr>='a' && *ptr<='z')
        {
            putchar(*ptr-32);
        }else{
            putchar(*ptr);
        }
        
    }printf("---------------\n");
    
}