#include <stdio.h>

void delay(int loop_count) {
    for (volatile int i = 0; i < loop_count; i++) {
        // Intentionally empty loop to consume CPU cycles
    }
}

void turnOnBuzzer() {
    printf("Buzzer turned on.\n");
}

void turnOffBuzzer() {
    printf("Buzzer turned off.\n");
}

void dispensePill() {
    printf("Pill dispensed into the box.\n");
}

int main() {
    int initial_hours, initial_minutes, initial_seconds;
    int hours, minutes, seconds;
    int button_status = 0; // Assuming 0 means button is low and 1 means button is high
    int buzzer_state = 0; // Assuming 0 means buzzer is off and 1 means buzzer is on

    // Input the initial time in the format of "hours:minutes:seconds"
    printf("Enter the initial time in the format of hours:minutes:seconds: ");
    scanf("%d:%d:%d", &initial_hours, &initial_minutes, &initial_seconds);

    while (1) {
        // Set the time to the initial time for each iteration
        hours = initial_hours;
        minutes = initial_minutes;
        seconds = initial_seconds;
        buzzer_state = 0; // Reset buzzer state for each countdown
        button_status=0;
        // Count down and display the time until zero is reached
        printf("Counting down from %02d:%02d:%02d:\n", hours, minutes, seconds);
        while (hours > 0 || minutes > 0 || seconds > 0) {
            printf("%02d:%02d:%02d\n", hours, minutes, seconds);
            
            // Check if the timer is at 5 seconds and turn on the buzzer
            if (hours == 0 && minutes == 0 && seconds == 5) {
                turnOnBuzzer();
                buzzer_state = 1;
            }

            // Debugging: Print buzzer state even if it's high
            if (buzzer_state == 1) {
                printf("Buzzer is on.\n");
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

        printf("Countdown complete!\n");

        // Dispense a pill into the box
        dispensePill();

        // Check if the countdown timer has reached zero
        if (hours == 0 && minutes == 0 && seconds == 0) {
            // Reset the buzzer state
            buzzer_state = 0;

            // Wait for the button to be released
            while (button_status == 0) {
                printf("Waiting for button release...\n");
                printf("Press '1' if button is pressed, '0' otherwise: ");
                scanf("%d", &button_status);
                while (getchar() != '\n'); // Clear input buffer
            }


            if (button_status == 1) {
                // Reset the countdown to the initial time
                printf("Button is pressed. Resetting countdown.\n");
                continue; // Restart the countdown loop
            }
        }
    }

    return 0;
}
