#include <stdio.h>
#include "queue.h"



void menu()
{
    printf("(1) - Add value to queue\n");
    printf("(2) - Take the first element of the queue\n");
    printf("(3) - Check if the queue is full\n");
    printf("(4) - Display the queue\n");
    printf("(9) - EXIT!!!\n");
}


int main()
{
    int option = 0;
    int value = 0;
    while (option!=9)
    {
        menu();
        printf("Choose the operation you want to do:\n");
        scanf("%i", &option);


        switch (option) {
            case 1: {
                printf("Enter value to add: ");
                scanf("%d", &value);
                insertQueue(value);
                break;
        }
            case 2: {
                deQueue();
                break;
            }
            case 3: {
                if (isFull()) {
                    printf("The queue is full.\n");
                } else {
                    printf("The queue is not full.\n");
                }
                break;
            }
            case 4: {
                displayQueue();
                break;
            }
            case 9: {
                return 0;
            }
            default: {
                printf("Wybierz wlasciwa opcje.");
                break;
            }
        }
    }

    return 0;
}