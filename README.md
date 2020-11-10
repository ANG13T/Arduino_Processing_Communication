# Processing-Arduino Communication

This project used Processing and Arduino to communicate with each other in order to produce a GUI controlled by push buttons connected to the Arduino

## Materials

- Breadboard
- Potentiometer
- Arduino Uno
- Around 10 - 15 jumper wires
- 3 220ohm resistors
- 3 pushbuttons

## Schematic

![design image](https://github.com/angelina-tsuboi/4N35_LED_Control/blob/main/images/design.png)

## How It Works

The circuit for this project is straightforward. We have three push button each connected to a VCC and pulled down to ground by a 220ohm resistor. The input from the buttons are detected by the digital input pins of the Arduino. A potentiometer is also used in this project. The pot is connected to the 5V, ground, and a analog input pin of the Arduino. For this project, the Arduino sketch communicates with Processing in order to display the GUI. The GUI displays a 700 by 700px window with a specific background color. As we rotate the potentiometer, the background color of the GUI changes. We can also set the background to a specific color by using one of the three push buttons.

## Completed Project

![project photo](https://github.com/angelina-tsuboi/4N35_LED_Control/blob/main/images/final.jpg)

## Sources

[Maker Pro tutorial](https://maker.pro/arduino/tutorial/how-to-make-arduino-and-processing-ide-communicate)

