[Github](https://github.com/Rudra0Panda/Esp32-HomeAutomation.git)
# Project Overview

 This project is an **ESP32-based Home Automation System** that enables remote monitoring and control of household appliances through Wi-Fi. Using the ESP32’s built-in wireless connectivity, the system allows users to switch devices on/off, adjust settings (such as fan speed or light brightness), and monitor real-time status from a smartphone or computer. It integrates hardware control with a web interface for a seamless smart home experience

 In today’s fast-paced lifestyle, managing home appliances efficiently and remotely is a growing need. Traditional switches require physical access and cannot provide automation or scheduling features. This project addresses these limitations by offering:

- **Remote Access** – Control appliances from anywhere via the internet.
- **Energy Efficiency** – Automate usage schedules to reduce power wastage.
- **Convenience & Comfort** – Operate multiple devices from a single interface without moving around.
- **Scalability** – Easily expandable to support more appliances and integrate with voice assistants or IoT platforms.
# Key Objectives
- **Enable remote control of appliances** via Wi-Fi using a web interface .
- **Provide real-time device status monitoring** to know if an appliance is ON or OFF at any moment.
- **Implement scheduling and automation** so devices can turn ON/OFF automatically at set times.
- **Make the system modular and scalable** so more appliances or sensors can be added easily in the future.
# Key Applications and Beneficiaries
- **Homeowners** – For controlling lights, fans, and appliances remotely, improving comfort and energy savings.
- **Elderly or differently-abled individuals** – Provides easier appliance control without physical effort.
- **Office spaces** – Automates lighting, AC, and other electrical equipment to reduce operational costs.
- **Hotels and hospitality industry** – Smart room control systems for guests to enhance convenience.
- **Rental properties & Airbnb hosts** – Remotely manage and monitor appliances to ensure security and reduce wastage.
# Scope of the Project
#### **What this project will do:**
- Allow users to control appliances (e.g., lights, fans, plugs) remotely via Wi-Fi.
- Provide a web interface or mobile app for real-time monitoring and control.
- Implement scheduling for automatic device operation at specified times.
- Support modular expansion to add more devices and sensors (e.g., temperature, motion).
- Enable basic security measures such as password-protected access.
#### **What this project will not do:**
- Operate without an active Wi-Fi connection or network setup.
- Provide complex AI-based decision-making (e.g., learning user habits).
- Control appliances that require specialized industrial-grade hardware without additional components.
- Replace professional-grade building automation systems in large-scale commercial setups.
#### **Boundaries:**
- Designed primarily for small to medium-scale residential or office setups.
- Limited to devices operating within safe household voltage and current ratings.
- Does not include cloud-based storage unless explicitly integrated.
# Electronic Components Used

| Name                                                                                                                                                                                                                                                                                                                                                                                                                             | Quantity | Price |
| -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | -------- | ----- |
| [ESP32](https://quartzcomponents.com/products/esp32-30-pin-development-board-with-wi-fi-and-bluetooth?_pos=1&_sid=629965c22&_ss=r)                                                                                                                                                                                                                                                                                               | 1        | 295   |
| [Solid State Relay](https://quartzcomponents.com/products/5v-10a-relay-module?_pos=5&_sid=07ebed100&_ss=r)                                                                                                                                                                                                                                                                                                                       | 4        | 132   |
| [NPN BJT](https://quartzcomponents.com/products/bc547-npn-amplifier-transistor?_pos=1&_sid=a580b078e&_ss=r)                                                                                                                                                                                                                                                                                                                      | 4        | 12    |
| [10k Resistor](https://quartzcomponents.com/products/10k-ohm-1-4-watt-resistor?_pos=1&_sid=43cdb72ab&_ss=r)                                                                                                                                                                                                                                                                                                                      | 10       | 5     |
| [5v Smps](https://quartzcomponents.com/products/5v-2a-circuit-switch-power-supply-module-smps-pcb?variant=43022969897194&country=IN&currency=INR&utm_medium=product_sync&utm_source=google&utm_content=sag_organic&utm_campaign=sag_organic?utm_source=google&utm_medium=FreeListings&gad_source=1&gad_campaignid=20393598841&gclid=CjwKCAjw49vEBhAVEiwADnMbbPhtFwHWs0B4J9r0NMt19k0M0Q44pDPcF4oYpHaJwK9wTuHuyI-6FhoC3SQQAvD_BwE) | 1        | 78    |
| 220V Mains                                                                                                                                                                                                                                                                                                                                                                                                                       | -        | -     |
| [PVC Extension Board]()                                                                                                                                                                                                                                                                                                                                                                                                          | 1        | 200   |
| [RTC clock module](https://quartzcomponents.com/products/ds1307-real-time-clock?variant=31898098598023&country=IN&currency=INR&utm_medium=product_sync&utm_source=google&utm_content=sag_organic&utm_campaign=sag_organic?utm_source=google&utm_medium=FreeListings&gad_source=1&gad_campaignid=20393598841&gclid=CjwKCAjw49vEBhAVEiwADnMbbGbdxvezoo76u_92wVOnL9d1A0BCRZX9z6IxRHcMYwLFXV8RjdEb2xoCoIAQAvD_BwE)                   | 1        | 39    |
| [1S BMS](https://quartzcomponents.com/products/tp4056-battery-charging-protection-module-type-c?_pos=1&_sid=e9ca3fd5c&_ss=r)                                                                                                                                                                                                                                                                                                     | 1        | 16    |
| [LDR](https://quartzcomponents.com/products/ldr-light-dependent-resistor-5mm?_pos=1&_sid=fd63013ee&_ss=r)                                                                                                                                                                                                                                                                                                                        | 1        | 5     |
| [Bread Board](https://quartzcomponents.com/products/colored-breadboard-mb-102-830-point?variant=32394716151943&country=IN&currency=INR&utm_medium=product_sync&utm_source=google&utm_content=sag_organic&utm_campaign=sag_organic?utm_source=google&utm_medium=FreeListings&gad_source=1&gad_campaignid=20393598841&gclid=CjwKCAjw49vEBhAVEiwADnMbbBIeHiiZi2v8Vqe9di83JjJaM6Vr3Tf4yxwMx6OPqKcv1l8YcXvlnRoCC-wQAvD_BwE)           | 2        | 108   |
| [Lithium ion Battery](https://quartzcomponents.com/products/18650-li-ion-2500mah-rechargeable-battery?_pos=2&_sid=698157919&_ss=r)                                                                                                                                                                                                                                                                                               | 1        | 49    |
| [Jumper](https://quartzcomponents.com/products/jumper-wire-combo-m-to-m-m-to-f-f-to-f?_pos=10&_sid=a428c3ff3&_ss=r)                                                                                                                                                                                                                                                                                                              | 1        | 43    |
| [2 Pin Spst Switch](https://quartzcomponents.com/products/2-pin-spst-on-off-mini-rocker-switch-2a-250v?pr_prod_strat=e5_desc&pr_rec_id=132a7ef8e&pr_rec_pid=6922717593784&pr_ref_pid=4491695194247&pr_seq=uniform)                                                                                                                                                                                                               | 4        | 32    |
| Total Cost                                                                                                                                                                                                                                                                                                                                                                                                                       |          | 1014  |

**1. ESP32**
- Dual-core microcontroller with integrated Wi-Fi and Bluetooth for IoT applications.
- Can run multiple tasks simultaneously, making it ideal for automation.
- Supports numerous GPIO pins, ADC/DAC, PWM, and communication protocols like I²C, SPI, UART.
**2. Solid State Relay**
- Switches AC loads silently with no mechanical wear.
- Operated by a small DC voltage from the ESP32, isolating low and high voltage.
- Faster switching than mechanical relays, ideal for frequent operations.
**3. NPN BJT **
- Acts as an electronic switch or amplifier.
- Allows ESP32’s low-current GPIO to control higher-current devices.
- Commonly used in relay driver circuits with a flyback diode.
**4. 10kΩ Resistor**
- Standard resistor value used for pull-up and pull-down configurations.
- Stabilizes digital inputs to prevent false triggering.
- Can limit current in LED or sensor circuits.
**5. 5V SMPS** 
- Compact, high-efficiency AC-to-DC power converter.
- Delivers regulated 5V output for microcontroller and peripherals.
- Safer and cooler than traditional linear adapters.
**6. 220V Mains**
- Main AC power supply source for the system.
- Directly powers SMPS and high-voltage devices via relays.
- Requires proper insulation and safety measures.
**7. PVC Extension Board**
- Multiple socket board for connecting AC devices.
- Durable PVC body for electrical insulation.
- Serves as the load connection hub in the automation setup.
**8. RTC Clock Module**
- Keeps accurate time using an onboard crystal and battery backup.
- Works independently of ESP32’s power state.
- Used for scheduled tasks like switching lights at specific times.
**9. 1S BMS**
- Battery Management System for a single Li-ion cell.
- Prevents overcharging, deep discharge, and short circuits.
- Extends battery lifespan and ensures safety.
**10. LDR**
- Resistance changes based on light intensity.
- Used for light-sensitive switching, e.g., turning lights on at night.
- Simple, low-cost sensor with easy interfacing.
**11. Breadboard**
- Allows solderless and reusable circuit assembly.
- Helpful for quick prototyping and testing connections.
- Supports both power rails and signal distribution.
**12. Lithium-ion Battery**
- Rechargeable power source with high energy density.
- Suitable for backup or portable operation of the ESP32.
- Works with BMS for safe charging and discharging.
**13. Jumper Wires**
- Flexible connectors for breadboard and module wiring.
- Available in male-to-male, male-to-female, and female-to-female types.
- Reusable and ideal for temporary connections.
**14. 2-Pin SPST Switch**
- Single Pole Single Throw — basic ON/OFF switch.
- Can control power flow or act as a manual trigger.
- Compact, easy to mount in enclosures.

# Structural Components

| Name         | Cost |
| ------------ | ---- |
| PVC  Encoser | 200  |

# Software and Tools Used
**1. PlatformIO / Arduino IDE**
- Software tools for writing, compiling, and uploading code to the ESP8266.
- **PlatformIO** is integrated into VS Code with advanced project management; **Arduino IDE** is beginner-friendly.
**2. ESPAsyncTCP**
- Asynchronous TCP library for ESP8266 that allows multiple network operations without blocking the main loop.
**3. ESPAsyncWebServer**
- A non-blocking web server library that works with ESPAsyncTCP.
- Handles multiple HTTP requests at once, making the web interface responsive.
**4. ESP8266WiFi**
- Official library to connect the ESP8266 to a Wi-Fi network as a client or create its own hotspot (Access Point).
**5. HTML / CSS / JavaScript**
- Front-end web technologies to design and control the ESP8266 interface.
- **HTML** structures the page, **CSS** styles it, and **JavaScript** handles button actions and network requests.
**6. LittleFS**
- Flash storage system for ESP8266 to store files like HTML, CSS, JS, or configuration data.
- Replaces the older SPIFFS file system.
**7. mDNS (Multicast DNS)**
- Lets you access the ESP8266 using a hostname like `http://esp8266.local` instead of typing its IP address.
- Makes it easier to connect without needing to check the serial monitor for the IP.
**8. Real-Time Monitoring** _(Optional Feature)_
- Uses **WebSocket** or **AJAX** to send instant feedback from the ESP8266 to the user interface, showing device status (ON/OFF) in real time.
- Can also display sensor data such as temperature, current consumption, or light levels.
**9. Scheduling and Automation** _(Optional Feature)_
- Uses an external **RTC (Real-Time Clock)** module for accurate timekeeping, even during power outages.
- Allows the system to automatically turn devices ON/OFF at user-defined times.
- Automation can also be triggered by conditions such as sensor readings.
10.**Wokwi Simulator**
- Simulates ESP32 circuits and code before deploying to actual hardware
11.**Github**
- Stores project code and enables version control for collaboratio.
### **Pseudo Code**

1. **Import Required Libraries**
    - Include Arduino core
    - Include ESPAsyncTCP, ESPAsyncWebServer, and ESP8266WiFi libraries
2. **Define Variables**
    - `ledArr[]` → Array containing GPIO numbers for LEDs
    - `server` → Async web server object running on port 80
    - `ssid` & `pass` → Wi-Fi credentials
    - `index_html` → HTML page stored in program memory (contains LED control buttons)
3. **Setup Function**
    1. Start serial communication at 115200 baud.
    2. Connect to Wi-Fi using `WiFi.begin(ssid, pass)`.
    3. Wait until Wi-Fi is connected:
        - Print `"Connecting"` and show dots until connected.
        - When connected, print `"Connected!"` and show device IP address.
    4. Initialize each LED pin in `ledArr`:
        - Set pin mode to **OUTPUT**.
        - Set initial state to **LOW** (off).
    5. Define HTTP routes:
        - **Route `/` (root)** → Send `index_html` page.
        - **Route `/led`** →
            - If `ledNo` and `state` parameters exist:
                - Convert them to integers.
                - If LED number is valid (0–3):
                    - Update LED state using `digitalWrite()`.
                    - Print status to Serial.
                    - Respond `"LED updated"`.
                - Else respond with `"Invalid LED number"`.
            - If parameters are missing, respond with `"Missing parameters"`.
    6. Start the web server.
4. **Loop Function**
    - No code (asynchronous server handles requests in the background).


# Working Principle 
##### 1 . Initialization 
When powered on, the ESP32 initializes its GPIO pins for controlling relays and reading sensors (if any). It loads saved configurations (Wi-Fi credentials, schedules, device states) from EEPROM or onboard file storage.
##### 2. Wi-Fi Connection
The ESP32 connects to the home Wi-Fi network using stored credentials. If credentials are unavailable, it can start in Access Point (AP) Mode to let the user input network details.
##### 3. Web Server Setup
Using the ESPAsyncWebServer library, the ESP32 hosts a web-based control panel. HTML, CSS, and JavaScript files are served to the user’s browser, providing buttons, sliders, and status displays. REST API or WebSocket endpoints are created for sending and receiving control commands in real-time.
##### 4 .User Control
The user accesses the control panel through a browser on a smartphone or computer. By pressing buttons or adjusting sliders, the user sends commands to the ESP32 over Wi-Fi.
##### 5.Relay Switching
Upon receiving a control signal, the ESP32 toggles the corresponding GPIO pin, activating or deactivating the connected relay. The relay switches the household appliance ON or OFF.
##### 6.Real-Time Monitoring
Using WebSocket or AJAX, the ESP32 sends instant feedback to the user interface, showing whether a device is ON or OFF. Sensors (optional) can provide extra data like temperature, current consumption, or light levels.
##### 7. Scheduling and Automation
The ESP32 uses an external RTC (Real-Time Clock) module for accurate timekeeping, even during power outages. Based on the schedules set by the user, the system automatically turns devices ON or OFF at specified times. Conditions such as sensor readings can also trigger automated actions.
##### 8. Data Storage
Settings, schedules, and device states are stored in EEPROM or onboard storage (LittleFS/SPIFFS) so they persist after power loss.
##### 9. Safety and Security
Direct relay control is used without opto-couplers, with proper wiring precautions to ensure safety.
# CAD Diagrams

![CAD Diagram 1](https://raw.githubusercontent.com/Rudra0Panda/Esp32-HomeAutomation/main/IMG-20250810-WA0016.jpg)
![CAD Diagram 2](https://raw.githubusercontent.com/Rudra0Panda/Esp32-HomeAutomation/main/IMG-20250810-WA0017.jpg)
# Circuit Diagrams

![Circuit Diagram 1](https://raw.githubusercontent.com/Rudra0Panda/Esp32-HomeAutomation/main/Pasted%20image%2020250810105954.png)
![Circuit Diagram 2](https://raw.githubusercontent.com/Rudra0Panda/Esp32-HomeAutomation/main/Pasted%20image%2020250810110213.png)

# Conclusion
Our team successfully accomplished the goals of the ESP32 Home Automation project by creating a system that offers seamless remote control, instant status monitoring, and automated scheduling to promote energy efficiency. The modular and scalable architecture ensures adaptability for future upgrades and the integration of additional devices or sensors. This project was a complete learning journey—strengthening our expertise in IoT hardware–software integration, web interface development, and network troubleshooting. Most importantly, it enhanced our team collaboration, problem-solving mindset, and real-world project execution skills, preparing us to take on more advanced and impactful IoT innovations in the future.
