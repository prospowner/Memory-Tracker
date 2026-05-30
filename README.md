# C++ System Memory Tracker

A console-based hardware diagnostics tool written in C++ designed to intercept and display the physical memory architecture of active variables within application runtimes.

## Features
* **Pointer Pointer Address Mapping:** Natively deploys the C++ reference operator (`&`) to expose hexadecimal RAM locations assigned by the OS.
* **Data Scale Auditing:** Utilizes the built-in compile-time `sizeof()` machine controller to output the exact byte consumption configurations of different data objects.
* **Explicit Console Streams:** Isolates metadata components into organized console dashboard panels for clean diagnostics review.

## How to Compile & Run
Compile the source using your standard G++ compiler tools:
```bash
g++ main.cpp -o memory_tracker
