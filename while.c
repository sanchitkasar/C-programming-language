#include<stdio.h>
int main(){
    // int a ,b,c;
    // printf("Enter number"); 
    // scanf("%d",&a);
    // c=a;
    // b=0;
    // while (a!=0){
    //     b++;
    //     a=a/10;
    // }
    // if(c==b){

    //     printf("\nnumber of digits are 1"); 
    // }else{
    //     printf("\nnumber of digits are %d",b);
    // }

    // int a,b,c,d,n;
    // printf("\nenter a number");
    // scanf("%d",&a);
    // printf("\nenter a digit");
    // scanf("%d",&n);
    // c=0;
    // d=a;
    // while (a!=0 ){
    //     b=a%10;
    //     if (b==n){
    //         c++;
    //     }
    //     a=a/10;
    // }
    // if (d==0){
    //     c=1;
    //     printf("\nthe Frequency of %d in number is %d",n,c);
    // }
    // else{
    //     printf("\nthe Frequency of %d in number is %d",n,c);
    // }
    int a,b;
    printf("\nenter a number");
    scanf("%d",&a);
    b=a;
    if (a<0){
        a=a*(-1);
    }
    while(a>=10){
        a=a/10;
    }
    printf("The 1st digit of Enter number is %d",a);
}