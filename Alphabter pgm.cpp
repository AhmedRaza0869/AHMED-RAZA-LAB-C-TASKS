#include <stdio.h>
#include <ctype.h>

int main() {
    char ch1, ch2, ch3;
    int vowels = 0, consonants = 0;

    printf("Enter first character: ");
    scanf(" %c", &ch1);
    printf("Enter second character: ");
    scanf(" %c", &ch2);
    printf("Enter third character: ");
    scanf(" %c", &ch3);


    if (ch1 == 'A' || ch1 == 'E' || ch1 == 'I' || ch1 == 'O' || ch1 == 'U')
        vowels++;
    else
        consonants++;

    if (ch2 == 'A' || ch2 == 'E' || ch2 == 'I' || ch2 == 'O' || ch2 == 'U')
        vowels++;
    else
        consonants++;

    if (ch3 == 'A' || ch3 == 'E' || ch3 == 'I' || ch3 == 'O' || ch3 == 'U')
        vowels++;
    else
        consonants++;

    printf("Total vowels: %d\n", vowels);
    printf("Total consonants: %d\n", consonants);

    return 0;
}
