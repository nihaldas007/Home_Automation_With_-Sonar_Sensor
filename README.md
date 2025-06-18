
# 🚪 Smart Room Light Control with People Counter (Using Two Ultrasonic Sensors)

This Arduino-based project uses **two ultrasonic sensors** to detect people entering and exiting a room. It keeps a **count of the number of people** currently inside and controls a **relay module** to automatically turn the light **on/off** based on occupancy.

---

## 🎯 Features

- Automatically turns **ON** the light when someone enters the room  
- Turns **OFF** the light when the room becomes empty  
- **Counts the number of people** in the room in real-time  
- Works with **two ultrasonic sensors** for directional entry/exit detection  
- Uses **relay** to control light/appliance  
- Can be powered with Arduino Uno, Nano, or any compatible board

---

## 🧰 Components Used

| Component               | Quantity |
|-------------------------|----------|
| Arduino Nano/Uno        | 1        |
| HC-SR04 Ultrasonic Sensor | 2        |
| Relay Module (1-channel)| 1        |
| LED/Bulb (or appliance) | 1        |
| Jumper Wires            | As needed |
| Power Supply (5V)       | 1        |

---

## 🔌 Wiring Diagram

| Arduino Pin | Connected To         |
|-------------|----------------------|
| D2          | Trigger (Sensor 1)   |
| D3          | Echo (Sensor 1)      |
| D4          | Trigger (Sensor 2)   |
| D5          | Echo (Sensor 2)      |
| D6          | Relay IN             |
| 5V          | VCC (Sensors & Relay)|
| GND         | GND (Sensors & Relay)|

> ⚠️ Use proper power for the relay module (especially for high-voltage control).

---

## ⚙️ How It Works

- **Sensor 1 and Sensor 2** are placed at the door.
- If **Sensor 1 triggers before Sensor 2**, it means someone entered → counter++
- If **Sensor 2 triggers before Sensor 1**, someone exited → counter--
- If counter > 0 → Light ON (via relay)
- If counter == 0 → Light OFF

---

## 📷 Demo Images

![Sensor Setup](images/setup.jpg)
![Working Demo](images/demo.jpg)

## 🧠 Improvements You Can Add

* Use **LCD/OLED display** to show people count
* Add **IR Sensors** instead of sonar for better precision
* Display data on **web (ESP8266/ESP32)** or log to SD card
* Add **time-based auto turn-off** feature

## 🤝 Contributions

Pull requests and ideas for improvement are welcome!

