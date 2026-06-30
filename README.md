# DSA Visualizer (C Language)

A lightweight, interactive tool written entirely in C. This project is designed to help developers and students visualize data structures and algorithms in real-time, making abstract computer science concepts concrete.

---

## Features

This visualizer currently supports three core modules: Stack Operations, Sorting, and Searching.

### 1. Stack Operations
Visualize the **LIFO (Last In, First Out)** principle dynamically.
* **Push:** Watch elements get added to the top of the stack array/structure and see the `top` index increment.
* **Pop:** See the top element leave the stack and the `top` index decrement.
* **Peek/Top:** Highlights the current top element without removing it.

### 2. Sorting Operations
Watch how array elements rearrange themselves step-by-step with real-time visual updates:
* **Bubble Sort:** Visualizes adjacent elements comparing and swapping until the array is fully sorted.
* **Insertion Sort:** Animates the process of picking an element and inserting it into its correct sorted sub-position.
* **Selection Sort:** Scans the array, highlights the minimum element, and swaps it into place.

### 3. Searching Operations
Compare how different algorithms traverse data structures to find a target value:
* **Linear Search:** Checks each element sequentially from index `0` to `n-1`.
   Features a moving radar pointer (^) that scans the array step-by-step.
* **Binary Search:** Drastically reduces search time by cutting the sorted array in half at each step (visualizes `low`, `mid`, and `high` boundaries).Includes a pre-validation check to ensure the array is sorted. Visually squeezes the search window using L, M, and H pointers while greying out discarded elements (-).

---

##  Getting Started

Follow these steps to compile and run the project locally on your machine.

### Prerequisites
You need a C compiler installed (like `gcc`).

* **Linux/Ubuntu:** `sudo apt install build-essential`
* **macOS:** `xcode-select --install`
* **Windows:** MinGW or WSL

### Compilation & Running

1. **Open your terminal or command prompt** in your project folder.
2. **Compile the source code:**
   ```bash
   gcc main.c -o visualizer

Clone this repository:

git clone [https://github.com/sarthaktripathi444-sys/DSA-Terminal-Visualizer.git](https://github.com/sarthaktripathi444-sys/DSA-Terminal-Visualizer.git)

🧠 What I Learned

Mastered input buffer clearing (while (getchar() != '\n');) to safeguard scanf from character input crashes.

Implemented "Lazy Deletion" logic for Stack Pop operations.

The use of if(scanf("%d",choice)!=1) to check whether user entered the number or a character it shows the error if the user entered a character.

Learned how to format dynamic terminal outputs using C's variable width specifiers (%*d, %*s) to create adaptable UI grids that never break alignment.

Handled edge cases effectively, such as preventing Binary Search from running on an unsorted array.
 
