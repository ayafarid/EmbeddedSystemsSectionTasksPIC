#include <stdio.h>
#include <math.h>
#include <string.h>
int isPrime(int num);
int main(){
    char name[100];
    scanf(" %99[^\n]s",name);
    int size=strlen(name);
    char *ptr=name;
    for(int i=size-1;i>=0;i--){
        printf("%c",*(ptr+i));
    }
}