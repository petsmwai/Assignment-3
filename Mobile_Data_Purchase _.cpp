/*
Reg:CT100/G/26127/25
Name:Peterson Mwai
description:a code to show mobile data purchase 
*/
#include <stdio.h>

int main() {
    int choice;

    // 1. Display the menu
    printf("===========================================\n");
    printf("   Local Mobile Service Data Bundles\n");
    printf("===========================================\n");
    printf("Option | Bundle | Cost (KES)\n");
    printf("-------------------------------------------\n");
    printf("  1    | 100 MB | 50\n");
    printf("  2    | 500 MB | 200\n");
    printf("  3    | 1 GB   | 350\n");
    printf("  4    | 2 GB   | 600\n");
    printf("===========================================\n");

    // 2. Ask the user to enter their choice
    printf("Enter your choice (1 - 4) to purchase a bundle: ");
    
    // Check if the input was successfully read
    if (scanf("%d", &choice) != 1) {
        printf("\nError: Invalid input. Please enter a number.\n");
        return 1; // Return with an error code
    }

    // 3. Use a switch statement to display the bundle selected and its cost
    printf("\n--- Purchase Summary ---\n");
    
    switch (choice) {
        case 1:
            printf("You selected the 100 MB data bundle.\n");
            printf("The cost is KES 50.\n");
            break;

        case 2:
            printf("You selected the 500 MB data bundle.\n");
            printf("The cost is KES 200.\n");
            break;

        case 3:
            printf("You selected the 1 GB data bundle.\n");
            printf("The cost is KES 350.\n");
            break;

        case 4:
            printf("You selected the 2 GB data bundle.\n");
            printf("The cost is KES 600.\n");
            break;

        default:
            // This case handles any number outside of 1, 2, 3, or 4.
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
            break;
    }

    printf("------------------------\n");
    
    return 0; // Return successfully
}
