# include <stdio.h>

int main() {
            int NUM1 = 0;
            int NUM2 = 0;
            char operator;
            int result = 0;


            printf("Input first number: ");
            scanf("%d", &NUM1);
            printf("Input operator (+,-,*,/): ");
            scanf(" %c", &operator);
            printf("Input second number: ");
            scanf("%d", &NUM2);

            if (operator == '+') {
                                          result = NUM1 + NUM2;
            } else if (operator == '-') {
                                          result = NUM1 - NUM2;
            } else if (operator == '*') {
                                          result = NUM1 * NUM2;
            } else if (operator == '/') {
                                          result = NUM1 / NUM2;
            } else {
                    printf("Invalid input!");

            }

            printf("Answer is %d", result);
}