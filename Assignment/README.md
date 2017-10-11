# Math.c File

Here we have a header file and a complementary .c file.

## Supported Functions
The following functions are supported by this file:
1. Addition +
2. Subtraction - 
3. Multiplication *
4. Division /
5. Modulo %

### Usage
Usage of these functions are fairly straightforward and intuitive. It is assumed that the math.c file will be instantiated/static.
As a result, you simply use the class name (Math) and call the math function on that class name, giving it three parameters:
1. num1 - An int for the first number
2. num2 - An int for the second number
3. Operator - A char representing the operation to be performed. Use the symbols seen above.

#### Division
Note, when doing division, this math.c function will default to doing integer division (remainder will not show up)
In order to do division with remainders, you can still use the math function, but for the true value, you will have to
use the appropriate getter (in the .c file) to obtain the "decimal" variable. In order to facilitate this, there is a "needsDecimal"
variable also present. This variable is used to determined whether or not division has been performed, allowing for two separate
code paths ( perform an if check for this variable, and if it is true, you can get the value using the getter, else just take
the value that the math function returns). In addition, there is a function to reset the value of the needsDecimal variable,
should that be a useful function to your use.

### Expandability
This function is easily expandable, simply add more case statements to handle more operations.
