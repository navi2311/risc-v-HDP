//#include <stdio.h>

const int ON = 1;
const int OFF = 0;

void dispensePill() {
    asm volatile (
        "li a0, 1\n" // Load immediate value 1 into register a0 (indicating one pill dispensed)
        "li a1, 0\n" // Load immediate value 0 into register a1 (return value indicating success)
    );
   // printf("Pill dispensed into the box.\n");
}

void Buzzer(int GPIO_buzz_bit) {
    int mask = 0x7FFFFFFE; // preserve all bits except x30[0] - set to 0
    asm volatile("and x30,x30, %1\n\t"
                 "or x30,x30, %0\n\t"
                 :
                 : "r"(GPIO_buzz_bit), "r"(mask)
                 : "x30" // clobber list,indicating that x30 is modified
    );
}

int ReadButton() {
    int button_press; // read whether is pressed or not
    asm volatile("srli x10, x30, 31\n\t"
                 "andi %0, x10, 1\n\t"
                 : "=r"(button_press)
                 :
                 : "x10");
    return button_press;
}

void delay(int loop_count) {
    for (volatile int i = 0; i < loop_count; i++) {
        // Intentionally empty loop to consume CPU cycles
    }
}

int main() {
    int initial_hours = 0, initial_minutes = 5, initial_seconds = 0; // Set initial time to 5 minutes
    int hours, minutes, seconds;
    int button_status = 0; // Assuming 0 means button is low and 1 means button is high
    int buzzer_state = 0; // Assuming 0 means buzzer is off and 1 means buzzer is on

    while (1) {
        // Set the time to the initial time for each iteration
        hours = initial_hours;
        minutes = initial_minutes;
        seconds = initial_seconds;
        buzzer_state = 0; // Reset buzzer state for each countdown
        button_status = ReadButton();
     //   printf("button status is %d ", button_status);

        // Count down and display the time until zero is reached
       // printf("Counting down from %02d:%02d:%02d:\n", hours, minutes, seconds);
        while (hours > 0 || minutes > 0 || seconds > 0) {
         //   printf("%02d:%02d:%02d\n", hours, minutes, seconds);

            // Check if the timer is at 5 seconds and turn on the buzzer
            if (hours == 0 && minutes == 0 && seconds == 5) {
                // turnOnBuzzer();
                Buzzer(ON);
            }

            delay(10000000); // Delay for approximately 1 second

            // Decrement the time
            if (seconds > 0) {
                seconds--;
            } else {
                if (minutes > 0) {
                    minutes--;
                    seconds = 59;
                } else {
                    if (hours > 0) {
                        hours--;
                        minutes = 59;
                        seconds = 59;
                    }
                }
            }
        }

        // Dispense a pill into the box

        // Check if the countdown timer has reached zero
        if (hours == 0 && minutes == 0 && seconds == 0) {
            // Reset the buzzer state

            dispensePill();
            //debugging for button as it will hardware interface
            // Simulate button press (set button_status to 1)
           // asm volatile (
             //   "li %0, 1\n\t" // Load immediate value 1 into button_status
               // : "=r"(button_status) // Output operand
           // );

            // Delay
           // for (int i = 0; i < 100; i++) {
                // Intentionally empty loop to delay execution
           // }
	  // delay(100000000);

            // Simulate button release (set button_status to 0)
            //asm volatile (
              //  "li %0, 0\n\t" // Load immediate value 0 into button_status
               // : "=r"(button_status) // Output operand
           // );

            // Check button status after pill dispensing
            button_status = ReadButton();
            if (button_status == 1) {
                Buzzer(OFF);
                // Add delay before going to the next iteration
                delay(10000000);
                continue; // Continue to the next iteration
            }
        }
    }

    return 0;
}

