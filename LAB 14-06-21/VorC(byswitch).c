#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any alphabet: ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'a': 
            printf("Entered charachter is a Vowel");
            break;
        case 'e': 
            printf("Entered charachter is a Vowel");
            break;
        case 'i': 
            printf("Entered charachter is a Vowel");
            break;
        case 'o': 
            printf("Entered charachter is a Vowel");
            break;
        case 'u': 
            printf("Entered charachter is a Vowel");
            break;
        case 'A': 
            printf("Entered charachter is a Vowel");
            break;
        case 'E': 
            printf("Entered charachter is a Vowel");
            break;
        case 'I': 
            printf("Entered charachter is a Vowel");
            break;
        case 'O': 
            printf("Entered charachter is a Vowel");
            break;
        case 'U': 
            printf("Entered charachter is a Vowel");
            break;
        default: 
            printf("Entered charachter is a Consonant");
    }

    return 0;
}
