#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int vowels = 0, consonants = 0;
    
    printf("Enter 3 characters:\n");
    
    for (int i = 0; i < 3; i++) {
        printf("Character %d: ", i + 1);
        scanf(" %c", &ch); 
        
        ch = tolower(ch); 
        
        if ((ch >= 'a' && ch <= 'z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else {
            printf("'%c' is not an alphabetic character and will be ignored.\n", ch);
        }
    }
    
    printf("Total vowels: %d\n", vowels);
    printf("Total consonants: %d\n", consonants);
    
    return 0;
}
