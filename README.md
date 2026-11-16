# cis165-Lab8-Geometry-Calculator
# Plan

## Inputs and Starting Data
Constant: PI = 3.14159
User Inputs: 
An integer menu choice (1 to 4) 
Depending on the menu selection: (radius, length, width, base, or height) 

## Variables
const double PI
int choice: Stores menu selection.
double radius, length, width, base, height: Store the dimensions entered.
double area: Stores the calculated area.

## Calculations and Comparisons
Menu Routing: the switch statement compares choice against options 1, 2, 3 and 4.
Circle Area (Choice 1): area = PI * radius * radius 
Rectangle Area (Choice 2): area = length * width
Triangle Area (Choice 3): area = base * height * 0.5

## Input Checks
Menu Validation: If choice is outside the range, the default branch catches it and stops execution.
Dimension Validation: Before running any area formula, if statements check whether any entered dimension is less than 0. Negative values are rejected with an error message. Value 0 is allowed.

## Expected Output
Valid Calculation: Displays the area labeled anda formatted to two decimal places.
Quit (Choice 4): Displays the message "Program ending".
Invalid Input: Displays an error message explaining whether the menu choice or a negative dimension caused the problem.


