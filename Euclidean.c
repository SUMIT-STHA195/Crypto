/*WAP to find the gcd of two input integer using Euclidean Algorithm*/
#include<stdio.h>
int gcd(int num1,int num2){
    if(num2==0){
        return num1;
    }
    printf("%d=%dx%d+%d\n",num1,num2,num1/num2,num1%num2);
    return gcd(num2,num1%num2);
}
int main(){
   int num1,num2;
   printf("Enter the value of num1:");
   scanf("%d",&num1);
   printf("Enter the value of num2:");
   scanf("%d",&num2);
   if(num1<num2){
    int temp=num1;
    num1=num2;
    num2=temp;

   }
   int gcdValue=gcd(num1,num2);
   printf("GCD of %d and %d is: %d\n",num1,num2,gcdValue);
   return 0;
}