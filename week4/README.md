In week 4, i have  learned about interacting with hardware components using low-level programming techniques, particularly using inline assembly language within C code. 
1. learned how to interact with hardware components such as a buzzer and a button using inline assembly language within C code.
2. This involved writing inline assembly snippets to manipulate hardware registers directly, enabling control over the buzzer state and reading the status of a button.


Note:changed user defined time to 5 min.for initial.once i checked all other hardware interface i will add an interface to the user to set the time.

<img width="814" alt="9)pill_test" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/7e74625d-ff65-4036-82c3-c4651da9397a">

```
riscv64-unknown-elf-gcc -march=rv32i -mabi=ilp32 -ffreestanding -nostdlib  -o out pill.c
riscv64-unknown-elf-objdump -d  -r out > ass.txt
```
python scrpit to check unique instructions
```
python3 script.py
```
```

Number of different instructions:20
List of unique instructions:
and
jal
li
lui
bne
ret
addi
nop
andi
bgtz
xori
lw
or
j
blt
bnez
blez
sw
mv
srli


```
