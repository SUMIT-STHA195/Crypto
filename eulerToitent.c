/*WAP to calculate the Euler totient function of input integer.*/
#include<stdio.h>
int gcd(int num1,int num2){
    if(num2==0){
        return num1;
    }
    printf("%d=%dx%d+%d\n",num1,num2,num1/num2,num1%num2);
    return gcd(num2,num1%num2);
}
int main(){
    
}