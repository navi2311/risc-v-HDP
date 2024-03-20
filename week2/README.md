### 1) Understanding how to measure CPU performance


### 2) RISC-V architecture


### 3) Task

####  Verify all the C code (counter, matrix multiplication, ALU code) using RISC-V compiler and spike output.

Note: all C programs are available in 

1) [Counter](../week1/part_a/counter.c)

2) [Matrix Multiplication](../week1/part_a/matrix_mul.c)

3) [ALU](../week1/part_b/alu.c)

####  RISCV Compiler
 1)Counter
  ```   
  riscv64-unknown-elf-gcc -march=rv32i -mabi=ilp32 -ffreestanding -nostdlib -o ./output.o counter.c
  ```
[object file geneated using riscv64 gcc](../week1/part_a/output.o)
#### Measure CPU performance of all the programs mentioned above using either Godbolt or RISC-V disassembler.
