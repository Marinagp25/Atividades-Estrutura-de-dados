#include <stdio.h>
#include <string.h>

int main() {
    char string1[100];
    char string2[100];

    printf("Digite a primeira string: ");
    gets(string1); 

    printf("Digite a segunda string: ");
    gets(string2); 

    if (strcmp(string1, string2) == 0) {
        printf("As duas strings são iguais.\n");
    } else {
        printf("As duas strings não são iguais.\n");
    }

    return 0;
}
