#include <stdio.h>
#include <stdlib.h>

int main () {

int SecretNumber = 12;
int guess;
int guessCount = 0;
int guessLimit = 2;
int outOfGuesses = 0; 

printf ("Guess a number between 0 and 15. \nwith a limit of 3 tries! ");
printf ("Enter a number: ");
scanf ("%d", &guess);

while (guess != SecretNumber && outOfGuesses == 0){
    if (guessCount < guessLimit){
    printf ("Enter a number: ");
    scanf ("%d", &guess);
    guessCount++;
    }
    else {
        outOfGuesses = 1;
    }
}

if (outOfGuesses == 1){
    printf ("You Lose!");
    return 0;
}

printf ("congrats, You Win!");
        return 0;
}