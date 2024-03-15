# Tool Chain flow of Riscv used in Workshop
## write a  c program and complice iot using gcc complier
[c code](sum1toN.c)
 is executed using `gcc` complier 
```
gcc is a complier that executes c program
> gcc file_name.c
will always generates executable file name  a.out
>to change executable file name 
` gcc -o [exectable_name] [source_file.c] `
>to complie multiple files
 ` gcc -o [exectable_name] sf1.c s2.c s3.c `
> to see error in afile
` gcc -wall -o errorlog f.c `

```
<img width="329" alt="sum1ton" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/3f115215-42a7-4c58-b2e7-88a119c48e78">

## convert c program into  get object files (.o files) usng riscv gcc complier . 
    These object files contain machine code specific to the RISC-V architecture.
  
`
riscv64-unknown-elf-gcc -o1 -mabi=lp64 -march=rv64i -o result_file.o file.c
`
`
riscv64-unknown-elf-gcc -ofast -mabi=lp64 -march=rv64i -o result_file.o file.c
`
## Understanding Machine Code by converting into assembly lanuage  using `objdump`
. Machine code is not human-readable, so understanding its behavior directly is challenging.
. objdump is a tool that disassembles object files, converting machine code into assembly language instructions.
. Using objdump, developers can examine the assembly code generated from their source code.
to see the dumped assembly file 
```
riscv64-unknown-elf-objdump -d result_file.o | less
```
