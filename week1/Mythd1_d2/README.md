# write a c program to cal sum from 1 tom N
  to write the c program installed leafpad text editor
  ```
  sudo apt install leafpad
  ```
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

# convert into assembly lanuage using riscv complier   
```
riscv64-unknown-elf-gcc -o1 -mabi=lp64 -march=rv64I -o result_file.o file.c
```
to see the dumped assembly file 
```
riscv64-unknown-elf-objdump -d result_file.o | less
```
