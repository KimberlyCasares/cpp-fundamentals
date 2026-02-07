# Tabular Data Processing Tool (C++)

## Overview
C++ program that reads structured, table-based input data and produces formatted output tables. The tool demonstrates parsing, transformation, and reporting of multi-column datasets, a common requirement in bioinformatics and scientific data workflows.

## Concepts Demonstrated
- File I/O and structured text parsing
- Row-wise and column-wise data processing
- Formatting and writing tabular output
- Separation of input, computation, and output
- Reproducible command-line workflows

## Files
- `11_table_processor.cpp` — main C++ implementation
- `11-Table12.txt` — sample input dataset
- `11-SampleOutput-Table12.txt` — expected output table

## Build & Run
```bash
g++ -std=c++17 11_table_processor.cpp -o table_processor
./table_processor 11-Table12.txt > 11-SampleOutput-Table12.txt

