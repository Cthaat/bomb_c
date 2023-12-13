#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
    // struct node *head = NULL;
    // struct node *p = NULL;
    // struct node *q = NULL;
    // for (int i = 0; i < 10; i++)
    // {
    //     p = (struct node *)malloc(sizeof(struct node));
    //     p->data = i;
    //     p->next = NULL;
    //     if (head == NULL)
    //     {
    //         head = p;
    //     }
    //     else
    //     {
    //         q->next = p;
    //     }
    //     q = p;
    // }
    // struct node *t = head;
    // struct node *pre = NULL;
    // while (t != NULL)
    // {
    //     if (t->data == 5)
    //     {
    //         pre = (struct node *)malloc(sizeof(struct node));
    //         pre->next = t->next;
    //         t->next = pre;
    //         pre->data = 100;
    //         break;
    //     }
    //     t = t->next;
    // }
    // struct node *tmp = head;
    // while (tmp != NULL)
    // {
    //     struct node *q = tmp->next;
    //     if (tmp->next->data == 100)
    //     {
    //         tmp->next = q->next;
    //         free(q);
    //         break;
    //     }
    //     tmp = q;
    // }
    // struct node *temp = head;
    // while (temp != NULL)
    // {
    //     printf("%d\n", temp->data);
    //     temp = temp->next;
    // }

    // struct node *head = (struct node *)malloc(sizeof(struct node));
    // struct node *p = NULL;
    // head->data = 0;
    // head->next = NULL;
    // for (int i = 0; i < 10; i++)
    // {
    //     p = (struct node *)malloc(sizeof(struct node));
    //     p->data = i;
    //     p->next = head->next;
    //     head->next = p;
    // }
    // struct node *temp = head;
    // while (temp != NULL)
    // {
    //     printf("%d\n", temp->data);
    //     temp = temp->next;
    // }

    // struct node *head = NULL;
    // struct node *p = NULL;
    // struct node *q = NULL;
    // for (int i = 0; i < 10; i++)
    // {
    //     p = (struct node *)malloc(sizeof(struct node));
    //     p->data = i;
    //     if (head == NULL)
    //     {
    //         head = p;
    //     }
    //     else 
    //     {
    //         q->next = p;
    //     }
    //     p->next = NULL;
    //     q = p;
    // }
    // struct node *temp = head;
    // while (temp != NULL)
    // {
    //     printf("%d ", temp->data);
    //     temp = temp->next;
    // }
    // p = head;
    // q = NULL;
    // while (p)
    // {
    //     q = p->next;
    //     free(p);
    //     p = q;
    // }
    

    // struct node *head = NULL;
    // struct node *p = NULL;
    // struct node *q = NULL;
    // for(int i = 0; i < 10; i++)
    // {
    //     p = (struct node *)malloc(sizeof(struct node));
    //     p->data = i;
    //     p->next = NULL;
    //     if (head == NULL)
    //     {
    //         head = p;
    //     }
    //     else
    //     {
    //         q->next = p;
    //     }
    //     q = p;
    // }
    // q->next = head;

    int a = 0;
    int b = 0;
    int c = 0;

    return 0;
}