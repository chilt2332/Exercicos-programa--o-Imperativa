#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess, num_guesses = 0;
    
    srand(time(NULL));
    
    secret_number = rand() % 1000 + 1;
    
    printf("Adivinha o número entre 1 e 1000!\n");
    
    do {
        printf("Tentativa %d: ", num_guesses + 1);
        scanf("%d", &guess);
        
        if (guess == secret_number) {
            printf("Acertou em %d tentativas!\n", num_guesses + 1);
        } else if (guess < secret_number) {
            printf("Demasiado baixo!\n");
        } else {
            printf("Demasiado alto!\n");
        }
        
        num_guesses++;
    } while (guess != secret_number);
    
    return 0;
}
