#include <stdio.h>
int main(){
    int num,count=0;
    scanf("%d",&num);
    while (num)
    {
        if(num%10==7){
            count++;
        }
        num/=10;
    }
    printf("%d",count);
}