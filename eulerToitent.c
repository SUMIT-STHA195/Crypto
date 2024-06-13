#include <stdio.h>

int find_gcd(int a, int b){
    if(b == 0) return a;

    else{
        return find_gcd(b, a%b);
    }
}


int main(){
    int n, i, j, count = 0;
    printf("Enter an input number: ");
    scanf("%d", &n);
    int arr[n-1];
    printf("GCD from 1 to %d: \n", n-1);
        for(i=1; i<n; i++){
        arr[i] = find_gcd(n, i);
        printf("%d\t", arr[i]);
        if(arr[i] == 1){
            count = count + 1;
        }
    }
    printf("\nThe euler totient function value: %d\n", count);

}
