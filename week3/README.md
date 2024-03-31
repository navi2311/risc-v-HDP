##  A smart pill dispenser 
```
Start

Input initial time (hours, minutes, seconds)

While True:
|
|--- Set timer to initial time
|
|--- Reset buzzer state and button status
|
|--- While timer is not zero:
|    |
|    |--- Display current time
|    |
|    |--- If timer is at 5 seconds:
|    |    |
|    |    |--- Turn on buzzer
|    |
|    |--- Delay for approximately 1 second
|    |
|    |--- Decrement time
|
|--- Dispense pill
|
|--- While button is not pressed:
|    |
|    |--- Read button status
|
|--- If button is pressed:
|    |
|    |--- Turn off buzzer
|    |
|    |--- Delay
|    
|--- Restart loop

End

```

A smart pill dispenser is a device designed to help individuals manage their medication schedules more effectively.

 Here's a breakdown of its functionality:

1. **Input Initial Time**: The program starts by prompting the user to input the initial time in the format of hours:minutes:seconds. This sets the countdown timer's initial value.

2. **Countdown Timer**: Once the initial time is set, the program enters a loop where it continuously counts down from the initial time until it reaches zero. It decrements the time by one second at a time and displays the remaining time in HH:MM:SS format.

3. **Buzzer Control**: At 5 seconds remaining on the countdown timer, the buzzer is turned on to alert the user. The buzzer remains on until the countdown timer reaches zero.

4. **Pill Dispensing**: When the countdown timer reaches zero, indicating the end of the set time period, a message is displayed indicating that a pill is dispensed into the box. This step assumes a physical mechanism for dispensing pills.

5. **Button Input Handling**: After the countdown timer reaches zero, the program waits for the user to interact with a button. If the button is pressed, the countdown timer is reset to the initial time, allowing the process to start again. This functionality is looped, allowing the user to reset the timer as needed.

6. **Looping Functionality**: The program continuously loops through the countdown process, allowing the user to set the timer repeatedly by pressing the button after each countdown cycle.

Overall, the application provides a basic timer-controlled system with buzzer alerts and a manual reset mechanism, suitable for scenarios where timed events or reminders, such as medication dosages, need to be managed.


[The pill](pill.c) aspplication is writen in c programming

##using gcc
```
gcc pill.c
```
<img width="1202" alt="pill_gcc_1" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/fad215cd-ade8-416d-83da-2e67299bad07">


1. when user do not take pill
   <img width="537" alt="2" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/4f48218d-fdc5-4259-b901-bf81b4380009">


2. when user takes the pill
   <img width="824" alt="3" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/0222791d-1799-4b73-9aa5-6e94b8a73187">

## riscv 
```
riscv64-unknown-elf-gcc  -Ofast -mabi=lp64 -march=rv64i -o nav.o pill.c

```
verified the program using spike 
```
spike pk nav.o

```
user time is defined to dispense the pill
<img width="748" alt="4_SPIKE" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/4f04b241-20e6-450d-9ed3-645e74631da4">

<img width="693" alt="5" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/d9ab143c-322a-4b33-a6a9-fe78fb06cddf">



<img width="559" alt="6" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/d5065dd1-fb9c-4cf5-bf12-fac7019b3ea8">

<img width="1052" alt="7" src="https://github.com/navi2311/risc-v-HDP/assets/134842758/627c9c92-ba92-4264-a7da-9bda89c61da4">




