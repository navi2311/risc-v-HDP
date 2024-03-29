##  A smart pill dispenser 


A smart pill dispenser is a device designed to help individuals manage their medication schedules more effectively.


```
Block diagram 
```

<img width="897" alt="flowchart" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/53c408d8-f4d1-4066-bf07-5d5566a7ae65">

```
riscv64-unknown-elf-gcc  -Ofast -mabi=lp64 -march=rv64i -o nav.o pill.c

```
```
spike pk nav.o

```
