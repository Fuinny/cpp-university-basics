# Task Set 1

### Task 1
Define two integer variables: `x` and `y`. Read their values from the keyboard.
Determine whether these two numbers are equal and display the result to the console.

---

### Task 2
Compute the following expression:
```math
y = 1 + x + \frac{x^2}{2!} + \frac{x^3}{3!} + \frac{x^4}{4!}
```
where `x` is provided by the user.

---

### Task 3
Calculate the gravitational force F using the following formula:
```math
F = 6.673 * 10^{-8} * \frac{m_{1} * m_{2}}{R^2}
```
where `m1`, `m2` and `R` are provided by the user.

---

### Task 4
Compute the distance between two points `(x1, y1)` and `(x2, y2)` using the formula:
```math
d = \sqrt{(x_{2} - x_{1})^2 + (y_{2} - y_{1})^2}
```
where `x1, y1` and `x2, y2` are provided by the user.

---

### Task 5
Calculate $\sin(x)$ and display the result.
Here, `x` is provided by the user.

---

### Task 6
Swap the values of two variables `x` and `y` using the following methods:
* Using an additional temporary variable.
* Without using an additional variable.
* Using the XOR operator for bitwise swapping.

`x` and `y` are provided by the user.
The user should be able to choose the method of swapping.
You cannot use `std::swap()` function for this task.

---

### Task 7
Display the following matrix:
```math
\begin{matrix}
a \\
a^3 & a^6 \\
a^6 & a^3 & a
\end{matrix}
```

`a` is provided by the user.
The matrix structure should be hardcoded exactly as shown above and should not adapt dynamically.

---

### Task 8
Calculate the values of $e^π$ and $π^e$ and display the results to the console.

You may use `std::numbers` for this task.
However, this will only work if you're using C++ 20 or above.

---

### Task 9
Write a program to calculate the sum of the digits of a three-digit number.
The user enters a three-digit number via the console.

For example: `286 → 2 + 8 + 6 = 16`
