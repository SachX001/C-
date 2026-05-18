# learning C++ :
Collection of C++ codes and small projects i made in my freshman year.

This repository contains the collections of beginner friendly projects i made while learning programming concepts.
The goal is to build a strong foundation by practicing small problems step by step. 

## 📂 Folder Structure

- **learning-c-/** → Programs that use custom functions
  -square_numbers.cpp → Calculates and prints squares of the numbers in a user defined range.
  ## 🚀 Program: square_numbers.cpp

  ### Description
This program demonstrates:
- Using a function to calculate squares of numbers
- Iterating over a range with a for-loop
- Basic input/output in C++

### Example Usage
Enter starting and ending numbers:
1 5

Output:
1 - 1
2 - 4
3 - 9
4 - 16
5 - 25

### Learning Objectives
- For Loops
- Functions
- Input/Output
- Variables and scope
- Problem-solving basics


## 🚀 Program: TriangleDeterminer.cpp
This is a simple C++ program that takes the lengths of three sides of a triangle as input and determines whether the triangle is:

- **Equilateral** – all three sides are equal  
- **Isosceles** – any two sides are equal  
- **Scalene** – all sides are different  

 📌 How It Works

The program uses basic `if-else` conditions to compare the sides and classify the triangle

🚀 Usage:
1. Compile the code:
   g++ triangle.cpp -o triangle

2.Run the executable:
 ./triangle

3.Enter three side lengths (float or int):
 5 5 8

4.Output:
 isosceles

💻 This is part of my daily practice to improve problem-solving and C++ skills.


## 🚀Factorial Calculator (C++)

This is a simple C++ program that calculates the factorial of a number using a do...while loop.

📜 Description

The program takes an integer input from the user and prints the factorial of that number.
It continues multiplying until it reaches 1, following the formula:
N! = N*N(N-1)*(N-2)*(N-3)...1

🛠️ Features

Uses do...while loop to demonstrate iterative logic.

Handles 0! correctly (prints 1).

Simple and beginner-friendly code.


## 🚀 Reverse Array in C++

This is a simple C++ program that reads an array of integers from the user and prints the elements in reverse order.

📖 How It Works

 1.Takes input N – the number of elements in the array.

 2.Reads N integers from the user.

 3.Prints the elements in reverse order, separated by spaces.

 🖥️ Example

   Input:
   5
   2 4 5 6 8

   Output:
   8 6 5 4 2



## 🚀 Comma-Separated Number Parser

A simple C++ program that reads a string of comma-separated numbers from standard input, parses them using `stringstream`, and prints each number on a new line.

 🚀 Features
- Takes input as a **single string** containing numbers separated by commas (e.g., `10,20,30`).
- Uses `vector<char>` to store characters before converting to a string.
- Utilizes `stringstream` to separate numbers from commas.
- Prints each number on its own line.

 📋 Example
### Input:
10,20,30,40

 Output:
10
20
30
40

 🛠️ How It Works
  1. **Store Input in `vector<char>`**  
   Reads the string character by character and stores it in a `vector<char>`.

  2. **Convert Vector to String**  
   Reconstructs a string from the `vector<char>` so that it can be processed by `stringstream`.

  3. **Parse Numbers with `stringstream`**  
   Extracts each integer from the string and consumes commas in between to prepare for the next number.

 🎯 Learning Highlights

   1.Working with vector<char>

   2.Converting vector<char> to std::string

   3.Parsing formatted input using stringstream

   4.Handling separators (commas) while extracting integers

 📂 Use Cases

  1.Parsing CSV-like data.

  2.Handling custom-formatted input in competitive programming.

  3.Learning and practicing stringstream in C++.

 🧠 Author's Note

   This program was built as part of a learning journey into C++ input parsing and data handling. It's a small but powerful example of how to handle custom input formats in a clean and efficient way.



## 🚀 Variable-Sized Arrays in C++

This project demonstrates how to work with dynamic 2D arrays in C++ using vector<vector<int>>.
It is based on the classic "Variable Sized Arrays" problem (HackerRank).

 🚀 Problem Description

We are given:
n → number of arrays
q → number of queries
For each of the n arrays:
Read p (the size of the array).
Read p integers and store them.
Then for each of the q queries:
Read two integers row and col.
Print the element at matrix[row][col].

 🖥️ Code Overview

Uses vector<vector<int>> to store a flexible number of arrays.
Dynamically resizes rows based on input.
Accesses elements using matrix[row][col].
Outputs the result for each query.

 🧠 Key Learnings

How to use vector<vector<int>> for dynamic 2D arrays.
How to read variable-length arrays in C++.
How to access and print values based on queries.


##  🚀 Student Class Program

This program demonstrates basic **OOP concepts in C++** using a `Student` class.  
It uses **private data members** for encapsulation and initializes them using a **constructor**.  
The program then prints the student details using a public member function.

 🖥️ Code Overview

- **Class:** `Student`
- **🔒 Private Members:** `age`, `firstName`, `lastName`, `standard`
- **🌐 Public Methods:**  
  - **Constructor:** Initializes student data  
  - **🖨️ printDetails():** Prints all the student information  

🧠 Concepts Used

- 🏷️ Classes & Objects  
- 🔑 Access Specifiers (`private:` / `public:`)  
- 🏗️ Constructor  
- 🏹 `this->` pointer for initialization  
- 🛡️ Encapsulation



## 🚀Ceil Division of Product (`ceil_division.cpp`)
 
### 🎓 Problem Overview

Given multiple test cases, each with two integers `n` and `x`, we need to compute:

\[
\text{answer} = \left\lceil \frac{n \times x}{4} \right\rceil
\]

In simpler terms, we:

- Multiply `n` and `x`
- Divide the result by `4`
- Round the result **up** to the nearest integer

This is a common pattern in competitive programming when calculating the **minimum number of groups / batches / units** needed, where each group can handle `4` units at most.

### 🚀Input Format

- The first line contains an integer `t` — the number of test cases.
- Each of the next `t` lines contains two integers `n` and `x`.



## 🎓 Student Score Comparison (C++)

A clean and efficient **C++ program** that reads marks of multiple students, calculates their **total scores**, and determines **how many students scored higher than the first student**.
This project focuses on strengthening **C++ fundamentals** using classes and vectors.

  ### 🧠 Problem Description

  - You are given scores of **N students**
  - Each student has **exactly 5 subject marks**
  - The program:
    1. Calculates the **total score** of each student
    2. Compares all totals with the **first student’s total**
    3. Outputs how many students scored **strictly higher** than student 0

  ### 🛠️ Concepts Used

  ✅ Classes & Objects  
  ✅ 2D and 1D `vector` usage  
  ✅ Nested loops  
  ✅ Input / Output handling  
  ✅ Basic comparison logic  

  ### 📥 Input Format
    N
    a1 a2 a3 a4 a5
    b1 b2 b3 b4 b5
    ...

  ### 🧱 Code Breakdown

   #### 🔹 `Student` Class

 **Private Members**
 - `scores` → Stores marks of all students (2D vector)
 - `total` → Stores total score of each student
 - `n` → Number of students
 - `sum` → Temporary sum for each student
 - `num` → Count of students scoring higher than student 0

 **Public Methods**
 - `input()` → Reads input and stores scores
 - `calculateTotalScore()` →
   - Computes total scores
   - Compares with first student
   - Prints the final count


## 🔁 N Repeated Element in Size 2N Array (C++)

A beginner-friendly C++ program that identifies the element repeated N times in an array of size 2N.
This project focuses on strengthening core C++ fundamentals, logical reasoning, and debugging skills without relying on advanced STL containers.

 ### 🧠 Problem Description

  You are given an integer array nums of size 2N
  Exactly one element appears N times
  All other elements appear only once

  The program:
  Counts the frequency of each element
  Determines the maximum frequency
  Outputs the element repeated N times

### 🛠️ Concepts Used

 ✅ Classes & Objects
 
 ✅ vector usage
 
 ✅ Nested loops
 
 ✅ Frequency counting logic
 
 ✅ Input handling using stringstream
 
 ✅ Brute-force problem solving

 ### 📥 Input Format (Local Testing)

   ⚠️ Important: This program is meant for local execution (VS Code / terminal).

   The input is read using stringstream, which keeps reading integers until a non-integer character is encountered.

    ✅ Correct Input Example:
     5 1 5 2 5 3 5 4 x
     
    ❌ Incorrect Input Example:
     5 1 5 2 5 3 5 4

   Without a non-integer at the end, input parsing may not terminate as expected.

  ### 🧱 Code Breakdown
  🔹 Solution Class

   Private Logic:
    Uses a count vector to store frequency of each element
    Iterates through the array to count occurrences manually
   
   Public Method:
    repeatedNTimes(vector<int>& nums) →
    Counts how many times each element appears
    Finds the maximum frequency
    Returns the element corresponding to that frequency

  ### ⏱️ Time & Space Complexity

   Time Complexity: O(n²) (nested loops)
  
   Space Complexity: O(n) (frequency storage)

   This approach prioritizes clarity and fundamentals over optimization.


 ## 🔁 Palindrome Number Checker (C++)
  A simple and beginner-friendly C++ program that checks whether a given integer is a palindrome.
  
  This project focuses on strengthening core C++ fundamentals, including strings, vectors, loops, and logical comparison — without using advanced STL algorithms.

### 🧠 Problem Description
You are given an integer x

A number is considered a palindrome if it reads the same forward and backward

 #### The program:
  Converts the integer into a string
  
  Stores the original order of characters
  
  Stores the reversed order of characters
  
  Compares both sequences
  
  Prints whether the number is or is not a palindrome

### 🛠️ Concepts Used
✅ Classes & Objects

✅ stringstream (integer → string conversion)

✅ vector<char> usage

✅ Loops and indexing

✅ Manual string reversal

✅ Direct vector comparison

### 📥 Input Format
    The program takes a single integer as input:
     121

### 📤 Output Format
The program prints the result directly to the console.

    Example Output:
    is palindrome

### 🧱 Code Breakdown
🔹 Solution Class

   Method
   isPalindrome(int x)
   
   Converts the integer to a string using stringstream
   
   Stores digits in a vector (number)
   
   Stores digits in reverse order (reversed_number)
   
   Compares both vectors using ==
   
   Prints the result
   
   This approach avoids STL shortcuts and helps in understanding how palindrome logic works internally.


  Perfect — **professional, structured, but still the same recognizable theme** you like.
Clean headings, light emojis, no cringe, GitHub-ready.

---

## 🏛️ Roman Numeral to Integer Conversion (C++)

### 📌 Overview

This project implements a **Roman numeral to integer converter** in C++ using a **brute-force, fundamentals-driven approach**.

Instead of relying on STL maps or one-line tricks, the solution explicitly models:

* Roman symbol → value mapping
* Additive numeral logic
* Subtractive numeral corrections

The focus is **clarity, correctness, and understanding**, not shortest code.

---

### 🎯 Problem Statement

Given a Roman numeral string `s`, return its integer value.

Roman numerals follow these rules:

* Symbols usually **add** their values
* If a **smaller value appears before a larger one**, it is **subtracted**

#### Examples

```
III      → 3
IV       → 4
IX       → 9
MCMXCIV  → 1994
```

---

### 🧠 Design Philosophy

This solution is intentionally split into **two logical passes**:

1. **Additive Pass**
   Convert each Roman symbol to its integer value and compute the total sum.

2. **Correction Pass**
   Detect subtractive pairs (`IV`, `IX`, `XL`, `XC`, `CD`, `CM`) and subtract their correction values from the initial sum.

This separation keeps the logic:

* Easy to reason about
* Easy to debug
* Aligned with brute-force fundamentals

---

### 🧱 Data Structures Used

#### 🔹 Fixed-Size Arrays (Symbol Mapping)

```cpp
char Roman_NumberSet[7] = {'I','V','X','L','C','D','M'};
int Integer_NumberSet[7] = {1,5,10,50,100,500,1000};
```

These arrays simulate a dictionary-like mapping **without using STL maps**, keeping memory usage minimal and predictable.

---

#### 🔹 Vectors

* `Value_set` → stores integer values corresponding to each Roman character
* `diff_value` → stores correction values for subtractive pairs

Both vectors remain small (bounded by the input length).

---

### ⚙️ Algorithm Breakdown

#### Step 1: Symbol Conversion

* Iterate through the input string
* Match each Roman symbol with its numeric value
* Store values in `Value_set`

#### Step 2: Initial Summation

* Sum all values from `Value_set` into `initial_sum`

#### Step 3: Subtractive Pair Detection

* Scan the string for known subtractive pairs:

  * `IV`, `IX`
  * `XL`, `XC`
  * `CD`, `CM`
* Push corresponding correction values into `diff_value`

#### Step 4: Final Calculation

* Sum all correction values into `diff_sum`
* Compute result as:

```cpp
final_value = initial_sum - diff_sum;
```

---

### 📊 Complexity Analysis

#### ⏱ Time Complexity

* **O(n)**
  Two linear passes over the input string

#### 🧠 Space Complexity

* **O(n)**
  Small auxiliary vectors proportional to input length

---

### 🧪 Example Walkthrough

Input:

```
MCMXCIV
```

Processing:

```
Initial sum   = 2216
Corrections   = 200 + 20 + 2
Final result  = 1994
```

Output:

```
1994
```

---

### 💡 Why This Approach?

* Avoids abstraction-heavy STL containers
* Makes Roman numeral rules explicit
* Reinforces fundamentals of arrays, loops, and conditionals
* Demonstrates multi-pass problem solving

Despite its simplicity, the solution is **memory efficient** and performs competitively.

---

### ⚠️ Notes

* This solution prioritizes **learning and clarity**
* It is not the most concise implementation
* Intended as a stepping stone toward optimized or STL-based solutions

---

### 🏁 Conclusion

This project demonstrates that:

* Complex problems can be solved with simple tools
* Clear logic often outperforms clever shortcuts
* Understanding fundamentals leads to better optimization decisions later

A solid, readable, and correct Roman numeral conversion implemented from first principles.


## 🔢 Unique Number of Occurrences (C++)

A beginner-friendly C++ program that determines whether the frequency of each value in an array is unique.

This project focuses on strengthening STL understanding, optimization thinking, and transitioning from brute-force solutions to smarter approaches using `map` and `set`.

### 🧠 Problem Description

You are given an integer array `arr`

The task:

- Count how many times each number appears
- Check whether each frequency count is unique
- Return `true` if all occurrence counts are unique
- Return `false` otherwise

Example:

Input:

1 2 2 1 1 3

Frequency Count:

1 → 3  
2 → 2  
3 → 1  

Since all occurrence values are different:

Output:

true

---

### 🛠️ Concepts Used

✅ Classes & Objects

✅ `vector` usage

✅ `map<int,int>` for frequency counting

✅ `set<int>` for unique occurrence storage

✅ Range-based loops

✅ `stringstream` input handling

✅ STL optimization thinking

---

### 📥 Input Format (Local Testing)

The program reads the input using:

```cpp
getline()
stringstream
```

and stores all integers inside a vector.

---

### 🧱 Code Breakdown

#### 🔹 Solution Class

**Private Logic:**

Create a `map` to store:

```
number → frequency
```

Example:

```
1 → 3
2 → 2
3 → 1
```

Create a `set` to store only unique frequencies:

```
3
2
1
```

Since sets automatically reject duplicates:

If:

```
1 → 2
2 → 2
```

Set becomes:

```
{2}
```

while map size becomes:

```
2
```

---

**Public Method:**

```cpp
uniqueOccurrences(vector<int>& arr)
```

Steps:

1. Count frequency using `map`
2. Insert frequency values into `set`
3. Compare:

```cpp
freq.size() == data.size()
```

If sizes match:

```text
Return true
```

Else:

```text
Return false
```

---

### ⏱️ Time & Space Complexity

#### Time Complexity

```text
O(n log n)
```

- Building frequency map → `O(n log n)`
- Inserting into set → `O(n log n)`

#### Space Complexity

```text
O(n)
```

for map and set storage.


 ## ✌️(More folders will be added as I learn new concepts)


## 🚀 How to Run

1. Clone this repository:
```bash
git clone https://github.com/SachX001/learning-c-

