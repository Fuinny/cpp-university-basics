# Task Set #5

> **Note:** You cannot use loops or arrays for this task — recursion only. This applies to **all six** tasks below.

---

### Task 1

Raise a number n to the power of p using recursion.

The user is prompted to enter two integers: the base number (n), which must not be 0 and the exponent (p).

The result is computed recursively via a custom function. You must not use the `std::pow()` function for this task.

---

### Task 2
Calculate the binomial coefficient using recursion.

The user is prompted to enter two non-negative integers: the selected number of elements (m) and the total number of elements (n).

The result is computed using the recursive formula:
```math 
C(m, n) = C(m, n - 1) + C(m - 1, n - 1) 
```
with base cases:
```math
C(0, n) = C(n, n) 
```

---

### Task 3
Calculate the nth number in the Fibonacci sequence using recursion.

The user is prompted to enter a non-negative index in the Fibonacci sequence.

The result is calculated using a recursive function based on the formula:

```math
F(n)=F(n−1)+F(n−2)
```
with base cases:
```math
F(0)=0,F(1)=1
```

---

### Task 4
Calculate the factorial of a non-negative integer using recursion.

The user is prompted to enter a non-negative integer to calculate the factorial of.

The factorial is computed recursively based on the formula:

```math
n!=n×(n−1)!
```
with the base cases:

```math
0!=1\\
1!=1
```

---

### Task 5
Calculate the sum of a sequence of non-negative numbers entered by the user using recursion.

The user repeatedly inputs numbers until a negative number is entered, which signals the end of input.

---

### Task 6
Solve the [Tower of Hanoi](https://en.wikipedia.org/wiki/Tower_of_Hanoi) problem recursively.

The user is prompted to enter the number of disks (a positive integer).

The program should output the sequence of moves to transfer all disks from the source rod (A) to the destination rod (C), using the middle rod (B) as auxiliary.
