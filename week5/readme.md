This week, we focused on developing a Custom RISC-V core tailored to run PILL application. 

### Tasks Completed



 **Chip Configuration File - all.json**:
    - Created the `all.json` configuration file to generate the chipron processor code for the custom RISC-V core.

 **Processor Core and Testbench Generation**:
    - Generated the processor core along with the testbench using the chipron processor code generated from `all.json`.
**verilog syntax**:
```
iverilog -o pill_v testbench.v processor.v
vvp pill_v
```




**RESULT**:

<img width="788" alt="RESULT1" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/93354628-e1b8-4c76-b0ed-45329d8a88c7">
<img width="790" alt="result2" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/8b076a59-297a-4ff3-9f54-5d33052e3dc0">
<img width="1187" alt="waveforrm" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/63c90bfd-dbc1-428d-b1b2-c331a94e18a4">



