# Robotic-Claw-Project
Summative project for Computer Engineering class.  Servo-powered claw with a 3D-printed structure which can move various objects.  System is tele-operated.  Three LED matrices were utilized for demonstration. 

# Introduction

	Our project, the Puzzle-Arm is a dual-module system that features a multiplexed LED matrix puzzle and a robotic claw-arm.  The scope of this project is to capture the material as well as the technical work that we’ve done in-class on multiplexing, C-programming and Arduino interfacing while incorporating other knowledge on general electronics.   Our system will simulate an unfinished puzzle displayed via LED matrices being completed by the transportation of a piece via a robotic claw-arm.  


# Hardware Operation

	This project features two circuits; one for the LED matrix puzzle and the other for the robotic claw-arm. 	

	The LED matrix puzzle circuit consists of three MAX7219 LED matrix displays (M1 - M3), an Arduino UNO microcontroller (U1) and a mini-breadboard.  To the breadboard, we installed power and ground wires coming from the Arduino and power and ground wires for the LED matrices.  Two out of three of the LED matrices are multiplexed, so they both share the same signal pins (DIN, CS and CLK) – each going to the Arduino board’s digital pins.  The circuit is powered via the Arduino board’s USB port and is built upon a piece of cardboard, using zip-ties for organization.  

	The circuit which operates the robotic claw-arm is built upon a small breadboard and includes three Servo motors (SERVO1 - SERVO3), a joystick (J1), a potentiometer (RPOT2), a resistor (R3) and an LED (D1).  The breadboard receives power and ground from the Arduino board, allowing for the rest of the components to be powered and grounded via breadboard pins.  The three Servo motors are wired to the Arduino board’s digital pins for signal, and the potentiometer and joystick are connected to the Arduino’s analog pins.  An LED is wired with a resistor to act as power and ground indication.  This module is controlled manually by the potentiometer (X-Axis movement) and the joystick (Y-Axis and claw movement). 
