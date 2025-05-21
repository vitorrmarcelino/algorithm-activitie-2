#include <stdio.h>
#include <stdlib.h>
#include "utils/mmcCalculator.c"
#include "utils/mdcCalculator.c"

void main(){
    int n1, n2, mmc, mdc, stop;

    do{
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

        mmc = mmcCalculator(n1, n2);
        mdc = mdcCalculator(n1, n2);

        printf("MMC: %d\n", mmc);
        printf("MDC: %d\n", mdc);

        printf("Do you want to stop? YES[1] NO[2]\n");
        scanf("%d", &stop);

        while (stop != 1 && stop != 2) {
            printf("Invalid choice. Please enter 1 for YES or 2 for NO.\n");
            printf("YES[1] NO[2] \n");
            scanf("%d", &stop);
        }

    }while(stop == 2);
}



