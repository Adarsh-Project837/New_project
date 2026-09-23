// Code to Reverse the Array Elements

#include <stdio.h>
int main(void)
{
    int n, i;

    printf("Enter How many digits you wants to enter into the Array : ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the %d Value here : ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("[");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i < (n - 1))
        {
            printf(", ");
        }
    }
    printf("]");

    printf("\n\nNow printing the values in reverse order\n");

    printf("[");
    for (i = (n - 1); i >= 0; i--)
    {
        printf("%d", a[i]);
        if (i > 0)
        {
            printf(", ");
        }
    }
    printf("]");
    return 0;
}