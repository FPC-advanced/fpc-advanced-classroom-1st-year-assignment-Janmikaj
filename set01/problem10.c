//Write a C program to compare two strings, character by character.
#include <stdio.h>
void input(char *str1, char *str2);
int compare(char *str1,char *str2,int largest);
void output(char *str1,char *str2,int largest);
int main()
{
    char str1[100],str2[100];int largest;
    input(str1,str2);
    largest=compare(str1,str2,largest);
    output(str1,str2,largest);
}
void input(char *str1,char *str2)
{

    printf("enter the value of string\n");
    scanf("%s",str1);
    printf("enter the value of string\n");
    scanf("%s",str2);
}
int compare(char *str1,char *str2,int largest)
{
    int i=0;
    for(i=0;str1[i]== str2[i] && str1[i]!='\0' &&str2[i]!='\0';i++)
    if ( str1[i]> str2[i])
        
    printf("%s is larger", str1);
        
    if (str2[i]>str1[i])
      
    printf("%s is larger",str2);
        
    else
    printf("strings are equal");
}
void output(char *str1, char *str2, int largest)
{
    printf("Enter the largest");
}