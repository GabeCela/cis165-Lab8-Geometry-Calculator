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

## Required test cases
## Test                            /  Data	Expected result               /  Program returned Value               / Explanation
Choice 1, radius 2	               /  Area 12.57                          /  Area 12.57                           / setprecision(2)
Choice 2, length 3, width 4.5	     /  Area 13.5                           /  Area 13.50                           / setprecision(2)
Choice 3, base 5, height 3	       /  Area 7.5                            /  Area 7.50                            / setprecision(2)
Choice 4	                         /  Ends the program                    /  Ends the program
Choice 0                           /  Error message                       /  Error message
Choice 5	                         /  Error message                       /  Error message 
# Additional test
Choice 1, radius -1	               /  Radius cannot be negative           /  Radius cannot be negative 
Choice 2, length -1, width -1	     /  Length and width cannot be negative /  Length and width cannot be negative.
Choice 3, base -1, height -1	     /  Base and height cannot be negative  /  Base and height cannot be negative.
Choice 1, radius 0	               /  Area 0                              /  Area 0                                / allows radius 0
Choice 2, length 0, width 5	       /  Area 0                              /  Area 0                                / allows length 0
Choice 3, base 6, height 0	       /  Area 0                              /  Area 0                                / allows height 0

## Expalining the Code

### How does your selection logic send each choice to the right calculation?
A "switch" statement evaluates the integer stored in "choice" and jumps directly to the matching "case" block (1, 2 or 3) to ask for dimensions and run that shape's formula. Each branch ends with a "break" statement so the program does not fall through into other calculations, while any number outside range 1 through 4 goes to the default branch to display an error.

### Why is `radius * radius` correct while `radius ^ 2` is not?
In C++, the ^ symbol is the bitwise XOR operator, so radius ^ 2 flips bits instead of squaring the number. 
Multiplying radius * radius performs the multiplication to get the square of the radius.

### Why does the triangle calculation use 0.5 rather than integer division 1 / 2?
In C++, dividing two integers 1 / 2 performs integer division, which drops the fractional remainder and evaluates to 0 so the entire triangle area will be 0. Using the floating-point 0.5 forces floating-point multiplication so the half value is preserved accurately.

### Where do you check negative dimensions, and how do you handle zero and choice 4?
Negative dimensions are checked inside each shape case block after cin reads the inputs and before any area formula is calculated, using if conditions like radius < 0. Because the check looks for numbers less than zero (< 0), entering 0 passes validation and calculates an area of 0.00, while choosing 4 routes to case 4 to print an exit message and end the program immediately without prompting for dimensions.

# How to compile and Run the program

If you use g++, compile each program separately with C++17, for example:

g++ -std=c++17 -Wall -Wextra geometry.cpp -o geometry

Then run the executable for that source file. 

If you use OnlineGDB Compiler, copy the code of geometry.cpp and paste on the screem. Click RUN and follow the instructions on the screen.




