#include <stdio.h>

int main() {
    int score;
    char grade;

    // Step 1: Take user input
    printf("Enter your score (0-100): ");
    scanf("%d", &score);

    // Validation
    if (score < 0 || score > 100) {
        printf("Invalid score! Please enter a score between 0 and 100.\n");
        return 1;
    }

    // Step 2: Calculate grade using ternary operator
    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' : 'F';

    // Step 3: Print grade
    printf("Your grade is %c. ", grade);

    // Step 4: Additional comment using switch-case
    switch (grade) {
        case 'A':
            printf("Excellent work!\n");
            break;
        case 'B':
            printf("Well done.\n");
            break;
        case 'C':
            printf("Good job.\n");
            break;
        case 'D':
            printf("You Passed, but you could do better.\n");
            break;
        case 'F':
            printf("Sorry, you failed.\n");
            break;
        default:
            printf("Error in grade evaluation.\n");
    }

    // Step 5: Eligibility check using if-else
    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D') {
        printf("Congratulations! You are eligible for the next level.\n");
    } else {
        printf("Please try again next time.\n");
    }

    return 0;
}