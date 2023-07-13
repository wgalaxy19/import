#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *header;
void insertatfront(int k)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    new->data = k;
    new->next = header;
    header = new;
}
void insertatend(int k)
{
    struct node *new, *temp;
    temp = header;
    new = (struct node *)malloc(sizeof(struct node));
    new->data = k;
    new->next = NULL;
    if (temp == NULL)
    {
        header = new;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new;
    }
}
void insertafter(int k, int d)
{
    struct node *new, *temp;
    temp = header;
    while (temp != NULL)
    {
        if (temp->data == k)
        {
            new = (struct node *)malloc(sizeof(struct node));
            new->data = d;
            new->next = temp->next;
            temp->next = new;
            return;
        }
        temp = temp->next;
    }
    printf("\nNode with data %d does not exist in the list\n", k);
}
void deletefromfront()
{
    struct node *temp;
    temp = header;
    if (temp == NULL)
    {
        printf("List is empty\n");
        return;
    }
    header = temp->next;
    free(temp);
}
void deletefromend()
{
    struct node *temp, *prev;
    temp = header;
    if (temp == NULL)
    {
        printf("List is empty\n");
        return;
    }
    if (temp->next == NULL)
    {
        header = NULL;
        free(temp);
        return;
    }
    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    free(temp);
}
void delete(int k)
{
    struct node *temp, *prev;
    if (header == NULL)
    {
        printf("List is empty\n");
        return;
    }
    temp = header;
    if (temp->data == k)
    {
        header = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL)
    {
        if (temp->data == k)
        {
            prev->next = temp->next;
            free(temp);
            return;
        }
        else
        {
            prev = temp;
            temp = temp->next;
        }
    }
    printf("\nNode with data %d does not exist in the list\n", k);
}
int search(int k)
{
    struct node *temp;
    int flag = 0;
    temp = header;
    while (temp != NULL)
    {
        if (temp->data == k)
        {
            flag = 1;
            break;
        }
        temp = temp->next;
    }
    return flag;
}
void traverse()
{
    struct node *temp;
    temp = header;
    if (temp == NULL)
    {
        printf("\nThe list is empty...");
        return;
    }
    printf("\nThe list: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
