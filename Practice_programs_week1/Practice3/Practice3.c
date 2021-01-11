#include <stdio.h>
#define stacksize 10
char stack[50];
int p=-1;

void push(char data)
{
        p+=1;
        stack[p]=data;
}

char pop(){
    if (p==-1)
        return 13;
    else
        return stack[p--];
}

int main(){
    char ch;
    while (ch!=10)
    {scanf("%c",&ch);push(ch);}
    while (ch!=13)
    {ch=pop();printf("%c",ch);}
    return 0;
}