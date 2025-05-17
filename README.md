# File Value Counter

A lightweight C++ program that reads `.txt` files, scans for time values following a custom key symbol, and calculates the total sum of the values based on a defined pattern.

---

## Installation

To get this project up and runnig on your local machine, follow the next instructions.

### Prerequisites
Before anything else, make sure you have installed **C++20** (or newer) and a compatible compiler like **GCC** or **Clang** in your system. 

### Steps
1. **Clone the repository:**
Open your prefered terminal and clone the project to your local machine.
    ```bash
    git clone https://github.com/LeoJimenezG/file-value-counter.git
    ```
2. **Navigate into the project directory:**
    ```bash
    cd file-value-counter
    ```
3. **Build the project**
Choose the compilation method that applies to your setup.
    * If you compile using GCC:
        ```bash
        g++ -std=c++20 main.cpp -o main
        ```
    * If you compile using Clang:
        ```bash
        clang++ -std=c++20 main.cpp -o main
        ```
4. **Run the application**
Finally, execute the generated object file to launch the File Hour Counter Program.
    ```bash
    ./main
    ```

---

## How Does It Work?

This project stands out from others I’ve built because it was created to solve a specific personal need. As a result, the code is tightly tailored to my context. However, it's flexible enough to be adapted with minimal effort.

At its core, the program reads a `.txt` file line by line, searching for values (like hours) that follow a user-defined key symbol and match a given pattern. The goal is to extract and sum these values accurately.

To make the scan meaningful, you must configure certain global variables, especially the key symbols and format patterns. If these aren't set correctly, the results will be unreliable, since all filtering and comparison happens during the line-by-line parsing.

### `initialize_variables()` 
Initializes the global variables used throughout the program. Technically, this could be avoided, but centralizing the initialization helps keep the logic clear and easy to understand. It's a stylistic choice to improve readability and control.

### `search_file_content()`
This is the heart of the program. It reads the file line by line, storing each one in the `line` variable. For every line, it checks whether the predefined key symbols and pattern are present. If so, it extracts the value and adds it to the running total.

### `show_total_hours()`
A simple utility function that prints the final result stored in `total_hours`, using a personalized but easy-to-read format.

---

## Notes

* Initially, I aimed to design a general purpose solution that could adapt to various scenarios. However, I quickly realized that such flexibility added unnecessary complexity and more importantly, it didn't solve my specific need. That’s why this project takes a focused, tailored approach.
* I haven’t tested the program with other file types or formats, so its behavior outside the intended use case is unknown. Consider it a prototype rather than a production-ready tool.
* This is the first meaningful and functional project I've completed in C++. I'm still learning the language, and while the code may not follow all best practices, it's a reflection of what I know and don't know.

---

## Useful Resources

* **[C++ Reference](https://en.cppreference.com/w/)** - An extensive and reliable reference for modern C++ standards, syntax, and standard libraries.
* **[C++ Standard String](https://cplusplus.com/reference/string/string/)** - Detailed documentation on string operations and methods.
* **[C++ File Handling](https://www.w3schools.com/CPP/cpp_files.asp)** - A beginner-friendly overview of reading from and writing to files in C++.

