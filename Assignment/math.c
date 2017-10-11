/*
 * math.c
 *
 *  Created on: Oct 11, 2017
 * 	Last Edited: Oct 11, 2017
 *  Author: Kishan Patel
 *
 *  My Implementation of the math.h header file provided. Does not include a main method, as it is assumed this class will be either static or instantiated.
 */
#include<math.h>
/**
 * Need two variables in order to keep track of whether we need to
 * present the answer as an int or as a double (integer vs decimal)
 * decimal is the value (since math will force an int to be returned,
 * we need to save the result elsewhere)
 * needsDecimal is a helper variable, to let you know if division has
 * been performed. Meant to be accessed using a getter. If you just want
 * to perform integer division, don't bother with any additional
 * variables.
**/
double decimal = 0;
_Bool needsDecimal = 0;
/**
 * Implementation of the math function, as previously defined in the
 * header file. Returns an int, based on the operation selected
 * (Operator) and the numbers being operated on (num1, num2)
 * 
 */
int math(int num1, int num2, char Operator){
    switch(Operator){
        case '+':
            return num1+num2;
            break;
        case '-':
            return num1-num2;
            break;
        case '*':
            return num1*num2;
            break;
        case '/':
            needsDecimal = 1;
            decimal=(double) num1/num2;
            //still allows for integer division
            return decimal;
            break;
        case '%':
            return num1%num2;
            break;
        
    }
}
/**
 * Getter for the needsDecimal variable
 * 
 */
_Bool getNeedsDecimal(void){
    return needsDecimal;
}
