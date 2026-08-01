# 🚀 Arduino Servo Control Using Ultrasonic Sensor

## 📌 Project Overview

This project demonstrates how to control a servo motor using an HC-SR04 ultrasonic sensor with an Arduino Uno. The ultrasonic sensor continuously measures the distance between itself and an object. If the detected distance is **10 cm or less**, the servo motor rotates to **90°** and an LED turns on. When the object moves farther than **10 cm**, the servo returns to **0°** and the LED turns off.

This project is a simple example of distance-based automation and introduces the basics of integrating sensors, actuators, and conditional programming with Arduino.

---

## 🛠 Components Used

- Arduino Uno R3
- HC-SR04 Ultrasonic Sensor
- SG90 Micro Servo Motor
- LED
- 220Ω Resistor
- Breadboard
- Jumper Wires
- USB Cable

---

## 🔌 Circuit Connections

### HC-SR04 Ultrasonic Sensor

| Sensor Pin | Arduino Pin |
|------------|-------------|
| VCC | 5V |
| GND | GND |
| Trig | D7 |
| Echo | D6 |

### Servo Motor

| Servo Wire | Arduino Pin |
|------------|-------------|
| Signal (Orange) | D9 |
| VCC (Red) | 5V |
| GND (Brown) | GND |

### LED

| LED Pin | Arduino Pin |
|----------|-------------|
| Anode (+) | D3 through a 220Ω resistor |
| Cathode (-) | GND |

---

## ⚙️ How It Works

1. The HC-SR04 measures the distance to the nearest object.
2. Arduino calculates the measured distance.
3. If the distance is **10 cm or less**:
   - The servo rotates to **90°**.
   - The LED turns ON.
4. If the distance is **greater than 10 cm**:
   - The servo returns to **0°**.
   - The LED turns OFF.
5. The process repeats continuously.

---

## 📷 Images

### Tinkercad Circuit

![Tinkercad Circuit](images/tinkercad-circuit.png)

### Hardware Setup

![Hardware Setup](images/hardware-setup.jpg)

---

## 💻 Code

The complete Arduino code is available in:

```
servo_ultrasonic_control.ino
```

---

## 🚧 Challenges Faced

- Understanding the correct wiring of the HC-SR04 ultrasonic sensor.
- Connecting the servo motor to the correct signal pin.
- Fixing the LED wiring after discovering that it was connected incorrectly.
- Learning how the breadboard rows are internally connected.
- Uploading the Arduino code and selecting the correct COM port.
- Testing and adjusting the distance threshold until the project worked correctly.
- Ensuring all components shared the same GND connection.

---

## 📚 What I Learned

- How to interface an HC-SR04 ultrasonic sensor with Arduino.
- How to control a servo motor using the Servo library.
- How to use conditional statements based on sensor readings.
- Proper breadboard wiring techniques.
- Uploading Arduino sketches to a physical Arduino Uno.
- Debugging hardware and wiring issues.
- Building a complete Arduino automation project from simulation to real hardware.

---

## 🚀 Future Improvements

- Add a buzzer for sound alerts.
- Display the measured distance on an LCD screen.
- Use multiple ultrasonic sensors.
- Add RGB LEDs for different distance ranges.
- Improve servo movement using smoother transitions.
- Build a smart automatic door using the same concept.

---

## 🎯 Project Outcome

The project was successfully implemented in both **Tinkercad Simulation** and on a **real Arduino Uno**. The ultrasonic sensor accurately detects nearby objects, controls the servo motor based on the measured distance, and activates the LED as a visual indicator.

---

## 👩‍💻 Developed By

**Ebtihal**
Computer and Network Engineering Student
