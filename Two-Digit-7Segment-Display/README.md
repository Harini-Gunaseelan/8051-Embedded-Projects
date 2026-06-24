# Two Digit 7 Segment Display

## Description
Implemented a two-digit 7-segment display using the AT89C51 (8051) microcontroller. The system displays numbers from 99 to 00 (or a configurable range) using two common cathode 7-segment displays.

## Components Used
- AT89C51
- Two Common Cathode 7-Segment Displays


## Software
- Keil uVision
- Proteus

## Concepts Used
- Multi-display Interfacing
- Array Lookup Table
- Functions
- For Loops
- Number Splitting using Division (/) and Modulo (%)
- Embedded C

## Working Principle

Two common cathode 7-segment displays are interfaced with the AT89C51 microcontroller.

The tens digit and ones digit are controlled independently using nested for loops. The outer loop controls the left display (tens digit) while the inner loop controls the right display (ones digit), generating a two-digit countdown sequence.

## Concepts Used

- Nested For Loops
- Array Lookup Table
- Multi-display Interfacing
- Embedded C
- Port Interfacing

These digits are mapped to their corresponding 7-segment patterns and displayed on separate displays.

## Output
Displays a two-digit countdown using two 7-segment displays.

## Demo Video
https://youtu.be/Kaoe5pLqpew  // the video linked is common anode 7 segment display, for a common cathode just ground instead of connecting with power

## Author
Priyaharini
