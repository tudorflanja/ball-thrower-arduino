# 🎾 Ball Throwing Device for Animals

This Arduino-based project implements an interactive ball throwing device designed to entertain pets, especially when their human companions are unavailable. The system integrates distance sensing, visual/auditory feedback, and a servo-driven catapult mechanism, offering a smart and automated play experience.

---

## 🚀 Features

- 📏 **Ultrasonic Distance Sensing**: Measures if the pet is within interaction range
- 🎯 **Condition-based Activation**: Throws a ball only if distance ≥ 10 cm and button is pressed
- 💡 **LED Indicators**:
  - Green: Ready to throw
  - Red: Distance too short
- 🔊 **Auditory Feedback**: Buzzer emits a 1000Hz tone upon triggering
- 🤖 **Servo Motor Control**: Smooth 90-degree catapult launch and reset
- 🛠️ **Physical Components**: Includes button input, LEDs, servo, buzzer, and HC-SR04 sensor

---

## 🧰 Technologies Used

- **Arduino UNO R3** – Microcontroller board
- **C/C++** – For Arduino logic and control
- **Ultrasonic Sensor (HC-SR04)** – Distance detection
- **Servo Motor (MG995)** – Ball launching mechanism
- **Breadboard + Resistors + LEDs + Button + Buzzer** – Circuit design
- **Wokwi** – Online circuit simulation

---

## 🛠️ Hardware Overview

The device consists of:
- A button for initiating throws
- An ultrasonic sensor for safe-range detection
- A buzzer for auditory signaling
- Two LEDs for visual feedback
- A servo motor that triggers the ball-launching mechanism

---

## 💻 How It Works

1. The ultrasonic sensor checks for distance ≥ 10 cm.
2. Green LED lights up if in range, red if too close.
3. When the button is pressed **and** the distance condition is met:
   - The servo motor rotates 90° to launch.
   - A buzzer sounds for 0.5 seconds.
   - The servo resets to its initial position.

---

## 📂 Project Structure

- `project.ino` – Contains the full Arduino logic
- `DMP.pdf` – Full project documentation and analysis (includes testing and future improvements)

---

## ▶️ How to Run the Project

You can run the project either on real hardware or through the Wokwi simulator:

### Option 1: Run on Physical Arduino Hardware

1. **Hardware Setup**:
   - Connect the HC-SR04 ultrasonic sensor, servo motor, two LEDs (with resistors), a buzzer, and a push button to an Arduino UNO on a breadboard as shown in the circuit diagram.
   
2. **Upload the Code**:
   - Open `project.ino` in the Arduino IDE.
   - Connect your Arduino UNO via USB.
   - Select the correct COM port and board type from **Tools**.
   - Click **Upload** to flash the code to the board.

3. **Power and Test**:
   - Power on the board and test interaction using your hand or pet.

### Option 2: Run in Wokwi Simulator

1. Visit: [https://wokwi.com](https://wokwi.com)
2. Click “Start New Project” and choose **Arduino UNO**.
3. Replace the default code with the contents of `project.ino`.
4. Simulate the circuit by connecting components virtually using the GUI.
5. Click the green **Start** button to run the simulation and test the logic.

---

## 📝 Conclusion

The Ball Throwing Device for Animals offers an accessible and creative way to blend pet care with embedded systems. With visual and auditory feedback, physical interactivity, and clear expansion potential (e.g., camera, mobile app, or IoT capabilities), this project demonstrates how simple electronics and microcontrollers can enrich animal behavior and play.
