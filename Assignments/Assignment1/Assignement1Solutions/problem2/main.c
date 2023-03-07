#include <stdio.h>
#include <math.h>
int main(){
    int num,count=0;
    scanf("%d",&num);
    int temp=num;
    while (temp)
    {
        count++;
        temp/=10;
    }
    int digits[count];
    int product=1;
    for(int i=count-1;i>=0;i--){
        digits[i]=num/product%10;
        product*=10;
    }
    for(int i=0;i<count/2;i++){
        if(digits[i]!=digits[count-1-i]){
            printf("Not palindrome!\n");
            return 0;
        }
    }
    printf("Palindrome!\n");
}