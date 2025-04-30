#include <stdio.h>
#include <stdlib.h>
#include "utils/mmcCalculator.c"
#include "utils/mdcCalculator.c"

void main(){
    int choice, n1, n2, result;

    printf("MMC[1]  MDC[2] \n");
    scanf("%d", &choice);

    while (choice != 1 && choice != 2) {
        printf("Invalid choice. Please enter 1 for MMC or 2 for MDC.\n");
        printf("MMC[1]  MDC[2] \n");
        scanf("%d", &choice);
    }

    printf("Enter the first number: \n");
    scanf("%d", &n1);

    printf("Enter the second number: \n");
    scanf("%d", &n2);

    while (n1 <= 0 || n2 <= 0) {
        printf("Numbers must be greater than zero.\n");
        printf("Enter the first number: \n");
        scanf("%d", &n1);
        printf("Enter the second number: \n");
        scanf("%d", &n2);
    }

    switch (choice) {
        case 1:
            result = mmcCalculator(n1, n2);
            printf("MMC: %d\n", result);
            break;
        case 2:
            result = mdcCalculator(n1, n2);
            printf("MDC: %d\n", result);
            break;
        default:
            printf("Invalid choice.\n");
    }
}



