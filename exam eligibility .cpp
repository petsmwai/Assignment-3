/*
Reg:CT100/G/26127/25
Name:Peterson Mwai
description:a code to exam eligibility 
*/
#include <stdio.h>

int main() {
    float attendance, averageMarks;

    // Input attendance percentage
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    // Input average marks
    printf("Enter average marks: ");
    scanf("%f", &averageMarks);

    // Check eligibility
    if (attendance >= 75 && averageMarks >= 40) {
        printf("Eligible for final exams.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
}

