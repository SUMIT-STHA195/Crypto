/*WAP to check if the number is primitive root or not*/
#include <stdio.h>
#include <math.h>
void checkprimitiveRoot(int p, int g)
{
    int arr[p - 1], used[p - 1];
    for (int i = 0; i < p - 1; i++)
    {
        arr[i] = (int)pow(g, i + 1) % p;
        printf("%d^%d mod %d: %d\n", g, i + 1, p, arr[i]);
    }
    for (int i = 0; i < p - 1; i++)
    {
        for (int j = i + 1; j < p - 1; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("The number not is primitive root\n");
                return;
            }
        }
    }
    printf("The number is primitive root\n");
}
int main()
{
    int p, g;
    printf("Enter the prime number p: ");
    scanf("%d", &p);
    printf("Enter the number g: ");
    scanf("%d", &g);
    checkprimitiveRoot(p, g);
    return 0;
}