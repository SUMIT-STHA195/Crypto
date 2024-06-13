/*WAP a program to simulate Diffe-HEllman Key Exchange Algorithm*/
#include <stdio.h>
#include <math.h>

int main(){
    int p,g,Xa,Xb,Ya,Yb,Key_Alice,Key_Bob;
    printf("Enter the prime number:");
    scanf("%d",&p);
    printf("Enter the primtive root of p:");
    scanf("%d",&g);
    printf("Enter the value of Xa and Xb less than p:\n");
    scanf("%d%d",&Xa,&Xb);
    Ya=(int)pow(g,Xa)%p;
    printf("Ya:%d\n",Ya);
    Yb=(int)pow(g,Xb)%p;
    printf("Yb:%d\n",Yb);
    Key_Alice=(int)pow(Yb,Xa)%p;
    Key_Bob=(int)pow(Ya,Xb)%p;
    printf("Key of Alice:%d\n",Key_Alice);
    printf("Key of Bob:%d\n",Key_Bob);
    if(Key_Alice==Key_Bob){
        printf("Since keys are same.So,keys are exchanged.\n");
    }else{
        printf("Keys are not same.So, keys are not exchanged.\n");
    }
    return 0;
}
