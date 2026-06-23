# Task Set #4

---

### Task 1
Write a C++ program that calculates the difference between two dates and outputs the result in terms of days.

The program should accept two dates entered by the user in a specific format (e.g., YYYY-MM-DD, DD/MM/YYYY, etc.). You are free to choose the date format.

Some notes:
  * The earliest possible date is 1 AD.
  * Accounting for the Julian and Gregorian calendars and the 10-day discrepancy between them would be a nice bonus, though not required. You're free to calculate the difference using only one calendar if you find the task difficult (I definitely did). This wasn't an original requirement, but I wanted to make it technically correct. :)
  * This program assumes the canonical Gregorian calendar reform date, as introduced by Pope Gregory XIII in 1582. Accordingly, dates between October 5 and October 14, 1582 (inclusive) are treated as nonexistent and will be rejected as invalid input. While different regions adopted the Gregorian calendar at various later times (e.g., Britain in 1752, Russia in 1918), this implementation does not account for those differences and treats the reform as universally applied in 1582.

---

### Task 2
Write a C++ program to decipher the following equation:

```
OHOHO
+
AHAHA
-----
AHAHAH
```

Here, the letters `O`, `A`, and `H` represent **distinct single-digit numbers**.
Your task is to solve for these digits.

Keep in mind that your program needs to be executed only once. You may not worry about its efficiency.

### Task 3
Write a C++ program to decipher the following equation:

```
SEND
+
MORE
----
MONEY
```

In this puzzle, the letters S, E, N, D, M, O, R, and Y represent **distinct single-digit numbers**.
Your task is to solve for these digits.

Again, your program needs to be executed only once. Efficiency is not a concern here.

---

### Task 4
Write a C++ program that calculates the postage cost for a package based on its weight and determines how to pay that cost using the smallest number of stamps **without using if statements**.

Requirements:
  * The base postage cost is `10` cents.
  * For every full `50` grams of weight, an additional `5` cents is added to the base cost.
  * The total postage cost is then broken down into the **fewest** number of stamps using denominations of:
    * `10` cents
    * `4` cents
    * `1` cent

For input of 77 grams:
```
Enter package weight in grams: 77

Package weight: 77g.
Postage fee: 15 cents.
Total number of stamps: 3
Of which 1 x 10 cents, 1 x 4 cents, 1 x 1 cent.
```
