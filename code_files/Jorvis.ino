#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

#define LEFT_SERVO_PIN   5
#define RIGHT_SERVO_PIN  6

#define JOY_X 26
#define JOY_Y 27
#define JOY_SW 15

#define GREEN_LED 14
#define RED_LED   11

LiquidCrystal_I2C lcd(0x27, 16, 2);

Servo leftServo;
Servo rightServo;


// --------------------------------------------------
// WORD OPTIONS
// --------------------------------------------------

const char* WORDS[] = {
  "CAT",
  "BAT",
  "COW",
  "DOG",
  "OWL",
  "RAT"
};

const int WORD_COUNT = 6;

int selectedOption = 0;
int correctOption = 0;


// --------------------------------------------------
// DISPLAY CURRENT OPTION
// --------------------------------------------------

void displayOptions()
{
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Select Answer:");

  lcd.setCursor(0, 1);
  lcd.print("> ");
  lcd.print(selectedOption + 1);
  lcd.print(". ");
  lcd.print(WORDS[selectedOption]);
}


// --------------------------------------------------
// SERVO DEMO MESSAGE
// --------------------------------------------------

/*
REPLACE ONLY showSemaphoreDemo()
Now each word shows 3 movements
(one movement for each letter)

Example:
CAT = C → A → T
DOG = D → O → G
*/

void showSemaphoreDemo()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Watch Arms...");
  lcd.setCursor(0, 1);
  lcd.print("Guess Message");

  delay(1500);

  // Select the actual word
  const char* word = WORDS[correctOption];

  // Show 3 letters one by one
  for (int i = 0; i < 3; i++)
  {
    char ch = word[i];

    switch (ch)
    {
      case 'A':
        leftServo.write(0);
        rightServo.write(45);
        break;

      case 'B':
        leftServo.write(0);
        rightServo.write(90);
        break;

      case 'C':
        leftServo.write(0);
        rightServo.write(135);
        break;

      case 'D':
        leftServo.write(0);
        rightServo.write(180);
        break;

      case 'G':
        leftServo.write(135);
        rightServo.write(0);
        break;

      case 'L':
        leftServo.write(45);
        rightServo.write(90);
        break;

      case 'O':
        leftServo.write(180);
        rightServo.write(90);
        break;

      case 'R':
        leftServo.write(90);
        rightServo.write(180);
        break;

      case 'T':
        leftServo.write(135);
        rightServo.write(180);
        break;

      case 'W':
        leftServo.write(135);
        rightServo.write(45);
        break;
    }

    // Hold letter position
    delay(1500);

    // Neutral position between letters
    leftServo.write(90);
    rightServo.write(90);
    delay(800);
  }
}


// --------------------------------------------------
// JOYSTICK CONTROL
// --------------------------------------------------

void readJoystick()
{
  int yValue = analogRead(JOY_Y);
  int buttonState = digitalRead(JOY_SW);

  static bool joystickMoved = false;

  // Your joystick center value
  int centerLow = 700;
  int centerHigh = 850;

  // Reset when joystick returns to center
  if (yValue > centerLow && yValue < centerHigh)
  {
    joystickMoved = false;
  }

  // UP
  if (yValue < 500 && !joystickMoved)
  {
    selectedOption--;

    if (selectedOption < 0)
      selectedOption = WORD_COUNT - 1;

    displayOptions();
    joystickMoved = true;
  }

  // DOWN
  else if (yValue > 1000 && !joystickMoved)
  {
    selectedOption++;

    if (selectedOption >= WORD_COUNT)
      selectedOption = 0;

    displayOptions();
    joystickMoved = true;
  }

  // SELECT BUTTON
  if (buttonState == LOW)
  {
    lcd.clear();

    // Turn OFF both LEDs first
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(RED_LED, LOW);

    if (selectedOption == correctOption)
    {
      lcd.print("CORRECT!");

      // GREEN LED ON
      digitalWrite(GREEN_LED, HIGH);

      // Happy servo dance
      for (int i = 0; i < 3; i++)
      {
        leftServo.write(45);
        rightServo.write(135);
        delay(300);

        leftServo.write(135);
        rightServo.write(45);
        delay(300);
      }

      leftServo.write(90);
      rightServo.write(90);
    }
    else
    {
      lcd.print("WRONG :(");

      // RED LED ON
      digitalWrite(RED_LED, HIGH);

      // Sad pose
      leftServo.write(180);
      rightServo.write(180);
      delay(1500);

      leftServo.write(90);
      rightServo.write(90);
    }

    while (1); // Stop forever
  }
}


// --------------------------------------------------
// SETUP
// --------------------------------------------------

void setup()
{
  // I2C Setup
  Wire.setSDA(8);
  Wire.setSCL(9);
  Wire.begin();

  // LCD Setup
  lcd.init();
  lcd.backlight();

  // Servo Setup
  leftServo.attach(LEFT_SERVO_PIN);
  rightServo.attach(RIGHT_SERVO_PIN);

  // Joystick Button
  pinMode(JOY_SW, INPUT_PULLUP);

  // LED Setup
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);

  digitalWrite(GREEN_LED, LOW);
  digitalWrite(RED_LED, LOW);

  // Neutral Position
  leftServo.write(90);
  rightServo.write(90);

  // Welcome Screen
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("SEMAPHORE BOT");

  lcd.setCursor(0, 1);
  lcd.print("STARTING...");
  delay(2000);

  // Random Answer Selection
  randomSeed(analogRead(26));
  correctOption = random(0, WORD_COUNT);

  // Show Robot Movement
  showSemaphoreDemo();

  // Show Options
  selectedOption = 0;
  displayOptions();
}


// --------------------------------------------------
// LOOP
// --------------------------------------------------

void loop()
{
  readJoystick();
}