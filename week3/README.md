## Smart Doorbell with Suspicious Activity Detection

```

future idea:if object is detected and not moving for a certainh of time would like to add image processing and verify any changes.

```
flow of the program

* Initialize GPIO Pins: Initialization of GPIO pins for sensor input and doorbell output.
* Read Obstacle Sensor: Continuously check the obstacle sensor for any human presence.
* Presence Detected for 10 Mins: If the sensor detects continuous human presence for 10 minutes, proceed.
* Send Suspicious Message: Send a suspicious message alert.
* Ring Doorbell if Not Rung: If the doorbell has not been rung yet and presence is detected, ring the doorbell.
* Continue Loop: If no suspicious activity is detected, continue looping and checking.
