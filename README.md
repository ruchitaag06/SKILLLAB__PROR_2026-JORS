# SKILL LAB PRATICAL HACKATHON

## Final Project README

> **Project Weight:** 100%  
> **Team Size:** 4/3 students  
> **Project Duration:** 8 hours  
> **Total Time Available:** 32 effort-hours per team  
> **Project Type:** Playful, interactive, technology-based experience

---

# Before you begin

## Fork and rename this repository

After forking this repository, rename it using the format:

`SKILLLAB_PROR-2026-TeamName`

### Example

`SKILLLAB_PROR-2026-AuroWizards`

Do not keep the default repository name.

---

# How to use this README

This file is your team’s **working project document**.

You must keep updating it throughout the build period.  
By the final review, this README should clearly show:

- your idea,
- your planning,
- your design decisions,
- your technical process,
- your build progress,
- your testing,
- your failures and changes,
- your final outcome.

## Rules

- Fill every section.
- Do not delete headings.
- If something does not apply, write `Not applicable` and explain why.
- Add images, screenshots, sketches, links, and videos wherever useful.
- Update task status and weekly logs regularly.
- Use this file as evidence of process, not only as a final report.

---

# 1. Team Identity

## 1.1 Studio / Group Name

`JORS`
<img width="1600" height="1131" alt="image" src="https://github.com/ruchitaag06/SKILLLAB__PROR_2026-JORS/blob/main/images/Group_photo.jpeg" />
## 1.2 Team Members

| Name           | Primary Role                    | Secondary Role | Strengths Brought to the Project |
| -------------- | ------------------------------- | -------------- | -------------------------------- |
| `RUCHITA GAURI` | `[DOCUMENTATION ]` | `[HARDWARE]`  | `Documentation, Material Handling `|
| `SURABHI KARADE PATIL`| `[RESEARCH]`   | `[HARDWARE]`     | `Material Handling, Hardware`    |
| `JAY HUMBE`| `[HARDWARE]`   | `[Coding]`     | `Material Handling, Hardware`    |
| `OMKAR KHARTUDE`| `[PRODUCT DESIGNING]`   | `[DOCUMENTATION]`     | `Material Handling, Hardware`    |
## 1.3 Project Title

`"Meet JORVIS: Semaphore Memory Beast"`

## 🎥 Project Demo

Click the image below to watch the demo:

[![Demo Video](https://img.youtube.com/vi/f1uIiO5Aa-Y/0.jpg)](https://youtu.be/f1uIiO5Aa-Y)

<img width="1600" height="1131" alt="image" src="https://github.com/ruchitaag06/SKILLLAB__PROR_2026-JORS/blob/main/images/GROUP%20NAME.png"/>

## 1.4 One-Line Pitch

`A quirky blob creature that talks using semaphore flag arms.Watch its movements, remember the sequence, guess the word, and enjoy its silly happy dance when you get it right!`

## 1.5 Expanded Project Idea

In 1–2 paragraphs, explain:

- what your project is,
- what kind of experience it creates,
- what technologies are involved.

**Response:**  
`JORVIS is a quirky little blob creature that communicates using real semaphore flag signals (used in ship to ship communication) with its arms. It raises its two flapping hands to show different semaphore positions that spell out a hidden word. After showing the full sequence once, it asks you to guess the word by showing a few options on the LCD. You have to watch the arm movements carefully, remember the sequence of flag positions, and select the correct answer using the joystick. If you guess right, the creature gets super excited and does a happy dance with its body wiggling and arms flapping around. If you guess wrong, it looks sad and droops its arms slowly while the two LEDs blink red.
This project works as a fun memory game. You need to observe the arm positions, remember the order, and think to figure out the word. It feels like playing with a silly, dramatic friend who only knows how to talk with flags. The moving arms and simple reactions make it strange but enjoyable to play and watch.
Technologies involved:
It runs on the Shrike Lite microcontroller and uses four SG90 servo motors two to move the shoulder. A joystick lets you select answers on the LCD. Two LEDs blink to show if your answer is correct or wrong. The creature’s body and arms are made from cardboard panels.`

---

# 2. Philosophy Fit

## 2.1 Experience, Not Social Problem

This module does **not** require your project to solve a large social problem.

You are allowed to build:

- toys,
- games,
- interactive objects,
- playful machines,
- kinetic artifacts,
- humorous devices,
- strange but delightful experiences,
- things that are entertaining to use or watch.



# 3. Inspiration

## 3.1 References

List what inspired the project.

| Source Type | Title / Link                                                        | What Inspired You                                                                         |
| ----------- | ------------------------------------------------------------------- | ----------------------------------------------------------------------------------------- |
| `[WIKIPEDIA]`   | `(https://en.wikipedia.org/wiki/Flag_semaphore#:~:text=Contemporary%20semaphore%20flag%20system,-For%20history%2C%20see&text=The%20current%20flag%20semaphore%20system,make%20the%20characters%20more%20obvious)` | `inspired by transforming the traditional semaphore flag signaling system (used in ship to ship communication) into a playful, expressive robotic creature that communicates through movement and challenges users to decode its messages. + educational experiences` |
|             |                                                                     |                                                                                           |
|             |                                                                     |                                                                                           |

## 3.2 Original Twist

What makes your project original?

**Our project is original because it transforms the traditional *semaphore flag signaling* into an interactive memory game, where players must observe, decode, and interpret physical arm movements instead of relying on screens or text.**  


---

# 4. Project Intent

## 4.1 User Journey 

**The arms begin to move slowly. One lifts up while the other turns to the side, then both shift into a new position. Each movement is held just long enough to notice, forming a clear sequence that the user can follow and remember.
Once the sequence ends, the screen shows a few word options. The user thinks back to the movements and tries to understand what the creature was saying.
Using the joystick, they move through the options and choose an answer.
If the answer is correct, the arms move quickly and playfully, almost like a small celebration, while the lights blink brightly. If the answer is wrong, the arms gently lower and the lights blink slowly, giving a softer, quieter response.
Soon, the arms lift again, ready to show a new sequence, and the user watches more carefully this time.**

---

# 5. Definition of Success

## 5.1 Definition of “Usable”



## 5.2 Minimum Usable Version

What is the smallest version of this project that still delivers the core experience?

**Response:The smallest version would keep just what’s needed for the **core idea: watch, remember, guess**.

* *1–2 SG90 servos* → to show simple arm positions (even one arm is enough if movements are clear)
* *Joystick* → to select answers
* *LCD display* → to show options

No extra sensors, no complex body, just a simple structure to hold the servo(s).

In this version, the creature shows a short sequence of positions, the user remembers it, and then selects the correct word from the screen. You still get the main experience of observing, thinking, and guessing, just with fewer movements and simpler hardware.
**  


## 5.3 Stretch Features

What features are nice to have but not essential?
 LEDs – add visual feedback, but the display itself already shows correct or wrong

---

# 6. System Overview

## 6.1 Project Type

Check all that apply.

- [x] Electronics-based

- [ ] Mechanical

- [ ] Sensor-based

- [ ] App-connected

- [x] Motorized

- [ ] Sound-based

- [ ] Light-based

- [ ] Screen/UI-based

- [x] Fabricated structure
- [x] Game logic based

- [ ] Installation

- [ ] Other:

## 6.2 High-Level System Description

Explain how the system works in simple terms.

**The system works in a simple and interactive way. The user gives input using a joystick, which is used to scroll through options on the LCD screen and select an answer. The Shrike Lite microcontroller acts as the brain of the system. It controls the servo motors to move the arms in specific positions to display a sequence, stores the correct answer, reads the user’s input from the joystick, and compares it with the correct response.**

**The output is shown through multiple components. The servo motors move the arms to form semaphore positions, the LCD displays the answer choices and basic game information, and the LEDs provide clear feedback by indicating whether the answer is correct or wrong. The physical structure is made using lightweight materials like cardboard or acrylic, with the servos mounted as arms to give it a creature-like form. There is no app involved in this system, as all interaction happens directly through the hardware.**

## 6.3 Input / Output Map

| System Part            | Type                  | What It Does                                                             |
| ---------------------- | --------------------- | ------------------------------------------------------------------------ |
| Joystick               | Input                 | Allows the user to navigate through options and select an answer         |
| Shrike Lite (RP2040)   | Processing            | Executes game logic, reads input, controls servos, and evaluates answers |
| SG90 Servo Motors (×4) | Output                | Move the arms to display semaphore-based gestures                        |
| LCD Display            | Output                | Shows answer options and game messages                                   |
| LEDs (×2)              | Output                | Provide feedback for correct (green) and wrong (red) answers             |
| Physical Structure     | Mechanical/Structural | Holds all components together and forms the body of JORVIS               |


---

# 7. Sketches and Visual Planning

## 7.1 Concept Sketch



## 7.2 Labeled Build Sketch

Add a sketch with labels showing:

- structure,
- electronics placement,
- user touch points,
- moving parts,
- output elements.

**Insert image below:**  
`[Upload image and link here]`
<img width="1600" height="1131" alt="image" src="https://github.com/ruchitaag06/SKILLLAB__PROR_2026-JORS/blob/main/images/Jorvis_design.jpeg"/>

## 7.3 Approximate Dimensions

| Dimension        | Value   |
| ---------------- | ------- |
| Length           | `15 cm` |
| Width            | `10 cm` |
| Height           | `15cm`  |
| Estimated weight | `approx 300 g` |

---

# 8. Electronics Planning

## 8.1 Electronics Used

| Component                   | Quantity | Purpose                                   |
| --------------------------- | -------: | ----------------------------------------- |
| Shrike Lite (RP2040)        |        1 | Main controller for logic and control     |
| SG90 Servo Motors           |        2| Move arms to create semaphore positions   |
| Joystick Module             |        1 | User input for selecting answers          |
| 16×2 LCD (I2C)              |        1 | Display options and game information      |
| LEDs                        |        2 | Indicate correct or wrong answer          |
| Breadboard & Wires          |    1 set | Connections and prototyping               |
| Cardboard Structure |        1 | Physical body and mounting for components |


## 8.2 Wiring Plan

Describe the main electrical connections.

**Response:**  
The Shrike Lite (RP2040) acts as the central controller, interfacing with all components. 
The I2C LCD is connected via SDA to GPIO 8 and SCL to GPIO 9, with power supplied through VCC (3.3V/5V depending on the module) and GND. 
The joystick module is used for user input, where VRx and VRy are connected to GPIO 26 and GPIO 27 (analog inputs), and the switch (SW) is connected to GPIO 15 using an internal pull-up resistor.
Two servo motors control the semaphore arm movements. 
The left servo signal is connected to GPIO 5 and the right servo to GPIO 6. Both servos are powered using an external 5V supply, with their ground connected to the system’s common ground.
Additionally, a green LED is connected to GPIO 14 and a red LED to GPIO 11, which blink to indicate correct and incorrect answers respectively.
All components share a common ground to ensure stable operation, while the microcontroller processes inputs and controls outputs, displaying signals via servos and user interaction through the LCD and joystick.

## 8.3 Circuit Diagram

Insert a hand-drawn or software-made circuit diagram.

**Insert image below:**  
`[Upload image and link here]`
<img width="867" height="1156" alt="" src="https://github.com/ruchitaag06/SKILLLAB__PROR_2026-JORS/blob/main/images/Jorvis_schematic.jpeg" />


# 9. | Question         | Response                                                                                                           |
| ---------------- | ------------------------------------------------------------------------------------------------------------------ |
| Power source     | `Laptop USB power (5V)`                                                                                            |
| Voltage required | `5V from USB for Shrike Lite and SG90 servos (3.3V logic handled internally)`                                      |
| Current concerns | `Limited USB current can cause slight jitter and less accurate servo angles when multiple servos move`             |
| Safety concerns  | `Avoid moving all servos at once, ensure proper wiring, and prevent short circuits to protect the laptop USB port` |


---

# 10. Software Planning

## 10.1 Software Tools

| Tool / Platform      | Purpose                                       |
| -------------------- | --------------------------------------------- |
| Arduino IDE          | Write and upload code to Shrike Lite (RP2040) |
| Embedded C/C++       | Program logic for servo control and game flow |
| LCD Library LiquidCrystal_I2C.h         | Control and display text on the LCD screen    |
| Servo Library Servo.h      | Control SG90 servo movements using PWM        |


## 10.2 Software Logic

Describe what the code must do.

Include:

- startup behavior,
- input handling,
- sensor reading,
- decision logic,
- output behavior,
- communication logic,
- reset behavior.

**Response:**  
`

The code begins with a startup sequence where the system initializes the I2C communication, LCD display, servo motors, joystick input, and LEDs. The servos are set to a neutral position, and a welcome message is shown on the LCD. A random correct answer is selected from a predefined list of words. After this, the system performs a short demonstration where the servo arms move in specific positions to simulate semaphore signals, prompting the user to observe carefully.

For input handling, the system continuously reads the joystick values. The vertical movement of the joystick is used to scroll through answer options displayed on the LCD, while the joystick button is used to select an option. A small logic is used to prevent repeated scrolling when the joystick is held in one direction.

There are no external sensors in this system, but the joystick acts as the primary input device whose analog and digital signals are read by the microcontroller.

The decision logic compares the user’s selected option with the randomly chosen correct answer. Based on this comparison, the system decides whether the response is correct or incorrect.

For output behavior, the servo motors move to create arm positions for the initial semaphore demonstration. After selection, if the answer is correct, the servos perform a quick celebratory movement and the green LED turns on. If the answer is wrong, the servos move into a drooping position and the red LED turns on. The LCD also displays “CORRECT!” or “WRONG :(” accordingly.

There is no external communication logic such as WiFi or Bluetooth, as the entire system operates locally using onboard inputs and outputs.

After the user makes a selection, the system enters a stopped state using an infinite loop, meaning it does not reset or continue automatically. A manual reset or restart is required to run the program again.

## 10.3 Code Flowchart

Insert a flowchart showing your code logic.

Suggested sequence:

- start,
- initialize,
- wait for input,
- read input,
- decision,
- trigger output,
- repeat or reset,
- error handling.

**Insert image below:**  
<img width="1600" height="1200" alt="image" src="" />
<img width="1600" height="1200" alt="image" src="" />




# 11. Bill of Materials

## 11.1 Full BOM

| Item                             | Quantity | In Kit? | Need to Buy? | Estimated Cost | Material / Spec               | Why This Choice?          |
| -------------------------------- | --------:| ------- | ------------ | --------------:| ----------------------------- | ------------------------- |
| `[SHRIKE LITE]`                        | `1`      | `yes`   | `no`         | `369`            | `38 Pin SHRIKE LITE`                | `[To control components]` |
| `[SERVO MOTORS]`                 | `[2]`    | `[yes]` | `[no]`       | `199`            | `[5V micro servos, ~180° rotation, lightweight]`                     | `[Move the arms to create semaphore positions]`  |
| `[JOYSTICK]`          | `[1]`    | `[yes]`  | `[No]`      | `[39]`        | `[Analog X/Y outputs + digital switch for navigation and selection]` | `[Lets the user navigate and select answers]`    |
| `[LCD Display]`               | `[1]`    | `[yes]`  | `[No]`      | `200]`         | `Low-pin interface, displays text for options and feedback`                              |      `Shows answer options and game information`                     |
| `[LED]` | `[2]`    | `[yes]`  | `[no]`      | `[6]`        | `Low-power visual indicators (with current-limiting resistors)`                              |  `Indicate correct (happy) or wrong (sad) responses visually`                      |

## 11.2 Material Justification

**Response:** 
We selected the Shrike Lite (RP2040) as the main controller because it is compact, fast, and has enough GPIO pins to control multiple servos, the LCD, and the joystick at the same time. It is also beginner-friendly and stable for rapid prototyping.

We used SG90 Micro Servo Motor because they are lightweight, low-cost, and easy to control using PWM signals. This was important since the project involves visible arm movements, and heavier motors would make the structure unstable and harder to build within limited time.

The joystick module was chosen as the main input device because it provides an intuitive way for users to navigate options and make selections, making the game feel interactive without needing complex controls.

The 16×2 LCD display was used to clearly show answer options and game prompts. It is simple, low-power, and sufficient for displaying short text-based choices needed for the memory game.

We included LEDs for quick visual feedback. Green and red indicators make it immediately clear whether the user’s answer is correct or wrong, enhancing the game experience without adding complexity.

Finally, lightweight materials like cardboard or acrylic were selected for the body structure because they are easy to laser-cut, assemble quickly, and keep the servo load low, which is important for maintaining stable movement.


## 11.3 Items You chose
| Item                     | Why Needed                                    | Purchase Link | Latest Safe Date to Procure | Status     |
| ------------------------ | --------------------------------------------- | ------------- | --------------------------- | ---------- |
| `Shrike Lite (RP2040)`   | `Main controller for logic and motor control` | `robu.in`     | `Day 1`                     | `Received` |
| `SG90 Servo Motors (x4)` | `Move arms for semaphore display`             | `robu.in`     | `Day 1`                     | `Received` |
| `Joystick Module`        | `User input for selecting answers`            | `local store` | `Day 1`                     | `Received` |
| `16×2 LCD (I2C)`         | `Display options and game messages`           | `robu.in`     | `Day 1`                     | `Received` |
| `LEDs (Red + Green)`     | `Correct / wrong feedback indication`         | `local store` | `Day 1`                     | `Received` |
| `Breadboard + Wires`     | `Circuit connections and prototyping`         | `local store` | `Day 1`                     | `Received` |
| `Cardboard / Acrylic`    | `Structure for creature body`                 | `local store` | `Day 1`                     | `Received` |


## 11.4 Budget Summary

| Budget Item            | Estimated Cost |
| ---------------------- | -------------: |
| Shrike Lite (RP2040)   |            400 |
| SG90 Servo Motors (x2) |            200 |
| Joystick Module        |             80 |
| 16×2 LCD (I2C)         |            150 |
| LEDs (Red + Green)     |             20 |
| Breadboard + Wires     |            100 |
| Cardboard / Acrylic    |  0 (Available) |
| Contingency            |            300 |
| **Total**              |       **1250** |

## 11.5 Budget Reflection

If your cost is too high, what can be simplified, removed, substituted, or shared?

**Response:**  

---

# 12. Planning the Work

## 12.1 Team Working Agreement

Task Division: Work is divided into four main areas: documentation and presentation, research and ideation, hardware implementation, and software development. Each member takes primary ownership of one area while assisting others during integration and testing phases.
Decision Making: All major design and implementation decisions are made collectively. Quick decisions during development are handled through group discussion and consensus to avoid delays, especially during hardware testing phases.
Progress Tracking: Progress is tracked through regular check-ins during work sessions. The team reviews completed tasks, current blockers, and next steps at fixed intervals to ensure alignment.
Handling Delays: If a task is delayed, other members temporarily support or redistribute workload to ensure the overall project timeline is not affected. Priority is given to maintaining system integration rather than individual task completion.
Documentation Maintenance: Documentation is maintained collaboratively. One member updates the main document, while others provide inputs after completing their respective tasks. All changes are reviewed by the group to ensure accuracy and consistency.

**Response:**  


## 12.2 Task Breakdown

| Task ID | Task                                            | Owner      | Estimated Hours | Phase Timing | Dependency | Status |
| ------- | ----------------------------------------------- | ---------- | --------------- | ------------ | ---------- | ------ |
| T1      | Ideation & Concept Finalization                 | All        | 1               | Hour 1       | None       | Done   |
| T2      | Core Implementation (Hardware + Software Setup) | Jay + Team | 3               | Hours 2–4    | T1         | Done   |
| T3      | Documentation (Report writing)                  | Ruchita    | 4 (parallel)    | Hours 2–6    | T1         | Done   |
| T4      | PPT Preparation                                 | Surabhi    | 3 (parallel)    | Hours 2–6    | T1         | Done   |
| T5      | Hardware Assembly                               | Omkar      | 1               | Hour 5       | T2         | Done   |
| T6      | Testing & Debugging                             | All        | 1               | Hour 5       | T2, T5     | Done   |


## 12.3 Responsibility Split

| Area                 | Main Owner | Support Owner |
| -------------------- | ---------- | ------------- |
| Concept              | `[SURABHI]`  | `[RUCHITA]`    |
| Electronics          | `[JAY]`       | `[RUCHITA,SURABHI]`     |
| Coding               | `[JAY]`       | `[SURABHI]`     |
| Mechanical build     | `[OMKAR]`       | `[]`    |
| Testing              | `[JAY]`       | `[OMKAR]`    |
| Documentation        | `[RUCHITA]`       | `[SURABHI]`     |

---

# 13. 2 hour Milestones 

2-HOUR MILESTONE UPDATE
Major Design Change
The project concept was changed from generic pattern-based movement to a semaphore flag communication system.
This shift helped redefine JORVIS into a gesture-based decoding and memory game, rather than random servo motion patterns.
Early Implementation Progress
In the first 2 hours, initial servo output testing was successfully completed.
Basic control of the first arm wire (servo connection) was implemented to verify movement behavior.
Early work focused on:
Testing servo response
Checking wiring stability
Validating basic flag-like arm positions
Key Insight from This Phase
Moving to a semaphore-based system provided a clear structure for communication.
Even with only partial implementation (first arm wired), it confirmed that:
Servo-based directional encoding is feasible
The system can represent meaningful symbolic gestures using arm positions
## 13.1 8-hour Plan

### Bi Hour 1 — Plan and De-risk

Expected outcomes:

- [x] Idea finalized
- [ ] Core interaction decided
- [ ] Sketches made
- [ ] BOM completed
- [x] Purchase needs identified
- [ ] Key uncertainty identified
- [x] Basic feasibility tested

### Bi Hour 2 — Build Subsystems

Expected outcomes:

- [x] Electronics tests completed
- [ ] CAD / structure planning completed
- [ ] App UI started if needed
- [x] Mechanical concept tested
- [x] Main subsystems partially working

### Bi Hour 3 — Integrate

Expected outcomes:

- [x] Physical body built
- [x] Electronics integrated
- [x] Code connected to hardware
- [ ] App connected if required
- [x] First playable version exists

### Bi Hour 4 — Refine and Finish

Expected outcomes:

- [x] Technical bugs reduced
- [x] Playtesting completed
- [x] Improvements made
- [x] Documentation completed
- [x] Final build ready

## 13.2  Update Log

| Hour   | Planned Goal                                    | What Actually Happened                                                                                                                                                 | What Changed                                                                                      | Next Steps                                              |
| ------ | ----------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------- | ------------------------------------------------------- |
| Hour 1 | Ideation and final concept selection            | Explored 4 ideas: lie detector, greenhouse system, component tracker, and creature-based system. Final idea selected: interactive creature (JORVIS)                    | Shifted from utility-based ideas to a game-based semaphore creature concept                       | Move to hardware selection and feasibility testing      |
| Hour 2-4| Component testing and hardware selection        | Tested components and restructured design. Changed MG996 servo to SG90 due to weight/stability issues. Switched capacitive touch sensor to joystick                    | Input system simplified to joystick for better control and reliability                            | Begin integration of servo + joystick system            |
| Hour 5  | Basic system integration (servo, LCD, joystick) | LCD brightness issues occurred, servo alignment slightly tilted affecting accuracy, joystick code stuck in loop, and library installation issues prevented compilation | Debugging required for LCD contrast, servo calibration, and code structure fixes                  | Fix wiring, install libraries, stabilize input handling |
| Hour 6| System debugging and prototype stabilization    | Partial working system achieved after fixing code and library issues. Servo and joystick interaction improved but still not fully stable                               | System remained semi-functional due to hardware constraints and calibration limitations           | Prepare system for final integration and build assembly |
| Hour 7 | Final integration and testing                   | Hardware assembly completed. Servo structure mounted, joystick and LCD connected, and basic game flow tested                                                           | Mechanical and electrical integration finalized, minor accuracy issues remained in servo movement | Move to documentation and presentation preparation      |
| Hour 8 | PPT creation, documentation, and final assembly | PPT and documentation completed in parallel. Final project assembly finished and system prepared for demo                                                              | Focus shifted from development to presentation and packaging of the project                       | Final debugging and readiness for demonstration         |



---

# 14. Risks and Unknowns

## 14.1 Risk Register

| Risk                                                            | Type         | Likelihood | Impact   | Mitigation Plan                                                                       | Owner                |
| --------------------------------------------------------------- | ------------ | ---------- | -------- | ------------------------------------------------------------------------------------- | -------------------- |
| WiFi connection between laptop and ESP32 becomes unstable       | `Technical`  | `Medium`   | `High`   | Keep ESP32 close, ensure stable power supply, reduce network load, add fail-safe stop | `[Gopal]`           |


## 14.2 Biggest Unknown Right Now

What is the single biggest uncertainty in your project at this stage?

**Response:**  


---

# 15. Testing 

## 15.1 Technical Testing Plan

| What Needs Testing       | How You Will Test It                                         | Success Condition                                        |
| ------------------------ | ------------------------------------------------------------ | -------------------------------------------------------- |
| Servo movement accuracy  | Run predefined semaphore positions and observe arm alignment | Arms consistently reach correct angles for each gesture  |
| Joystick input selection | Navigate options on LCD using joystick in repeated trials    | Correct option selection without lag or looping issues   |
| LCD display readability  | Test display under different power and contrast settings     | Clear and readable text with stable brightness           |
| Game logic flow          | Run full game cycle from word display to result              | Smooth transition between all game stages without errors |
| Servo coordination       | Test multi-servo movements together                          | All servos move synchronously without collision or drift |
                                                  |
                       |
## 15.2 Testing and Debugging Log

| Date       | Problem Found                                                 | Type       | What You Tried                                      | Result                | Next Action                         |
| ---------- | ------------------------------------------------------------- | ---------- | --------------------------------------------------- | --------------------- | ----------------------------------- |
| 27th April | Servo motors misaligned causing inaccurate semaphore gestures | Mechanical | Adjusted mounting angle and repositioned servo arms | Partial improvement   | Recalibrate servo angles in code    |
|  27th April  | Joystick stuck in input loop preventing selection             | Software   | Modified loop structure and input handling logic    | Fixed after debugging | Optimize input debounce             |
|  27th April  | LCD not clearly visible (low brightness/contrast)             | Hardware   | Checked wiring and adjusted contrast settings       | Improved readability  | Fine-tune display settings          |
| 27th April  | Code failed to compile due to missing libraries               | Software   | Installed required Arduino libraries                | Resolved              | Verify dependencies before build    |
|  27th April  | Servo power instability during multiple movements             | Electrical | Reduced simultaneous servo motion load              | Reduced jitter        | Improve power distribution strategy |



## 15.3 Playtesting Notes

| Tester      | What They Did                        | What Confused Them                    | What They Enjoyed                         | What You Will Change                          |
| ----------- | ------------------------------------ | ------------------------------------- | ----------------------------------------- | --------------------------------------------- |
| `Gopal` | `Tried navigating through obstacles` | `Some obstacles ewren't clear enough` | `Liked projection + real car interaction` | `Add a slight red highlight around obstacles` |


---

# 16. Build Documentation

**16.1 Fabrication Process**

The fabrication process involved designing, building, assembling, and refining the physical structure and electronic integration of the JORVIS system.

**Design (Planning and Layout)**

The initial structure was planned based on the size and placement of components such as the Shrike Lite board, servos, joystick, LCD, and LEDs. The design ensured proper alignment for semaphore arm movement and stable mounting of all electronics.

**Cutting and Structure Creation**

The body frame was created using lightweight materials such as cardboard/acrylic. Parts were cut manually based on measured dimensions to ensure proper fitting of servos and electronic modules.

**Assembly**

All electronic and mechanical components were assembled onto the structure:

SG90 servos were mounted for arm movement
LCD was fixed at a visible angle for user interaction
Joystick was placed for easy control
LEDs were positioned for clear feedback indication
Fastening

Components were secured using adhesives and mechanical supports. Some parts were kept modular so that wiring and hardware could be easily adjusted during debugging and testing.

**Wiring**

All connections were routed carefully between:

Shrike Lite (RP2040)
Servos
LCD (I2C)
Joystick module
LEDs
Wiring was adjusted multiple times to fix instability and ensure proper signal flow.

## 16.2 Build Photos

Add photos throughout the project.

Suggested images:

- early sketch,
- prototype,
- electronics testing,
- mechanism test,
- app screenshot,
- final build.
- <img width="960" height="1280" alt="WhatsApp Image 2026-04-24 at 9 46 02 AM (1)" src="https://github.com/user-attachments/assets/74baa570-5770-483e-be6d-d2f03386e37c" />





# 17. Final Outcome

## 17.1 Final Description

Describe the final version of your project.

**Response:**  


## 17.2 What Works Well



## 17.3 What Still Needs Improvement


## 17.4 What Changed From the Original Plan

How did the project change from the initial idea?

**Response:**  


---

# 18. Reflection

## 18.1 Team Reflection

**What the Team Did Well**
Strong collaboration during a very short 8-hour timeline, with parallel work on hardware, software, and documentation.
Quick decision-making, especially during ideation where multiple concepts were evaluated before finalizing JORVIS.
Effective adaptability, such as switching from MG996 to SG90 servos and capacitive touch to joystick based on feasibility.
Continuous mutual support, where members helped each other instead of working in isolated tasks.
Successful integration of hardware and software into a working prototype despite constraints.
**What Slowed the Team Down**
Hardware instability, especially servo alignment issues and limited accuracy of SG90 motors.
LCD problems like low brightness/contrast affecting readability.
Software issues such as joystick input loops and missing libraries causing compilation delays.
Integration challenges between modules that individually worked but needed calibration together.
Time pressure, which reduced the scope for deep debugging and refinement.
**Time, Task, and Responsibility Management**
Time was managed in a highly compressed, phase-based structure (1–8 hours) rather than traditional long-term planning.
Tasks were clearly divided but executed in parallel, especially during implementation and documentation phases.
Responsibilities were flexible rather than rigid, allowing members to step in wherever needed.
Despite minor delays from debugging issues, the team maintained overall flow and completed a functional integrated system within the available time.
Documentation and PPT were efficiently handled alongside development, ensuring no separate time block was required.

## 18.2 Technical Reflection

What did you learn about:

- electronics,
- coding,
- mechanisms,
- fabrication,
- integration?

**Response:**  


## 18.3 Design Reflection

What did you learn about:

- designing ,
- delight,
- clarity,
- physical interaction,
- understanding,
- iteration?

**Response:**  


## 18.4 If You Had One More hour

What would you improve next?

**Response:**  

` `

---

# 19. Final Submission Checklist

Before submission, confirm that:

- [x] Team details are complete
- [x] Project description is complete
- [x] Inspiration sources are included
- [x] Sketches are added
- [x] BOM is complete
- [x] Purchase list is complete
- [x] Budget summary is complete
- [x] Mechanical planning is documented if applicable
- [ ] App planning is documented if applicable
- [x] Code flowchart is added
- [x] Task breakdown is complete
- [x] Weekly logs are updated
- [x] Risk register is complete
- [x] Testing log is updated
- [x] Playtesting notes are included
- [x] Build photos are included
- [x] Final reflection is written
<img width="1131" height="1600" alt="image" src="" />

---


---


