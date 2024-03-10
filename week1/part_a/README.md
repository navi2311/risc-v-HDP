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

##Counter 
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
