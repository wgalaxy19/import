#include <stdio.h>
#include "111.c"
int main()
{
    int choice, d, k;
    do
    {
        printf("\n***LINKED LIST OPERATIONS***\n");
        printf("\n1. Insert at Front");
        printf("\n2. Insert at End");
        printf("\n3. Insert After");
        printf("\n4. Delete from Front");
        printf("\n5. Delete from End");
        printf("\n6. Delete");
        printf("\n7. Search");
        printf("\n8. Traverse");
        printf("\n9. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the number to be inserted:");
            scanf("%d", &d);
            insertatfront(d);
            break;
        case 2:
            printf("Enter the number to be inserted:");
            scanf("%d", &d);
            insertatend(d);
            break;
        case 3:
            printf("Enter the number to be inserted:");
            scanf("%d", &d);
            printf("Enter the number after which the new number is to be inserted:");
            scanf("%d", &k);
            insertafter(k, d);
            break;
        case 4:
            deletefromfront();
            break;
        case 5:
            deletefromend();
            break;
        case 6:
            printf("Enter the number to be deleted: ");
            scanf("%d", &d);
            delete (d);
            break;
        case 7:
            printf("Enter the number to be searched: ");
            scanf("%d", &k);
            if (search(k) == 1)
            {
                printf("%d is found in the list\n", k);
            }
            else
            {
                printf("%d is not found in the list\n", k);
            }
            break;
        case 8:
            traverse(k);
            break;
        case 9:
            printf("\nThank you..\n\n");
            break;
        default:
            printf("Invalid choice\n");
        }
    } while (choice != 9);
}
