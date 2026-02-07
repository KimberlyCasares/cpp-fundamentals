# Sequence Filtering and Processing (C++)

## Overview
This program implements file-based processing of biological sequence data in C++. It reads structured input, applies filtering logic across multiple records, and outputs computed results for downstream analysis.

## Concepts Demonstrated
- File I/O and structured input parsing
- Iterative processing across datasets
- Conditional filtering logic
- Separation of input data and computation
- Command-line oriented scientific tooling

## Files
- `8_sequence_filtering.cpp` — main C++ program
- `THA08-SampleInput10.txt` — sample input dataset

## Build & Run
```bash
g++ -std=c++17 8_sequence_filtering.cpp -o sequence_filter
./sequence_filter example_input.txt
