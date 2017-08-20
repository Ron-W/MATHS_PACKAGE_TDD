# MATHS_PACKAGE_TDD
Practice at using TDD techniques

This project is an initial attempt at programming using the test driven development (TDD) method.
The code under development is a maths library called (rwMaths.c). The initial set of functions to be developed will return the unknown value of the linear equation:

y = mx + c.

The project is based on a copy of the SPI Unit test example given in the Atmel Studio (version 7.0). This will be changed to:
1.	add tests and code for the testing of the linear equation functions, and
2.	remove the original code for the SPI test.
Resources: It is thought that the following SlideShare will be used to help in the TDD process: https://www.slideshare.net/amritayan/test-driven-development-in-c

### Developing - uint32_t calcYfromX(uint32_t x)

This function assumes that 'm' = 1 and c = '0'.

<strong>Limiting the value of the return value</strong>


* To keep the coding simple only integer values are going to be used.
* Positive integers will be used in the calculation.
* Negative return values being used to indicate errors in the input values.
  * i.e. ‘-1’, ‘-2’ and ‘-3’ are returned when ‘m’, ‘x’ and ‘c’ respectively are too large.
* The above limitations will require the parameters (i.e. ‘m’, ‘x’ and ‘c’) to be limited so that there is no overflow on the return value of a signed 32-bit integer (i.e. ‘y’).
  * Starting with
    * y = mx + c … (1)
  * and knowing that:
    * y(max) = 232 – 1 = 2,147.483,647 … (2)
  * then putting (2) into (1) we get:
    * 2,147.483,647 = mx + c …(3)
  * Knowing that:
    * m(max) = x(max) = c(max) … (4)
  * we can put (4) into (3)
    * 2,147,483,647 = x2 + x … (5)
  * But we need a value for 'x'.
  * Putting (5) into WolframAlpha we get the solution of x to be (for a positive value):
    * see https://www.wolframalpha.com/input/?i=2,147,483,647+%3D+x(x-1)
    * x = ½ + (8,589,934,5890.5 / 2)
    * x = 46341
  * Checking the answer:
    * y(46341) = 463412 + 46341 = 2,147,441,194 (which is < 2,147,483,647)
  * Confirm that 46341 is the largest number by adding ‘1’ to Wolframalpha’s answer (i.e. 46341 + 1 = 46342)
    * y(46342) = 463422 + 46342 = 2,147,534,622 (which is > 2,147,483,647)
* Therefore, the parameters of m, x, and c can range from 0 to 46341.




