
**uartpass**:

  <img width="819" alt="uart" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/00f4d9dc-f322-4ddf-beb0-9b669605f4eb">

**synthesis**
  used Yosys by following the [github repo](https://github.com/BhattSoham/RISCV-HDP/tree/main/week6) of soham and installed the tool in virtual machine.
  
 ```
read_liberty -lib sky130_fd_sc_hd__tt_025C_1v80_256.lib
```
<img width="818" alt="1" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/eb52ab2c-af11-4072-bfb1-0c081a8f9cec">

```
read_verilog processor.v
```

* the `read_verilog` command is used to read and parse Verilog files into the Yosys internal representation.
<img width="819" alt="2" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/93bf1fbf-b055-4443-ab2a-fc617cdad7ca">

```
synth -top wrapper
```
* The synth -top wrapper command in Yosys instructs Yosys to perform synthesis on the Verilog design and treat wrapper as the top-level module for synthesis.
  

  

