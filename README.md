# Postfix Expression Evaluator (C++)

A simple C++ program that evaluates **Postfix (Reverse Polish Notation)** expressions using a **stack**.

---

## Overview
This program takes a postfix mathematical expression (like `234*+29*3/-`)  
and evaluates it step by step using a manual stack implementation in C++.

### Example
```bash
Input:234*+29*3/-"
Output:8
```
---

## Features
- Supports basic arithmetic operators: `+`, `-`, `*`, `/`
- Uses manual integer stack implementation (no STL)
- Detects stack overflow and underflow
- Prints the evaluated result of the postfix expression

---
## How to clone
```bash
git clone https://github.com/enes-abulgayt/postfix-evaluator.git
cd postfix-evaluator
```
---
## How to Run

### 1️ Compile
Use g++ to compile the program:
```bash
g++ postfix-evaluator.cpp -o postfix-evaluator.exe
```

### 2 Run
```bash
./postfix-evaluator.exe
```

### 3 Example Run
```bash
Enter the postfix expression: 56*34*+2-64/+
Evaluated result: 41
```