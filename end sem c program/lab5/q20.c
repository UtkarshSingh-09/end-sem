#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    int index;
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
    printf("Enter the index to replace with '*': ");
    scanf("%d", &index);
    int length = strlen(str);
    if(index >= 0 && index < length) {
        str[index] = '*'; 
        printf("Updated string: %s\n", str);
    } else {
        printf("Invalid index. Please enter an index between 0 and %d.\n", length - 1);
    }

    return 0;
}
