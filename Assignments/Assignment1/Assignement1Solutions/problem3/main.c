#include <stdio.h>
#include <math.h>
int main(){
    int num,countOnes=0;
    scanf("%d",&num);
    while (num)
    {
        // printf("%d",num%2);
        if(num%2==1){
            countOnes++;
        }
        num/=2;
    }
    printf("%d",countOnes);
}