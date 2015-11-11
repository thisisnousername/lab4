# Lab 4
### Lab class 4, Arrays &amp; Pointers


In this lab we will calculate the first derivative of discrete data. Consider that you have *N* equidistant grid points at positions *x_i, i = 0,...,N-1*, where *x_{i+1} - x_i = dx*. Let *f_i* denote the data values *f(x_i)*.

* Write a C++ program that fills a double array of length *N=100* with data values *f(x_i) = exp(-x_i^2)*, where *x_0= -15, x_{N-1} = 15*.
   * Fill the values into the array inside a function

* Calculate the first derivative at all *N* positions using the    approximation
       f'(x_i) = ( f_{i+1} - f_{i-1} ) / 2*dx
  * Write again an extra function which calculates this derivative. Your function should overwrite the values in the original array. Use as little extra memory as possible, in particular do *not* use a second array.
