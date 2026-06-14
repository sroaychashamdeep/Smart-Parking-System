# 🚗 Smart Parking System Using Arduino

## 📌 Project Overview

The Smart Parking System is an Arduino-based automation project designed to improve parking management by detecting vehicle presence and monitoring parking slot availability in real time. The system automatically controls a gate using a servo motor and provides status updates through an LCD display and buzzer alerts.

This project demonstrates the practical application of embedded systems, sensors, and automation technologies in smart infrastructure solutions.

---

## 🎯 Objectives

* Automate vehicle entry into a parking area.
* Detect parking slot occupancy in real time.
* Reduce manual monitoring efforts.
* Improve parking efficiency through smart sensing and control.

---

## ✨ Features

* Vehicle detection using an IR sensor.
* Parking slot monitoring using an ultrasonic sensor.
* Automatic gate operation using a servo motor.
* Real-time status display on a 16×2 LCD.
* Audio notifications through a buzzer.
* Low-cost and easy-to-implement solution.

---

## 🛠️ Hardware Components

| Component                 | Quantity    |
| ------------------------- | ----------- |
| Arduino Uno               | 1           |
| IR Sensor Module          | 1           |
| HC-SR04 Ultrasonic Sensor | 1           |
| SG90 Servo Motor          | 1           |
| 16×2 LCD Display          | 1           |
| Buzzer                    | 1           |
| Breadboard                | 1           |
| Jumper Wires              | As Required |

---

## 💻 Software Requirements

* Arduino IDE
* C/C++ Programming
* Arduino Libraries:

  * LiquidCrystal.h
  * Servo.h

---

## 🔌 Circuit Connections

### LCD Display

| LCD Pin | Arduino Pin |
| ------- | ----------- |
| RS      | 7           |
| EN      | 6           |
| D4      | 5           |
| D5      | 4           |
| D6      | 3           |
| D7      | 2           |

### IR Sensor

| Sensor Pin | Arduino Pin |
| ---------- | ----------- |
| OUT        | 8           |
| VCC        | 5V          |
| GND        | GND         |

### Servo Motor

| Servo Pin | Arduino Pin |
| --------- | ----------- |
| Signal    | 9           |
| VCC       | 5V          |
| GND       | GND         |

### Ultrasonic Sensor

| HC-SR04 Pin | Arduino Pin |
| ----------- | ----------- |
| Trig        | 10          |
| Echo        | 11          |
| VCC         | 5V          |
| GND         | GND         |

### Buzzer

| Buzzer Pin | Arduino Pin |
| ---------- | ----------- |
| Positive   | A0          |
| Negative   | GND         |

---

## ⚙️ Working Principle

1. The ultrasonic sensor continuously measures the distance inside the parking slot.
2. If the measured distance is below the predefined threshold, the slot is marked as occupied.
3. The LCD displays either:

   * SLOT AVAILABLE
   * SLOT FULL
4. When a vehicle is detected at the entrance by the IR sensor:

   * The system checks slot availability.
   * If a slot is available, the buzzer sounds.
   * The servo motor opens the gate.
   * After a short delay, the gate closes automatically.
5. The LCD updates the parking status in real time.

---

## 📂 Project Structure

```text
Smart-Parking-System/
│
├── Smart_Parking_System.ino
├── README.md
├── circuit_diagram.png
├── project_demo.mp4
└── images/
    └── prototype.jpg
```

---

## 🚀 Future Enhancements

* Multiple parking slot management.
* RFID-based vehicle authentication.
* IoT integration for remote monitoring.
* Mobile application support.
* Cloud database for parking records.
* AI-based number plate recognition.
* Real-time parking availability dashboard.

---

## 📈 Applications

* Shopping Malls
* Smart Cities
* Office Complexes
* Residential Societies
* Educational Institutions
* Public Parking Areas

---

## 👨‍💻 Team Members

* Chashamdeep Sroay
* Dhruv Singh Bhadauriya
* Paras

---

## 🏆 Learning Outcomes

Through this project, we gained practical experience in:

* Arduino Programming
* Sensor Interfacing
* Embedded Systems Development
* Automation and Control Systems
* Problem Solving and Project Development
* Hardware-Software Integration

---

## 📄 License

This project is developed for educational and learning purposes. It may be freely used, modified, and enhanced for academic and non-commercial applications.

---

⭐ If you found this project useful, consider giving the repository a star.
