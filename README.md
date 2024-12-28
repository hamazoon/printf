# printf

This repository contains a custom implementation of the **`printf`** function in C. The project replicates the behavior of the standard `printf` function from the C Standard Library, with added features and support for various format specifiers.

---

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Project Structure](#project-structure)
- [Usage](#usage)
- [Examples](#examples)
- [Testing](#testing)
- [Author](#author)

---

## Introduction

The **`printf`** function is a versatile C function used for formatted output. This project aims to understand its underlying mechanisms by creating a custom implementation, exploring concepts like:
- Variable argument lists.
- Format specifiers and modifiers.
- String manipulation and memory management.

This implementation serves as a foundational project for developing a deeper understanding of the C language and low-level programming.

---

## Features

- Supports basic format specifiers:
  - `%c`: Character
  - `%s`: String
  - `%d`/`%i`: Signed integers
  - `%u`: Unsigned integers
  - `%o`: Octal representation
  - `%x`/`%X`: Hexadecimal (lowercase/uppercase)
  - `%%`: Literal `%` character
- Handles custom specifiers for flexibility and extensibility.
- Robust error handling and efficient memory management.

---

## Project Structure

### Files

- **`_printf.c`**: Core implementation of the `printf` function.
- **`main.h`**: Header file containing function prototypes and macro definitions.
- **`functions.c`**: Helper functions for processing format specifiers.
- **`utils.c`**: Utility functions for string manipulation and number formatting.
- **`tests/`**: Directory containing test cases for the `_printf` function.

---

## Usage

1. **Clone the Repository**
   ```bash
   git clone https://github.com/hamazoon/printf.git
   cd printf

