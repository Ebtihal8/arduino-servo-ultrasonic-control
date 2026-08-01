# 🚀 Arduino Servo Control Using Ultrasonic Sensor

## 📌 Project Overview

This project demonstrates a simple automation system using an **Arduino Uno**, an **HC-SR04 Ultrasonic Sensor**, and an **SG90 Servo Motor**. The system continuously measures the distance between the ultrasonic sensor and nearby objects. Depending on the measured distance, the Arduino controls both a servo motor and an LED.

When an object is detected within **10 cm**, the servo motor rotates to **90°**, simulating the opening of a gate or door, while an LED turns on to indicate that an object has been detected. Once the object moves farther than **10 cm**, the servo automatically returns to **0°**, and the LED turns off.

This project is an excellent introduction to embedded systems because it combines **sensor input**, **actuator control**, and **decision-making using conditional programming**. It also demonstrates how multiple hardware components can work together to create a simple smart automation system.

---

# 🎯 Project Objectives

- Learn how ultrasonic sensors measure distance.
- Interface the HC-SR04 with Arduino Uno.
- Control a servo motor based on real-time sensor data.
- Use conditional statements to automate hardware behavior.
- Practice wiring electronic components correctly.
- Understand how sensors and actuators interact in embedded systems.
- Build a practical automation project that can be expanded into real-world applications.

---

# 🛠 Components Used

| Component | Quantity |
|-----------|----------|
| Arduino Uno R3 | 1 |
| HC-SR04 Ultrasonic Sensor | 1 |
| SG90 Servo Motor | 1 |
| LED | 1 |
| 220Ω Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | Several |
| USB Cable | 1 |

---

# 🔌 Circuit Connections

## HC-SR04 Ultrasonic Sensor

| Sensor Pin | Arduino Pin |
|------------|-------------|
| VCC | 5V |
| GND | GND |
| Trig | D7 |
| Echo | D6 |

### Description

The HC-SR04 ultrasonic sensor works by transmitting ultrasonic sound waves and measuring the time required for the echo to return after hitting an object. Arduino then converts this time into an estimated distance.

---

## Servo Motor

| Servo Wire | Arduino Pin |
|------------|-------------|
| Signal (Orange) | D9 |
| VCC (Red) | 5V |
| GND (Brown) | GND |

### Description

The SG90 servo motor receives control signals from Arduino. Depending on the measured distance, it rotates between **0°** and **90°**.

---

## LED

| LED Pin | Arduino Pin |
|----------|-------------|
| Anode (+) | D3 through a 220Ω resistor |
| Cathode (-) | GND |

### Description

The LED serves as a visual indicator. It lights up whenever an object is detected within the specified distance threshold.

---

# ⚙️ How It Works

The project continuously monitors the environment using the ultrasonic sensor.

### Step 1

The HC-SR04 sends an ultrasonic pulse.

### Step 2

The sound wave reflects from the nearest object.

### Step 3

The sensor receives the reflected echo.

### Step 4

Arduino calculates the distance using the echo travel time.

### Step 5

If the measured distance is **10 cm or less**:

- Rotate the servo motor to **90°**
- Turn the LED ON

### Step 6

If the distance becomes greater than **10 cm**:

- Rotate the servo motor back to **0°**
- Turn the LED OFF

### Step 7

Repeat this process continuously inside the Arduino loop.

---

# 💡 Project Features

- Real-time distance measurement.
- Automatic servo motor control.
- LED status indicator.
- Fast response to nearby objects.
- Easy-to-understand Arduino code.
- Low-cost electronic components.
- Beginner-friendly embedded systems project.
- Easily expandable for larger automation systems.

---

# 🧠 Programming Logic

The Arduino sketch follows these steps:

1. Initialize the ultrasonic sensor.
2. Initialize the servo motor.
3. Configure the LED output.
4. Continuously measure distance.
5. Compare the measured value with the threshold.
6. Execute the appropriate servo movement.
7. Update the LED state.
8. Repeat forever.

This logic demonstrates one of the most common concepts in embedded systems: **sensor → processing → actuator**.

---

# 🌍 Real-World Applications

The same concept can be used to build:

- 🚪 Automatic doors
- 🚗 Parking assistance systems
- 🗑 Smart trash bins
- 🤖 Robot obstacle detection
- 🏠 Home automation systems
- 📦 Automatic package detection
- 🚧 Industrial safety systems
- 🏭 Production line object detection

---

# 🚧 Challenges Faced

During this project several challenges were encountered:

- Understanding the operating principle of the HC-SR04 ultrasonic sensor.
- Learning the difference between the Trig and Echo pins.
- Connecting every component to the correct Arduino pins.
- Correcting LED polarity after initial wiring mistakes.
- Understanding how breadboard rows and power rails are internally connected.
- Sharing a common ground between all electronic components.
- Uploading the sketch after selecting the correct Arduino board and COM port.
- Testing different distance thresholds before deciding that **10 cm** provided the best performance.
- Ensuring the servo motor received stable power during movement.
- Debugging wiring mistakes before checking the software.
- Understanding how pulse timing affects distance calculation.
- Learning how Arduino continuously executes the loop() function.

Each challenge improved both hardware troubleshooting skills and programming confidence.

---

# 📚 What I Learned

This project helped me gain practical experience in several important embedded systems concepts:

- Using Arduino IDE to write and upload sketches.
- Reading sensor values in real time.
- Calculating distance using ultrasonic pulses.
- Controlling servo motors using the Servo library.
- Integrating multiple electronic components into one project.
- Writing conditional statements based on sensor data.
- Building complete electronic circuits on a breadboard.
- Identifying and fixing hardware connection problems.
- Understanding digital input/output pins.
- Improving debugging skills.
- Testing both simulation and physical hardware.
- Developing confidence in Arduino-based automation projects.

---

# 🚀 Future Improvements

There are many ways this project can be expanded:

- 🔔 Add a buzzer for audible alerts.
- 📟 Display the measured distance on an LCD screen.
- 📱 Send notifications through Bluetooth.
- 📡 Connect the project to Wi-Fi using ESP32.
- 🌈 Replace the LED with RGB LEDs for multiple distance ranges.
- 📊 Display live distance readings on a mobile application.
- 🚪 Convert the system into a smart automatic door.
- 🤖 Integrate additional sensors for obstacle avoidance.
- ⚡ Improve servo movement using smoother angle transitions.
- ☁ Upload sensor data to cloud platforms for monitoring.

---

# 🎯 Project Outcome

The project was successfully completed and tested in both **Tinkercad Simulation** and on a **physical Arduino Uno**.

The system accurately detects nearby objects using the HC-SR04 ultrasonic sensor, processes the measured distance in real time, controls the servo motor according to predefined conditions, and activates the LED as a visual indicator.

The project achieved all intended objectives and provided valuable hands-on experience in Arduino programming, electronic circuit design, sensor integration, and embedded systems development.

---

# 📷 Project Images

Add screenshots of:

- Circuit Diagram
- Tinkercad Simulation
- Arduino Hardware Setup
- Servo at 0°
- Servo at 90°
- Arduino IDE Code
- Serial Monitor Output

---

# 💻 Arduino Code

Upload the complete Arduino sketch used in this project.

---

# 🙏 Acknowledgements

Special thanks to everyone who contributed to my learning journey and helped me improve my understanding of Arduino programming and embedded systems. This project was an excellent opportunity to apply theoretical knowledge to a practical real-world application.

---

# 👩‍💻 Developed By

**Ebtihal**

Computer and Network Engineering Student

University of Jeddah

💙 Passionate about Embedded Systems, Robotics, and Technology.
