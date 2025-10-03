/*
Reg:CT100/G/26127/25
Name:Peterson Mwai
description:a code to show mobile data bundle purchase 
*/
#include <stdio.h>

int main() {
    int choice;

    // 1. Display the menu in the requested format
    printf("Select data bundle:\n");
    printf("1. 100MB @ 50 KES\n");
    printf("2. 500MB @ 200 KES\n");
    printf("3. 1GB   @ 350 KES\n");
    printf("4. 2GB   @ 600 KES\n");

    // 2. Ask the user to enter their choice
    printf("Enter your choice (1-4): ");
    
    // Read the user's choice
    if (scanf("%d", &choice) != 1) {
        // Handle non-numeric input gracefully
        printf("Invalid choice\n");
        return 1;
    }

    // 3. Use a switch statement to display the bundle selected and its cost
    // 4. Displays “Invalid choice” if the user enters a number outside 1–4.
    switch (choice) {
        case 1:
            printf("You selected 100MB. Cost = 50 KES\n");
            break;

        case 2:
            printf("You selected 500MB. Cost = 200 KES\n");
            break;

        case 3:
            printf("You selected 1GB. Cost = 350 KES\n");
            break;

        case 4:
            printf("You selected 2GB. Cost = 600 KES\n");
            break;

        default:
            // This 'default' case handles the requirement: 
            // "Displays 'Invalid choice' if the user enters a number outside 1–4."
            printf("Invalid choice\n");
            break;
    }

    return 0; 
}

