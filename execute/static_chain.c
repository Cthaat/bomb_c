#include <stdio.h>
// #include "static_chain.h"

struct node
{
    int date;
    int cur;
};

int main()
{
    (struct node) arr[20];
    for (int i = 1; i < 20; i++)
    {
        arr[i].cur = i + 1;
    }
    arr[19].cur = 0;
    arr[0].cur = -1;
    int i = arr[1].cur;

    i = arr[0].cur;
    while (i != -1)
    {
        printf("%d\n", i);
        i = arr[i].cur;
    }
    return 0;
}