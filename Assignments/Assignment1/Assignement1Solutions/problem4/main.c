#include <stdio.h>
#include <math.h>
int isPrime(int num);
int main(){
    char *filename = "prime_output.txt";
    FILE *fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("Error opening the file %s", filename);
        return -1;
    }
    int count=0;
    for(int i=1;i<=10000;i++){
        if(isPrime(i)){
            fprintf(fp,"%d : %d \n",++count,i);
            printf("%d ",i);
        }
    }
    fclose(fp);
}
int isPrime(int num){
    int s=sqrt(num);
    for(int i=2;i<=s;i++){
        if(num%i==0){
            return 0;
        }
    }
    if(num==1){
        return 0;
    }
    return 1;
}