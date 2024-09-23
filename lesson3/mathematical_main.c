# include <stdio.h>

int main() {

    // IN GENERAL IT IS SAFE TO ASSUME THE RULES OF PEMDAS APPLIES HERE
    // Paranthesis, Exponential, Multiplication/Division, Addition/Subtraction
    // L -> R, # R-> L
    /*
    + Addition Unary
    - Subtraction Unary 
    * Multiplication
    / Division, returns floats
    % Modulo, finds the remainder. 
    */

    int i; float f;

    f = i = 33.3f;

    //i = 33, f = 33.0; 
    printf("i = %d | f = %f", i, f); 

    /*
    Variables are considered to be lvalues or in other words, left handed values when dealing with the '=' operator. 
    -> Mean's the left hand side of the '=' must not contain any other operators or any other values.
    */

    //12 = i; /*** WRONG ***/
    //i + j = 0; /*** WRONG ***/
    //-i = j; /*** WRONG ***/ 

    //Some compounded, shortcut of operators: 
    i += 2; /* same as i = i + 2; */ 
    i -= 2; /* same as i = i - 2; */
    i *= 2; /* same as i = i * 2; */
    i /= 2; /* same as i = i / 2; */
    i %= 2; /* same as i = i % 2; */

    //Increment/Decrement by 1 => ++/--
    //!!! CAUTION WHERE YOU APPLY THIS, ABILITY TO INCREMENT BEFORE OR AFTER LINE EXECUTION. 
    ++i; //increments before a line has been ran
    i++; //increments after a line has been ran
    return 0; 
}