# 🤖 Hand Gesture Controlled Robotic Arm  

## 🔹 Project Overview  
The **Hand Gesture Controlled Robotic Arm** is designed to mimic the movements of a human hand based on hand gestures.  
This project combines **ESP32 microcontrollers, flex sensors, and servo motors** to achieve precise gesture-based control.  
It demonstrates a **hands-free control mechanism** that has potential applications in:  
- 🏭 Manufacturing  
- 🏥 Healthcare  
- 🦾 Assistive technology  

---

## 🔹 Components Used  
- **5 Flex Sensors** – Detect finger bending & generate analog signals  
- **5 Servo Motors** – Actuate robotic fingers  
- **Arduino UNO Board** – Maps flex sensor data and sends it to ESP32  
- **ESP32 Microcontrollers** – Interpret data & control servo motors wirelessly  
- **Connection Pins & Breadboard** – For sensor/motor interfacing  
- **Springs** – Provide finger bending mechanism  
- **3D Printer** – Prints robotic hand components (SolidWorks design)  
- **Mechanical Framework** – Structural support for robotic hand  
- **Power Supply** – Drives servo motors  

---

## 🔹 Construction  

### 🦾 Printed Robotic Arm  
- Designed in **SolidWorks** and **3D-printed**  
- Each finger has two parts connected with springs  
- **Nylon strings** connect finger joints to servo motors for actuation  

### 🧤 Glove with Flex Sensors  
- Glove equipped with **flex sensors** on each finger  
- Sensors connected to **Arduino UNO** via breadboard  
- Arduino sends processed signals to **ESP32**  
- ESP32 transmits data **wirelessly** to another ESP32 controlling servos  

---

## 🔹 Working Principle  
1. User wears glove → **finger movements detected** by flex sensors  
2. Flex sensor data → sent to **Arduino UNO**  
3. Arduino → forwards data to **ESP32 (TX side)**  
4. ESP32 (TX) → transmits signals **wirelessly** to ESP32 (RX side)  
5. ESP32 (RX) → controls **servo motors**  
6. Servo motors pull nylon strings → **robotic fingers mimic user’s hand**  

---

## 🔹 Demonstration Flow  
Glove (Flex Sensors) → Arduino UNO → ESP32 (TX) → Wireless → ESP32 (RX) → Servo Motors → Robotic Arm


---

## 🔹 Tools & Technologies  
- **SolidWorks** (3D Design)  
- **Arduino IDE** (Programming)  
- **ESP32 & Arduino UNO** (Control & Communication)  
- **3D Printing** (Prototyping)  

---

## 🔹 Future Scope  
- Add **computer vision (OpenCV)** for camera-based gesture recognition  
- Enable **wireless glove-to-arm communication via Bluetooth/Wi-Fi**  
- Develop **multi-axis robotic hand** with higher degrees of freedom  
- Improve **response time & accuracy** with advanced sensors  

---

## 📂 Repository Structure (Planned)  
Hand-Gestured-Mechanical-Arm/
│── code/ # Arduino IDE code
│── CAD/ # SolidWorks/3D models
│── images/ # Project images/screenshots
│── README.md # Project documentation (this file)

---


---

## 🔹 Author  
👤 **Priyanshu Singh**  
- 🎓 IIT Ropar | Mechanical Engineering  
- 🔧 Skills: Abaqus, SolidWorks, OpenFOAM, Fusion, Ansys, Arduino IDE, Linux  
- 📧 Email: priyanshusingh04112003@gmail.com  
- 🌐 [LinkedIn](https://www.linkedin.com/in/priyanshu-singh-a47033265) | [YouTube](https://youtube.com/@theunfilteredguyy)  

---
⭐ If you like this project, don’t forget to **star the repo**!
