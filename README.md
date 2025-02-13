# Motion Sensor and Servo Project

This Arduino project uses an HC-SR04 ultrasonic sensor to measure distance, a servo motor to sweep the sensor across a range of angles, and outputs status using a green LED, red LED, and a buzzer.

## Features

- **Ultrasonic Sensor (HC-SR04):** Measures distance in centimeters.
- **Servo Motor:** Rotates the sensor from 0° to 180° and back, allowing a scanning motion.
- **LEDs and Buzzer:** Provide visual and audible feedback when an object is detected within specific distance thresholds.
  - **Green LED & Buzzer:** Activated when an object is within 20 cm.
  - **Red LED:** Activated when an object is within 10 cm.

## Components

- Arduino Uno (or compatible)
- HC-SR04 Ultrasonic Sensor
- Servo Motor (e.g., SG90)
- Green LED and Red LED (with 220Ω resistors)
- Buzzer
- Jumper wires and Breadboard

## Wiring Overview

- **Ultrasonic Sensor:**
  - **VCC:** Arduino 5V
  - **GND:** Arduino GND
  - **TRIG:** Digital Pin 9
  - **ECHO:** Digital Pin 10
- **Green LED:**
  - **Anode:** Digital Pin 3 (via 220Ω resistor)
  - **Cathode:** GND (common breadboard ground rail)
- **Red LED:**
  - **Anode:** Digital Pin 2 (via 220Ω resistor)
  - **Cathode:** GND (common breadboard ground rail)
- **Buzzer:**
  - **Positive:** Digital Pin 4
  - **Negative:** GND (common breadboard ground rail)
- **Servo Motor:**
  - **Power (Red):** Arduino 5V
  - **Ground (Black/Brown):** Arduino GND
  - **Control (Yellow/Orange):** Digital Pin 11

## Code Overview

The Arduino code performs the following tasks:
1. Sweeps the servo from 0° to 180° and back.
2. At each angle, it triggers the ultrasonic sensor to measure distance.
3. Depending on the measured distance:
   - Activates the green LED and buzzer if an object is within 20 cm.
   - Activates the red LED if an object is within 10 cm.
4. Outputs the angle and distance to the Serial Monitor for debugging.

