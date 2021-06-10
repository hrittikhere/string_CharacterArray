//WAP to find the length of a string.

#include <stdio.h>
int main() {
    char s[] = "I am a student";
    int i;

    for (i = 0; s[i] != '\0'; ++i);
    
    printf("Length of the string: %d", i);
    return 0;
}
