#include <stdio.h>
#include <ctype.h>

int main() {
    char ch1, ch2, ch3;
    int vowels = 0, consonants = 0;

    printf("Enter 3 characters:\n");

    scanf(" %c %c %c", &ch1, &ch2, &ch3);

    void checkChar(char ch) {
        ch = tolower(ch);
        if (ch >= 'a' && ch <= 'z') {
            switch (ch) {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                    vowels++;
                    break;
                default:
                    consonants++;
                    break;
            }
        } else {
            printf("'%c' is not an alphabetic character and will be ignored.\n", ch);
        }
    }

    checkChar(ch1);
    checkChar(ch2);
    checkChar(ch3);

    printf("Total vowels: %d\n", vowels);
    printf("Total consonants: %d\n", consonants);

    return 0;
}
