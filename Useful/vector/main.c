#include "include.h"

int main() {
    int capacity = 0;
    int number = 0;
    int position = 0;
    printf("Enter the capacity for the vector\n");
    scanf("%d", &capacity);
    if(capacity <= 0) {
        printf("Capacity need to be hight than 0\n");
        exit(1);
    }
    initialize_vector(&vector, capacity);

    int choice = 0;
    do {
        printf("\n");
        printf("Enter the operation\n");
        printf("1 - Element at position\n");
        printf("2 - Is Empty\n");
        printf("3 - Add element at back\n");
        printf("4 - Delete element at back\n");
        printf("5 - First element\n");
        printf("6 - Last element\n");
        printf("7 - Vector size\n");
        printf("8 - Vector capacity\n");
        printf("9 - Insert Element\n");
        printf("10 - Delete Element\n");
        printf("11 - Print Vector Elements\n");
        printf("12 - Remove extra capacity\n");
        printf("13 - Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the position\n");
                scanf("%d", &position);
                at(&vector, position);
                break;
            case 2:
                empty(&vector);
                break;
            case 3:
                printf("Enter the value\n");
                scanf("%d", &number);
                push_back(&vector, number);
                break;
            case 4:
                pop_back(&vector);
                break;
            case 5:
                front(&vector);
                break;
            case 6:
                back(&vector);
                break;
            case 7:
                size(&vector);
                break;
            case 8:
                cap(&vector);
                break;
            case 9:
                printf("Enter the element\n");
                scanf("%d", &number);
                printf("Enter the position\n");
                scanf("%d", &position);
                insert(&vector, number, position);
                break;
            case 10:
                printf("Enter the position\n");
                scanf("%d", &position);
                erase(&vector, position);
                break;
            case 11:
                print(&vector);
                break;
            case 12:
                shrink_to_fit(&vector);
                break;
            case 13:
                printf("Exiting the program\n");
                break;
            default:
                printf("Enter a valid choice\n");
                break;
        }
    } while (choice != 13);

    free_struct(&vector);
    return 0;
}
