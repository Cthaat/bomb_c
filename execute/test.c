#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int *arr = (int *)calloc(10, sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 0;
    }
    for (int i = 0; i < 10; i++)
    {
        *(arr + i) = i;
    }
    int n;
    int a;
    scanf("%d %d", &n, &a);
    if (n < 0 || n > 9)
    {
        printf("Invalid input\n");
        return 0;
    }
    int *p = realloc(arr, sizeof(int) * 11);
    if (p == NULL)
    {
        printf("Memory allocation failed\n");
        return 0;
    }
    arr = p;
    for (int j = 10; j > n; j--)
    {
        *(arr + j) = *(arr + j - 1);
    }
    *(arr + n) = a;
    for (int i = 0; i < 11; i++)
    {
        printf("%d\n", *(arr + i));
    }
    free(arr);
    arr = NULL;
    return 0;
}