# MATHS_PACKAGE_TDD
Practice at using TDD techniques

This project is an initial attempt at programming using the test driven development (TDD) method.
The code under development is a maths library called (rwMaths.c). The initial set of functions to be developed will return the unknown value of the linear equation:

y = mx + c.

The project is based on a copy of the SPI Unit test example given in the Atmel Studio (version 7.0). This will be changed to:
1.	add tests and code for the testing of the linear equation functions, and
2.	remove the original code for the SPI test.
Resources: It is thought that the following SlideShare will be used to help in the TDD process: https://www.slideshare.net/amritayan/test-driven-development-in-c

<h3>Developing - uint32_t calcYfromX(uint32_t x)</h3>

This function assumes that 'm' = 1 and c = '0'.

<p>
    <strong>Limiting the value of the return value</strong>
</p>
<ul>
    <li>To keep the coding simple only integer values are going to be used.</li>
    <li>Positive integers will be used in the calculation.</li>
    <li>Negative return values being used to indicate errors in the input values.</li>
    <ul>
      <li>i.e. ‘-1’, ‘-2’ and ‘-3’ are returned when ‘m’, ‘x’ and ‘c’ respectively
    are too large.</li>
    </ul>
<ul>
    <li>The above limitations will require the parameters (i.e. ‘m’, ‘x’ and ‘c’)
    to be limited so that there is no overflow on the return value of a signed
    32-bit integer (i.e. ‘y’).</li>
    <ul>
      <li>Starting with:</li>
      <ul>
        <li>y = mx + c … (1)</li>
      </ul>
    </ul>
    <ul>
      <li>and knowing that:</li>
      <ul>
        <li>y(max) = 232 – 1 = 2,147.483,647 … (2)</li>
      </ul>
    </ul>
    <ul>
      <li>then by putting (2) into (1) we get:</li>
      <ul>
        <li>2,147.483,647 = mx + c …(3)
</p>
<p>
    o Knowing that:
</p>
<p>
    § m(max) = x(max) = c(max) … (4)
</p>
<p>
    o we can put (4) into (3)
</p>
<p>
    § 2,147,483,647 = x<sup>2</sup> + x … (5)
</p>
<p>
o Putting (5) into WolframAlpha    <a href="#_ftn1" name="_ftnref1" title="">[1]</a> we get the solution of x
    to be (for a positive value):
</p>
<p>
    § x = ½ + (8,589,934,589<sup>0.5</sup> / 2)
</p>
<p>
    § x = 46341
</p>
<p>
    o Checking the answer:
</p>
<p>
    § y<sub>(46341)</sub> = 46341<sup>2</sup> + 46341 = 2,147,441,194 (which
    &lt; 2,147,483,647)
</p>
<p>
    o Confirm that 46341 is the largest number by adding ‘1’ to Wolframalpha’s
    answer (i.e. 46341 + 1 = 46342)
</p>
<p>
    § y<sub>(46342)</sub> = 46342<sup>2</sup> + 46342 = 2,147,534,622 (which
    &gt; 2,147,483,647)
</p>
<p>
    o Therefore, the parameters of m, x, and c can range from 0 to 46341.
</p>
<div>
    <br clear="all"/>
    <hr align="left" width="33%" size="1"/>
    <div id="ftn1">
        <p>
            <a href="#_ftnref1" name="_ftn1" title="">[1]</a>
            https://www.wolframalpha.com/input/?i=2,147,483,647+%3D+x(x-1)
        </p>
    </div>
</div>
