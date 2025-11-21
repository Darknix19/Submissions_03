#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char c) {
    c = tolower(c);
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}

void reverseVowels(char *s) {
    int left=0, right=strlen(s)-1;
    while(left<right) {
        while(left<right && !isVowel(s[left])) left++;
        while(left<right && !isVowel(s[right])) right--;
        if(left<right) {
            char temp=s[left];
            s[left]=s[right];
            s[right]=temp;
            left++;
            right--;
        }
    }
}

int main() {
    char s[50];
    printf("Enter a string: ");
    scanf("%[^\n]s", s);

    reverseVowels(s);

    printf("String after reversing vowels: %s\n", s);
    return 0;
}
