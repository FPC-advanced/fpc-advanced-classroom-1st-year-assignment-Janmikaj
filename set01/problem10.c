//Write a C program to compare two strings, character by character.
#include <stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
int main()
{
    char string1[100],string2[100];int largest;
    input_two_strings(string1,string2);
    largest=stringcompare(string1,string2);
    output(string1,string2,largest);
}
void input_two_strings(char *string1,char *string2)
{

    printf("enter the value of string\n");
    scanf("%s",string1);
    printf("enter the value of string\n");
    scanf("%s",string2);
}
int stringcompare(char *string1,char *string2)
{
    int i=0;
    for(i=0;string1[i]== string2[i] && string1[i]!='\0' &&string2[i]!='\0';i++)
    if ( string1[i]> string2[i])
        
    printf("%s is larger", string1);
        
    if (string2[i]>string1[i])
      
    printf("%s is larger",string2);
        
    else
    printf("strings are equal");
}
void output(char *string1, char *string2, int largest)
{
    printf("Enter the largest");
}