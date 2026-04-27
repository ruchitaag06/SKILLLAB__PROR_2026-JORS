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
<img width="1600" height="1131" alt="image" src="https://github.com/ruchitaag06/SKILLLAB__PROR_2026-JORS/blob/main/images/WhatsApp%20Image%202026-04-27%20at%2010.52.50%20AM.jpeg" />
## 1.2 Team Members

| Name           | Primary Role                    | Secondary Role | Strengths Brought to the Project |
| -------------- | ------------------------------- | -------------- | -------------------------------- |
| `RUCHITA GAURI` | `[DOCUMENTATION ]` | `[HARDWARE]`  | `Documentation, Material Handling `|
| `SURABHI KARADE PATIL`| `[RESEARCH]`   | `[HARDWARE]`     | `Material Handling, Hardware`    |
| `JAY HUMBE`| `[HARDWARE]`   | `[Coding]`     | `Material Handling, Hardware`    |
| `OMKAR KHARTUDE`| `[PRODUCT DESIGNING]`   | `[DOCUMENTATION]`     | `Material Handling, Hardware`    |
## 1.3 Project Title

`"Meet JORVIS: Semaphore Memory Beast"`

<img width="1600" height="1131" alt="image" src="(https://github.com/ruchitaag06/SKILLLAB__PROR_2026-JORS/blob/main/images/GROUP%20NAME.png)"/>

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
| `[WIKIPEDIA]`   | `[https://www.instagram.com/reel/DW4CT7WCDry/?igsh=cXg3dzAxYmdncDBo](https://en.wikipedia.org/wiki/Flag_semaphore#:~:text=Contemporary%20semaphore%20flag%20system,-For%20history%2C%20see&text=The%20current%20flag%20semaphore%20system,make%20the%20characters%20more%20obvious)` | `inspired by transforming the traditional semaphore flag signaling system (used in ship to ship communication) into a playful, expressive robotic creature that communicates through movement and challenges users to decode its messages. + educational experiences` |
|             |                                                                     |                                                                                           |
|             |                                                                     |                                                                                           |

## 3.2 Original Twist

What makes your project original?

**Our project is original because it transforms the traditional *semaphore flag signaling* into an interactive memory game, where players must observe, decode, and interpret physical arm movements instead of relying on screens or text.**  


---

# 4. Project Intent

## 4.1 User Journey 

Describe exactly how a user will use the project.Make it a story
**The arms begin to move slowly. One lifts up while the other turns to the side, then both shift into a new position. Each movement is held just long enough to notice, forming a clear sequence that the user can follow and remember.
Once the sequence ends, the screen shows a few word options. The user thinks back to the movements and tries to understand what the creature was saying.
Using the joystick, they move through the options and choose an answer.
If the answer is correct, the arms move quickly and playfully, almost like a small celebration, while the lights blink brightly. If the answer is wrong, the arms gently lower and the lights blink slowly, giving a softer, quieter response.
Soon, the arms lift again, ready to show a new sequence, and the user watches more carefully this time.**

                                                  |



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

| System Part                              | Type            | What It Does                                                               |


---

# 7. Sketches and Visual Planning

## 7.1 Concept Sketch
**Insert image below:**  

 <img width="1600" height="1131" alt="image" src="(https://github.com/ruchitaag06/SKILLLAB__PROR_2026-JORS/blob/main/images/WhatsApp%20Image%202026-04-27%20at%203.35.23%20PM.jpeg)" />



Example:

```md

```



## 7.2 Labeled Build Sketch

Add a sketch with labels showing:

- structure,
- electronics placement,
- user touch points,
- moving parts,
- output elements.

**Insert image below:**  
`[Upload image and link here]`
<img width="1600" height="1200" alt="image" src="https://github.com/user-attachments/assets/95637f31-b4e7-4427-a9e1-4b63fbeb0ac5" />

## 7.3 Approximate Dimensions

| Dimension        | Value   |
| ---------------- | ------- |
| Length           | `16 cm` |
| Width            | `16 cm` |
| Height           | `8 cm`  |
| Estimated weight | `400 g` |

---

# 8. Electronics Planning

## 8.1 Electronics Used

| Component                 | Quantity | Purpose                               |
| ------------------------- | --------:| ------------------------------------- |
| `[ESP32]`                 | `1`      | `[Main controller]`                   |
| `[L298N Motor Driver]`    | `1`      | `[Control Motors]`                    |
| `[BO Motors]`             | `2`      | `[Rotate wheels]`                     |
| `[Buck Converter]`        | `1`      | `[Power ESP32]`                       |
| `[Li Ion Battery Pack]`   | `2`      | `[Power]`                             |
| `[Projector]`             | `1`      | `[Display obstacles]`                 |
| `Camera (Webcam / Phone)` | `1`      | `[Tracks car position using markers]` |

## 8.2 Wiring Plan

Describe the main electrical connections.

**Response:**  
`The ESP32 is connected to the motor driver (L298N) using four GPIO pins (18,19; 22,23) to control motor direction (IN1, IN2, IN3, IN4). Two PWM-capable pins (ENA and ENB; 25 and 26) are connected to control the speed of each motor.

The motors are connected to the output terminals of the motor driver. The motor driver is powered directly by the battery pack (higher voltage), while the ESP32 receives regulated 5V from the buck converter.

All components share a common ground to ensure stable operation. The projector and camera are connected to the laptop, which handles tracking and game logic separately.`

## 8.3 Circuit Diagram

Insert a hand-drawn or software-made circuit diagram.

**Insert image below:**  
`[Upload image and link here]`
<img width="867" height="1156" alt="" src="" />


# 9. Power Plan

| Question         | Response                                                                                                                                          |
| ---------------- | ------------------------------------------------------------------------------------------------------------------------------------------------- |
| Power source     | `Battery (Li-ion pack)`                                                                                                                           |
| Voltage required | `~6–8.4V for motors (via driver), stepped down to 5V for ESP32 (buck converter)`                                                                  |
| Current concerns | `Motors can draw high current under load, which may cause voltage drops affecting ESP32 and WiFi stability`                                       |
| Safety concerns  | `Avoid over-discharging Li-ion batteries, ensure proper voltage regulation, prevent short circuits, and secure wiring to avoid loose connections` |

---

# 10. Software Planning

## 10.1 Software Tools

| Tool / Platform                | Purpose                                        |
| ------------------------------ | ---------------------------------------------- |
| `[MicroPython]`                | `Control ESP32`                                |
| `[Python/PyGame/OpenCV]`       | `Track markers, game logic, create projection` |
| `[Fusion/Blender/Illustrator]` | `[Prototyping structure]`                      |
|                                |                                                |

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

- **Startup behavior:**  
  The ESP32 initializes motor pins, PWM control, and starts a WiFi access point with a web server. The laptop initializes camera input, tracking system, and projection mapping.
- **Input handling:**  
  Movement commands are received from the laptop (pygame sends http requests)
- **Sensor reading:**  
  The camera continuously captures frames, and OpenCV detects ArUco markers to determine the car’s position and orientation.
- **Decision logic:**  
  The system maps the car’s position into a virtual coordinate system and checks for nearby obstacles or collisions. If movement is valid, the command is allowed; if not, it is blocked or replaced with a feedback action (like a slight shake).
- **Output behavior:**  
  The ESP32 drives the motors using PWM signals to control speed and direction. The projector displays the updated game environment, including obstacles, targets, and feedback visuals.
- **Communication logic:**  
  The laptop sends HTTP requests (e.g., `/forward`, `/left`) to the ESP32 over WiFi. The ESP32 parses these commands and executes motor actions.
- **Reset behavior:**  
  If no command is received within a short timeout, the ESP32 stops the motors. The game resets when a level is completed or restarted.`

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

Explain why you selected your main materials and components.

**Response:**  
`DC motors (BO motors) were chosen instead of servos or steppers because the system requires continuous rotation for movement rather than precise angular control (Previously, we were considering using steppers as we were planning on tracking movement on the ESP using its relative position from an origin, but since we're using a camera now, this is not required). A motor driver (L298N) was used to allow bidirectional control and speed variation using PWM.`


## 11.3 Items You chose

| Item                 | Why Needed               | Purchase Link | Latest Safe Date to Procure | Status       |
| -------------------- | ------------------------ | ------------- | --------------------------- | ------------ |
| `BO Motors + Wheels` | `Drive system for car`   | `robu.in`     | `15th April`                | `[Received]` |
| `Buck Converter`     | `Stable power for ESP32` | `local store` | `before testing`            | `[Received]` |
| `Li-ion Batteries`   | `Portable power`         | `local store` | `before testing`            | `Recieved`   |

## 11.4 Budget Summary

| Budget Item           | Estimated Cost              |
| --------------------- | ---------------------------:|
| Electronics           | `[400]`                     |
| Mechanical parts      | `[200]`                     |
| Fabrication materials | `[0 (Available on campus)]` |
| Purchased extras      | `[0]`                       |
| Contingency           | `[300]`                     |
| **Total**             | `[900]`                     |

## 11.5 Budget Reflection

If your cost is too high, what can be simplified, removed, substituted, or shared?

**Response:**  

---

# 12. Planning the Work

## 12.1 Team Working Agreement

Write how your team will work together.

Include:

- how tasks are divided,
- how decisions are made,
- how progress will be checked,
- what happens if a task is delayed,
- how documentation will be maintained.

**Response:**  


## 12.2 Task Breakdown

| Task ID | Task                    | Owner    | Estimated Hours | Deadline     | Dependency | Status |
| ------- | ----------------------- | -------- | ---------------:| ------------ | ---------- | ------ |
| T1      | `[Finalize concept]`    | `[Both]` | `2`             | `1st April`  | `None`     | `Done` |


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

## 13.1 8-hour Plan

### Bi Hour 1 — Plan and De-risk

Expected outcomes:

- [x] Idea finalized
- [x] Core interaction decided
- [x] Sketches made
- [x] BOM completed
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

| Week   | Planned Goal   | What Actually Happened | What Changed   | Next Steps     |
| ------ | -------------- | ---------------------- | -------------- | -------------- |
| Week 1 | `[Write here]` | `[Write here]`         | `[Write here]` | `[Write here]` |
| Week 2 | `[Write here]` | `[Write here]`         | `[Write here]` | `[Write here]` |
| Week 3 | `[Write here]` | `[Write here]`         | `[Write here]` | `[Write here]` |
| Week 4 | `[Write here]` | `[Write here]`         | `[Write here]` | `[Write here]` |

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

| What Needs Testing     | How You Will Test It                                                                 | Success Condition                                                                                    |
| ---------------------- | ------------------------------------------------------------------------------------ | ---------------------------------------------------------------------------------------------------- |
| `[Wifi connection]`    | `[Check if motor spins via app button]`                                              | `[Both motors accurately respond to wifi signals]`                                                   |
                       |
## 15.2 Testing and Debugging Log

| Date          | Problem Found                         | Type         | What You Tried                                | Result               | Next Action                                    |
| ------------- | ------------------------------------- | ------------ | --------------------------------------------- | -------------------- | ---------------------------------------------- |
| `18th April`  | `Car not balancing properly`          | `Mechanical` | `Add low-friction caster support to one side` | `Worked`             | `improve caster structure`                     |


## 15.3 Playtesting Notes

| Tester      | What They Did                        | What Confused Them                    | What They Enjoyed                         | What You Will Change                          |
| ----------- | ------------------------------------ | ------------------------------------- | ----------------------------------------- | --------------------------------------------- |
| `Gopal` | `Tried navigating through obstacles` | `Some obstacles ewren't clear enough` | `Liked projection + real car interaction` | `Add a slight red highlight around obstacles` |


---

# 16. Build Documentation

## 16.1 Fabrication Process

Describe how the project was physically made.

Include:

- cutting,
- 3D printing,
- assembly,
- fastening,
- wiring,
- finishing,
- revisions.

**Response:**  
`The fabrication process involved designing, manufacturing, assembling, and refining both the physical structure and electronic integration of the system.`

`Design (CAD Modeling):
The initial model was created using CAD software, where components were designed based on the actual dimensions of the electronic parts. This ensured accurate fitting and minimized errors during assembly.
Cutting (Laser Cutting):
The designed parts were fabricated using laser cutting techniques. Sheets were cut precisely according to the CAD model to create the structural base and mounts for components.`

`Components were fixed using adhesives and mechanical supports. Certain parts were intentionally kept modular (not permanently fixed) to allow easy replacement and modification of electronics.
Surface Finishing:
Some parts were sanded to smooth rough edges after cutting. Sawdust mixed with adhesive was used to fill gaps and uneven edges, improving structural finish. The final structure was then painted for better aesthetics and durability.`

`Environment Setup (Dark Room Fabrication):
To enhance projection visibility, a controlled dark environment was created using Z-boards, paper sheets, and bedsheets. This minimized external light interference and improved projection clarity.
Revisions and Iterations:
Multiple adjustments were made throughout the process, including refining alignment, improving structural stability, repositioning components, and optimizing the interaction between the physical car and projected environment.`

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

What did your team do well?  
What slowed you down?  
How well did you manage time, tasks, and responsibilities?

**Response:**  


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


