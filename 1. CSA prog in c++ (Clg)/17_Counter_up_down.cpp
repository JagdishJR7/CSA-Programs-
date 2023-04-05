#include <stdio.h>

int main() {
    int count = 0; 
    int choice, num;

    printf("Enter 1 to count up or 2 to count down: ");
    scanf("%d", &choice);

    printf("Enter a number to count up/down to: ");
    scanf("%d", &num);

    if (choice == 1) { 
        while (count <= num) {
            printf("%d\n", count);
            count++;
        }
    } 
    else if (choice == 2) { 
        while (count >= num) {
            printf("%d\n", count);
            count--;
        }
    } else { 
        printf("Invalid choice.");
    }

    return 0;
}
