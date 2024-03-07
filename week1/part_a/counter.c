#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int counter_d = number - 1;
    int counter_u = 0;
    
    while (counter_d >= 0) {
        printf("Counter value is %d\n", counter_d);
        counter_d -= 1;
    }
    
    while (counter_u < number) {
        printf("Counter value is %d\n", counter_u);
        counter_u += 1;
    }
    
    return 0;
}
