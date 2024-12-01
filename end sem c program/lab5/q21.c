/*WAP to to replace the character in a given index of a string with *.*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int length,isPalindrome;
    printf("enter the string");
    fgets(str,sizeof(str),stdin);
    length=strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
    
