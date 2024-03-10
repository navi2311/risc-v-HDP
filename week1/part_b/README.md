# Task1
## Calculate - 10-19 , 20+30 , 36-12 in signed, 1s and 2s complement.

https://github.com/navi2311/risc-v-HDP/blob/main/week1/part_b/assignment2_numerical%20cal.pdf


## Design an 4-bit ALU in c code and verify it using gcc
```
#include <stdio.h>

int main() {
    int a, b, result;
    char operation[10];

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the required operation: ");
    scanf("%s", operation);

    if (strcmp(operation, "add") == 0) {
        result = a + b;
        printf("Value of %d + %d is %d\n", a, b, result);
    } else if (strcmp(operation, "sub") == 0) {
        result = a - b;
        printf("Value of %d %s %d is %d\n", a, operation, b, result);
    } else if (strcmp(operation, "mul") == 0) {
        result = a * b;
        printf("Value of %d %s %d is %d\n", a, operation, b, result);
    } else if (strcmp(operation, "div") == 0) {
        if (b == 0) {
            printf("Can't divide when b is zero\n");
        } else {
            result = a / b;
            printf("Value of %d %s %d is %d\n", a, operation, b, result);
        }
    } else {
        result = 0;
        printf("No operation is selected or invalid syntax\n");
    }

    return 0;
}
```
<img width="1187" alt="alu_c_assembly" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/b2112b07-2210-474f-9224-654a444b6ef5">


## Design the same 4-bit ALU code in verilog and verify it using iverilog and gtkwave

```
:wa ----to save file
:q  -----to quit from vim

```
