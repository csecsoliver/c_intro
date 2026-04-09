#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

    double a, b, answer;
    char op;
    printf("%d", argc);
    if (argc == 4) {
        a = atof(argv[1]);
        op = argv[2][0];
        b = atof(argv[3]);
    } else {
        printf("Enter first number:\n");
        scanf("%lf", &a);
        printf("Enter operation symbol (+,-,*,/): \n");
        scanf(" %c", &op);
        printf("Enter second number:\n");
        scanf("%lf", &b);
    }

    if (op == '+'){
        answer = a + b;
    } else if (op == '-') {
        answer = a - b;
    } else if (op == '*') {
        answer = a * b;
    } else if (op == '/') {
        answer = a / b;
    } else {
        printf("Invalid operation.\n");
        return 1;
    }
    printf("Answer is %lf\n", answer);
    return 0;

}
