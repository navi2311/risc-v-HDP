# C Code to Assembly Level
### Hello World
Hello World Program in c
```

#include <stdio.h>
// main function -
// where the execution of program begins
int main()
{
// prints hello world
printf("Hello World");
return 0;
}

```
to convert c program to assembly language using godbolt(https://godbolt.org/)
<img width="1250" alt="hello_world_c_assembly" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/d7c466ce-e797-40a6-b126-990e20120bb6">

### Counter 
```
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
```

<img width="1225" alt="couinter_c_assembly" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/0d05939c-dbdd-407b-9fd9-51bca1a603f5">

###Matrix Multiplication

```
#include <stdio.h>

int main() {
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    printf("Value of matrix is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```
<img width="1243" alt="matrix_c_assembly" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/5bedb124-90f5-42f7-836e-f3e610f35520">



