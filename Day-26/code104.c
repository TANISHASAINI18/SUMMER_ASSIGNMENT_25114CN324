#include <stdio.h>
int main() {
    int score=0;
    int answer;
    printf("=====QUIZ GAME=====\n");
    printf("\nQ1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if(answer==2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Delhi\n");
    }
    printf("\nQ2.2+2=?\n");
    printf("1.3\n2.4\n3.5\n4.6\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if(answer==2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Correct answer is 4\n");
    }
    printf("\nQ3. Which language is used for C programming?\n");
    printf("1. English\n2. Python\n3. C\n4. Java\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if(answer==3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Correct answer is C\n");
    }   
    printf("\n=====RESULT=====\n");
    printf("Your Score: %d/3\n", score);
    return 0;
}