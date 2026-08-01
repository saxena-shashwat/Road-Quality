# Signal Processing & Applied Mathematics Toolkit

A C-based collection of mathematical modules and signal processing utilities designed for scientific computing, sensor data analysis, and digital signal processing (DSP).

## Project Scope & Modules

This repository serves as a modular toolkit covering key areas of applied mathematics and signal processing:

- **Complex Numbers**: Fundamentals of complex arithmetic, polar conversions, phase/argument, and modulus calculations.
- **Linear Algebra**: Vectors, matrix operations, determinants, and matrix transformations.
- **Numerical Calculus**: Numerical differentiation methods (finite differences) and integration routines (Trapezoidal, Simpson's rules).
- **FFT & Signal Processing**: Discrete Fourier Transforms (DFT), Fast Fourier Transforms (FFT), windowing functions, and frequency-domain analysis.

## Repository Structure

```text
Road-Quality/
├── cmake/               # CMake helper scripts and modules
├── docs/                # Documentation
├── examples/            # Example scripts and sample implementations
├── include/
│   └── cust/
│       └── basic.h      # Custom math definitions and complex number header
├── src/
│   ├── basic.c          # Mathematical and complex number implementations
│   └── main.c           # Application entry point
├── tests/               # Unit testing framework
├── CMakeLists.txt       # CMake build configuration file
├── LICENSE              # MIT License
└── README.md            # Project README
```

## Prerequisites

- **C Compiler**: GCC, Clang, or MSVC supporting **C11**
- **Build System**: [CMake](https://cmake.org/) (v3.15 or higher)
- **Generator**: Ninja, Make, or Visual Studio MSBuild

## Building & Running

### 1. Configure the Build
Generate build files using CMake:
```bash
cmake -B build
```

### 2. Compile the Project
Build the binary executable:
```bash
cmake --build build
```

### 3. Run Executable
Execute the built binary:

- **Windows**:
  ```powershell
  .\build\RoadQuality.exe
  ```
- **Linux / macOS**:
  ```bash
  ./build/RoadQuality
  ```

## License

This project is licensed under the [MIT License](LICENSE).
