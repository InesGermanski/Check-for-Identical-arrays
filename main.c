
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int array1[100];
    int array2[100];
    int n1, n2;
    int i, m = 0;

    printf("Number of elements in first array:\n");
    scanf("%d", &n1);

    printf("Number of elements in seccond array:\n");
    scanf("%d", &n2);

    if (n1 != n2)
    {
        printf("The arrays have different #s of elements");
        return 0;
    }

    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("Enter elements of seccond array:\n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &array2[i]);
    }

    for (i = 0; i < n1; i++)
    {
        if (array1[i] == array2[i])
        {
            m++;
        }
    }

    if (m == n1)
    {
        printf("Arrays are identical!");
    }
    else
    {
        printf("Arrays aren't identical!");
    }

    return 0;
}
