# 🚥 Smart Traffic Management System using Arduino

**Smart Traffic Management System (STMS)** is an intelligent, microcontroller-based solution designed to optimize urban traffic flow, reduce congestion, and improve road safety. This project utilizes the **Arduino platform** to create an adaptive and cost-effective alternative to traditional fixed-timing traffic signals.

![TrafficManagement](https://github.com/user-attachments/assets/36355a85-98e7-4a43-a6f4-340911706b0f)

---

## 🚀 Key Features

* **Adaptive Signal Control**: Lays the foundation for a system that can adjust timings based on real-time vehicle density and speed.
* **Sequential Logic Implementation**: Features a realistic, timed traffic cycle (Red, Yellow, Green) controlled via software logic.
* **Cost-Effective & Scalable**: Developed using accessible components like the Arduino Uno, making it ideal for localized pilot implementations in developing regions.
* **Environmental Impact**: Aims to reduce fuel consumption and vehicular emissions by minimizing unnecessary idling times.

---

## 🛠️ Hardware Requirements

* **Microcontroller**: Arduino Uno R3 (ATmega328P) 
* **Visual Indicators**: LEDs (Red, Yellow, Green) 
* **Protection**: Resistors (220Ω or 330Ω) to limit current 
* **Prototyping**: Solderless Breadboard and Jumper Wires (Female to Male) 
* **Power**: USB Cable or External Power Supply (7-12V) 

---

## 💻 Software Requirements

* **Arduino IDE**: For writing, compiling, and uploading the control logic 
* **C++ Sketch**: Programming script for sequential traffic light control 

---

## 🔌 Circuit Configuration

* **Red LED**: Connected to Digital Pin **2** via resistor 
* **Yellow LED**: Connected to Digital Pin **3** via resistor 
* **Green LED**: Connected to Digital Pin **4** via resistor 
* **Common Ground**: All LED cathodes (-) connected to the Arduino **GND** pin 

---

## 🎮 How to Use

1. **Assemble the Circuit**: Follow the pinout configuration mentioned above .
2. **Upload Code**:
  * Open the Arduino IDE and paste the project code.
  * Select **Arduino Uno** under `Tools > Board`.
  * Click **Upload** to flash the code to your microcontroller.
3. **Operation**: The lights will cycle through Red (5s), Yellow (2s), and Green (5s).

---

## 🔮 Future Recommendations

* **Sensor Integration**: Adding IR, Ultrasonic, or Camera sensors for true real-time adaptive sensing.
* **Emergency Prioritization**: Implementing RFID or wireless receivers to prioritize ambulances and fire trucks.
* **IoT Connectivity**: Connecting intersections to a central hub via Wi-Fi or LoRa for city-wide coordination.

---

## 🙌 Acknowledgements

* **Institute**: Mother Theresa Institute of Engineering and Technology (MTIET) 
* **Guidance**: Mr. K S Ranjith, Associate Professor (Dept. of AI&DS) 
* **Project Team**: B. Nithin Kumar, B. Akshaya, B. Prasanna Kumari, B. Vinay, and B. Pavani 

---

## 📜 License

This project is licensed under the **MIT License**.
For more details, see the [LICENSE](LICENSE) file in this repository.
