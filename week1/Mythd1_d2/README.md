It is a part of Riscv myth workshop 
<details>
 <summary>Day1)Tool Chain flow of Riscv used in Workshop</summary>
 
 <details>
  <summary>1) write a  c program and complie it using gcc complier</summary>
  
  
  ###  write a  c program and complice iot using gcc complier
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
 </details>
 <details>
  <summary>2) riscv gcc complier</summary>
 
 ## convert c program into  get object files (.o files) usng riscv gcc complier . 
    These object files contain machine code specific to the RISC-V architecture.
  
 `
 riscv64-unknown-elf-gcc -o1 -mabi=lp64 -march=rv64i -o result_file.o file.c
 `
 `
 riscv64-unknown-elf-gcc -ofast -mabi=lp64 -march=rv64i -o result_file.o file.c
 `
</details>
<details>
  <summary>3) objdump</summary>
 
 ## Understanding Machine Code by converting into assembly lanuage  using `objdump`
 * Machine code is not human-readable, so understanding its behavior directly is challenging.
 * objdump is a tool that disassembles object files, converting machine code into assembly language instructions.
 * Using objdump, developers can examine the assembly code generated from their source code.
 to see the dumped assembly file 
 ```
 riscv64-unknown-elf-objdump -d result_file.o | less
 ```
</details>
<details>
 <summary> 4) spike</summary>
 
 ## Simulating Execution with `Spike`
 * spike is a RISC-V ISA simulator. It simulates the execution of RISC-V code on a virtual RISC-V processor.
 * By running code through spike, developers can observe its execution behavior, including instruction execution, memory accesses, and register changes.
 * It provides insights into how code behaves on RISC-V processors without needing real hardware.
 ```
 spike pk obj.o
  
 ```
  > spike pk obj.o, Spike will simulate the execution of the binary obj.o as if it were running on a RISC-V processor with a minimal operating system environment provided by the  proxy kernel. This allows you to observe the behavior of the binary and its interaction with the simulated environment without needing real hardware.



 ```
 spike -d pk obj.o
 ```


 > The -d flag is used to enable debugging features in spike.When debugging is enabled, spike will typically halt execution at the beginning of the program, allowing you to step through the program's execution, set breakpoints, examine memory and registers, etc., using a debugger interface.
The -d flag is useful for debugging RISC-V binaries, especially when you need to inspect the execution flow or diagnose issues in the program.
</details>
</details>
<details>
 <summary>Day2) ABI</summary>
 
</details>

