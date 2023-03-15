#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_QUESTIONS 10

int main() {
    int i, a, b, answer, user_answer, correct = 0, incorrect = 0;
    
    srand(time(NULL));
    
    printf("Responda as seguintes perguntas de tabuada:\n");
    
    for (i = 0; i < NUM_QUESTIONS; i++) {

        a = rand() % 9 + 1;
        b = rand() % 9 + 1;
        
        answer = a * b;
        
        printf("\n%d x %d = ", a, b);
        scanf("%d", &user_answer);
        
        if (user_answer == answer) {
            printf("Certo!");
            correct++;
        } else {
            printf("Errado! O resultado é %d.", answer);
            incorrect++;
        }
    }
    printf("\n\nVocê acertou %d perguntas e errou %d perguntas.\n", correct, incorrect);
    
    return 0;
}
