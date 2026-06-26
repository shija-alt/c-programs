#include <stdio.h>
#include <string.h>

char* intToRoman(int num) {

    int values[] = {
        1000, 900, 500, 400,
        100, 90, 50, 40,
        10, 9, 5, 4, 1
    };

    char *symbols[] = {
        "M", "CM", "D", "CD",
        "C", "XC", "L", "XL",
        "X", "IX", "V", "IV", "I"
    };

    static char result[20];

    result[0] = '\0';

    int i = 0;

    while (num > 0) {

        while (num >= values[i]) {

            strcat(result, symbols[i]);

            num -= values[i];
        }

        i++;
    }

    return result;
}

int main() {

    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Roman: %s\n", intToRoman(num));

    return 0;
}
