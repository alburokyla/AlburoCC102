#include <stdio.h>

int main() {
    int i, num;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The Odd numbers are:\n", num);

    
    for(i = 1; i <= num; i++) {
        
        if(i % 2 != 0) {
            printf("%d", i);
            if(i + 2 <= num) {
                printf(",");
            }
        }
    }

    printf("\n");

    return 0;
}
