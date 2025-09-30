# Innovative Clap Switch: Integrating IR Detection with Arduino

This project is a **smart clap switch system** that combines **sound detection** (claps) with **infrared/ultrasonic sensing** to improve accuracy and reduce false triggers.
It was developed as a **mini-project** for the *B.Tech in Computer Science & Engineering (AI & ML)* under **Shivaji University, Kolhapur**.

---

## 📌 Features

* Detects **claps** using a microphone sensor.
* Integrates **IR/Ultrasonic sensor** for proximity detection.
* Controls appliances (e.g., lights, fans) using a relay module.
* Provides **visual feedback** via LED.
* Reduces **false activations** from background noise.

---

## 🛠️ Components Used

* Arduino Uno
* Microphone Sensor (KY-037)
* Ultrasonic Sensor (HC-SR04) or IR Sensor (HC-SR501)
* Relay Module (5V)
* LED + 220Ω Resistor
* Breadboard & Jumper Wires
* Power Supply

---

## 📂 Project Structure

```
Code/          → Arduino source code (clap_switch.ino)
Report/        → Project report (Word/PDF)
Docs/          → Circuit diagrams, snapshots
README.md      → Project documentation
LICENSE        → Open-source license
```

---

## 🚀 How to Run

1. Clone this repository:

   ```bash
   git clone https://github.com/<your-username>/Innovative-Clap-Switch-Arduino.git
   ```
2. Open `Code/clap_switch.ino` in Arduino IDE.
3. Select the correct **Board** (Arduino Uno) and **Port**.
4. Upload the code to your Arduino.
5. Connect the sensors & relay as per the circuit diagram.
6. Clap near the microphone while in front of the IR/Ultrasonic sensor → LED/Appliance toggles ON/OFF.

---

## 📊 Applications

* Home automation (lights, fans, AC).
* Energy-saving smart devices.
* Security systems (with clap + presence detection).
* Assistive devices for elderly/disabled individuals.

---

## 🔮 Future Scope

* IoT integration with Google Home / Alexa.
* Machine learning for smart noise filtering.
* Gesture recognition using advanced IR sensors.
* Multi-device smart home automation.

---

## 📑 Report

The full mini-project report is available in the [`Report/`](./Report) folder.

---

## 📝 License

This project is licensed under the [MIT License](LICENSE).

---

### 👨‍💻 Authors

* **Aniket Mohan Kamble** – 22UAI046
* **Om Lahu Kamble** – 22UAI047
* **Rounak Rafik Harugire** – 22UAI034
* **Karan Prashant Ghatage** – 22UAI029

*Under the guidance of Dr. S. S. More*
