## Reflection 
### Tools
I used Google Gemini (AI Assistant) to write the initial program using the switch menu  

### One Decision
The initial structure suggested formatting the output with fixed and setprecision(2) I accepted this to keep the area display clean. 
I made sure the 0.5 floating-point literal was explicitly used in the triangle calculation
(base * height * 0.5) instead of 1 / 2 so integer division would not zero out the result.

### A Specific Check
Input Test:
Test 1 (Zero ): Selected choice 1 (Circle) and entered 0 for the radius. 
The program output was: The area of the circle is 0.00, confirming that 0 passes the radius < 0 check and calculates right.

Test 2 (Negative Rejection):Selected choice 2 (Rectangle) and entered -5 for length and 4 for width. 
The program output was: Error: Length and width cannot be negative.
It didn't calculate an area, confirming that the validation guard triggers before the multiplication runs.

### Learning
I can now write a switch statement with if/else,  input validation to route menu choices and block invalid negative numbers before running math 
formulas.
I still need to practice handling non-numeric input errors, and wrapping menus in while loops for multi-run programs.

