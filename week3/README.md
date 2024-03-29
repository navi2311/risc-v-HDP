##  A smart pill dispenser 


A smart pill dispenser is a device designed to help individuals manage their medication schedules more effectively.

 Here's a breakdown of its functionality:

1. **Input Initial Time**: The program starts by prompting the user to input the initial time in the format of hours:minutes:seconds. This sets the countdown timer's initial value.

2. **Countdown Timer**: Once the initial time is set, the program enters a loop where it continuously counts down from the initial time until it reaches zero. It decrements the time by one second at a time and displays the remaining time in HH:MM:SS format.

3. **Buzzer Control**: At 5 seconds remaining on the countdown timer, the buzzer is turned on to alert the user. The buzzer remains on until the countdown timer reaches zero.

4. **Pill Dispensing**: When the countdown timer reaches zero, indicating the end of the set time period, a message is displayed indicating that a pill is dispensed into the box. This step assumes a physical mechanism for dispensing pills.

5. **Button Input Handling**: After the countdown timer reaches zero, the program waits for the user to interact with a button. If the button is pressed, the countdown timer is reset to the initial time, allowing the process to start again. This functionality is looped, allowing the user to reset the timer as needed.

6. **Looping Functionality**: The program continuously loops through the countdown process, allowing the user to set the timer repeatedly by pressing the button after each countdown cycle.

Overall, the application provides a basic timer-controlled system with buzzer alerts and a manual reset mechanism, suitable for scenarios where timed events or reminders, such as medication dosages, need to be managed.
```
Block diagram 
```

[The pill](pill.c) aspplication is writen in c programming

##using gcc
```
gcc pill.c
```
<img width="1202" alt="pill_gcc_1" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/fad215cd-ade8-416d-83da-2e67299bad07">)


when button not pressed
<img width="537" alt="2" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/4f48218d-fdc5-4259-b901-bf81b4380009">
when user takes the pill
<img width="824" alt="3" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/0222791d-1799-4b73-9aa5-6e94b8a73187">

## riscv 
```
riscv64-unknown-elf-gcc  -Ofast -mabi=lp64 -march=rv64i -o nav.o pill.c

```
```
spike pk nav.o

```
