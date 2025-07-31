# 🚦 Traffic Light Control System using 8051 Timer Interrupts

This mini-project demonstrates a basic **traffic light control system** using the **8051 microcontroller**, written in **Embedded C** and simulated using **Keil uVision + Proteus**. The key focus is on the use of **Timer Interrupts (ISR)** for efficient real-time operation.

---

## 📌 Features
- Timer0 used in Mode 1 (16-bit) for timed interrupts
- Traffic lights (RED, YELLOW, GREEN) controlled with precise delays
- **Interrupt Service Routine (ISR)** allows non-blocking timing — the main program remains free for other tasks
- Designed and tested in **Keil + Proteus environment**

---

## ⚡ Why ISRs Matter

Implementing ISRs allowed me to:
- **Avoid delay-based blocking**
- **Handle time-based events asynchronously**
- **Build scalable, real-time embedded systems**

This reflects how **interrupts are crucial** in systems like automotive controllers, IoT devices, and industrial automation.

---

## 🔧 Tools Used
- **Microcontroller**: AT89C51 (8051)
- **IDE**: Keil uVision5
- **Simulator**: Proteus 8
- **Language**: Embedded C

---



---

## 🎯 What I Learned
- Practical application of Timer Interrupts (ISR)
- Real-time logic implementation in embedded systems
- Circuit and firmware-level debugging

---

Feel free to fork this repo, test it, or build your own logic on top of it!

