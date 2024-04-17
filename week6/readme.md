
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
* [synthesis output](synthesis_output.txt)contains Netlist,Timing Reports,Area Reports,Power Reports,Constraints and SDC Files,Warnings and Errors,Technology-specific Information(Library cell details
Physical design rules),hierachy,cell mapping,black box modules.
<img width="673" alt="3" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/ae26db0b-a880-4a17-b776-e06b7ce410e8">

```
write_verilog test_output.v
```

* The write_verilog command in Yosys is used to write the synthesized or modified Verilog netlist to a file.
  <img width="364" alt="4" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/ef56b358-6ada-49e6-896f-53fba7c04b99">


```
abc -liberty sky130_fd_sc_hd__tt_025C_1v80_256.lib:
```
* This command performs technology mapping using ABC with the specified Liberty library.
* ABC maps the design to the target standard cell library, optimizing it for the specified technology.
  <img width="648" alt="5" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/7c6a803d-ead5-484a-810c-939177990f96">

```
dfflibmap -liberty sky130_fd_sc_hd__tt_025C_1v80_256.lib:
```
* This command performs D flip-flop mapping using the specified Liberty library.
* It replaces generic flip-flops with library-specific flip-flops to ensure correct functionality and timing.
  <img width="826" alt="6" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/a141c1c3-884a-4f49-9629-bd8aae47fe24">

```
write_verilog output.v:

```
* This command writes the final netlist after D flip-flop mapping to a Verilog file named output.v.
* The output.v file contains the final synthesized and mapped netlist suitable for further verification, simulation, or implementation.
<img width="740" alt="7" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/4ce8cd30-e16b-458a-bc87-08277764849d">

```

```

<img width="1193" alt="8" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/96ef7d28-43e2-4d91-a065-39556aefddab">


  







```
* The write_verilog command in Yosys is used to write the synthesized or modified Verilog netlist to a file.
  <img width="364" alt="4" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/ef56b358-6ada-49e6-896f-53fba7c04b99">
```
abc -liberty sky130_fd_sc_hd__tt_025C_1v80_256.lib:
```
* This command performs technology mapping using ABC with the specified Liberty library.
* ABC maps the design to the target standard cell library, optimizing it for the specified technology.
  <img width="648" alt="5" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/7c6a803d-ead5-484a-810c-939177990f96">

```
dfflibmap -liberty sky130_fd_sc_hd__tt_025C_1v80_256.lib:
```
* This command performs D flip-flop mapping using the specified Liberty library.
* It replaces generic flip-flops with library-specific flip-flops to ensure correct functionality and timing.
  <img width="826" alt="6" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/a141c1c3-884a-4f49-9629-bd8aae47fe24">

```
write_verilog output.v:

```
* This command writes the final netlist after D flip-flop mapping to a Verilog file named output.v.
* The output.v file contains the final synthesized and mapped netlist suitable for further verification, simulation, or implementation.
<img width="740" alt="7" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/4ce8cd30-e16b-458a-bc87-08277764849d">

```

```

<img width="1193" alt="8" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/96ef7d28-43e2-4d91-a065-39556aefddab">


  











  

